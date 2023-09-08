// Date: 08.09.2023
// Created by: ID

//#pragma once

#ifndef _MRAS4_IM_H
#define _MRAS4_IM_H

#include "clarkes.h"
#include "transfer_functions.h"

namespace mras4_im{
    using namespace clarkes;

    template <typename T>
    struct IMpar_t{
            T Ts;
            T Wb;
            T Lb;
            T Rb;
            T Rs;
            T Rr;
            T Lu;
            T Lss;
            T Lrs;
            T Tr;
     };
    
    
    template <typename T>
    struct ReferenceModel_t{

        T sigma;
        T Lsh;
        T Rs;
        T Rb;
        T Lb;
        T Kr;
        


        abo_t<T> e;
        
        TF::Differentiator<T> dEsa;
        TF::Differentiator<T> dEsb;
            
        void init(const IMpar_t<T>& im_par){
            sigma = T(1.0) - im_par.Lu*im_par.Lu/((im_par.Lu + im_par.Lrs)*(im_par.Lu + im_par.Lrs));
            Lsh = sigma * (im_par.Lu + im_par.Lss);
            Rs = im_par.Rs;
            Rb = im_par.Rb;
            Lb = im_par.Lb;
            Kr = im_par.Lu/(im_par.Lu + im_par.Lrs);
            e.a = e.b = e.o = T{0};
            dEsa = TF::Differentiator<T>{im_par.Ts, T{1000.0}, -T{1000.0}};
            dEsb = TF::Differentiator<T>{im_par.Ts, T{1000.0}, -T{1000.0}};
        }
        
        
        abo_t<T> est(abo_t<T> u_ab, abo_t<T> i_ab){
            e.a = u_ab.a - (dEsa.out_est(i_ab.a) * Lsh * Lb / Rb  + Rs * i_ab.a);
            e.a *= Rb/(Lb*Kr);
            e.b = u_ab.b - (dEsb.out_est(i_ab.b) * Lsh * Lb / Rb  + Rs * i_ab.b);
            e.b *= Rb/(Lb*Kr);
            return e;
        }
        
        
        void reset(){
            dEsa.reset();
            dEsb.reset();
            e.a = e.b = e.o = T{0};
        }
    };

    
    template <typename T>
    struct AdaptModel_t{
    
        TF::Integrator<T>       Psia;
        TF::Integrator<T>       Psib;
        clarkes::abo_t<T>       e;
        T                       Tr;
        T                       Lu;
        T                       Tb;


        void init(const IMpar_t<T>& im_par){
            Tr = im_par.Tr;
            Lu = im_par.Lu;
            Tb = T(1.0)/im_par.Wb;
            T sat_ = T{10.0};
            
            Psia = TF::Integrator<T>{im_par.Ts, T(1.0), sat_, -sat_};
            Psia.reset();
            
            Psib = TF::Integrator<T>{im_par.Ts, T(1.0), sat_, -sat_};
            Psib.reset();
            
        }
        
        
        clarkes::abo_t<T> est(abo_t<T> i_ab, T wr){

            e.a = (i_ab.a * Lu - Psia.out_get()) / Tr - wr *Psib.out_get();
            e.a /= Tb;
            Psia.out_est(e.a);

            e.b = (i_ab.b * Lu - Psib.out_get()) / Tr + wr *Psia.out_get();
            e.b /= Tb;
            Psib.out_est(e.b);

            return e;
        }

        
        void reset(){
            e.a = e.b = e.o = T{0};
            ima.reset();
            imb.reset();
        }
    };
    
    
    template <typename T>
    struct MRAS_t{
        IMpar_t<T>              im;
        ReferenceModel_t<T>     rm;
        AdaptModel_t<T>         am;    
        
        T Kadapt;
        T Tiadapt;
        TF::PIreg<T> reg;
        
      public:   
        
        void init(){
            rm.init(im);
            am.init(im);
            T sat_ = T{10.0};
            reg = TF::PIreg<T>{im.Ts, Kadapt, Tiadapt, sat_, -sat_};
        }
        
        
        T est(abo_t<T> u_ab, abo_t<T> i_ab){
            
            clarkes::abo_t<T> e_ref = rm.est(u_ab, i_ab);
            clarkes::abo_t<T> e_adapt =  am.est(i_ab, reg.out_get());
            T err_ = e_ref.b * e_adapt.a - e_ref.a * e_adapt.b;
            return reg.out_est( err_);
        }
        
        T wr_get(){return reg.out_get();}
        
        
        void reset(){
            init();
            rm.reset();
            am.reset();
            reg.reset();
        }
    };
    

} //namespace mras4_im

#endif //_MRAS4_IM_H

