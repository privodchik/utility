// Date: 07.09.2023
// Created by: ID

//#pragma once

#ifndef _MRAS3_IM_H
#define _MRAS3_IM_H

#include "clarkes.h"
#include "transfer_functions.h"

namespace mras3_im{ // P.Vas
    using namespace clarkes;

    template <typename T>
    struct IMpar_t{
            T Ts;
            T Wb;
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
        T Tb;
        
        abo_t<T> e;
        
        TF::Differentiator<T> dEsa;
        TF::Differentiator<T> dEsb;
            
        void init(const IMpar_t<T>& im_par){

            Rs = im_par.Rs;
            T Lu = im_par.Lu;
            T Ls = im_par.Lu + im_par.Lss;
            T Lr = im_par.Lu + im_par.Lrs;
            Tb = T(1.0)/im_par.Wb;
            sigma = T(1.0) - Lu*Lu/(Ls*Lr);
            Lsh = sigma * Ls;
            e.a = e.b = e.o = T{0};
            dEsa = TF::Differentiator<T>{im_par.Ts, T{1000.0}, -T{1000.0}};
            dEsb = TF::Differentiator<T>{im_par.Ts, T{1000.0}, -T{1000.0}};
        }
        
        
        abo_t<T> est(abo_t<T> u_ab, abo_t<T> i_ab){
            e.a = u_ab.a - (dEsa.out_est(i_ab.a) * Lsh * Tb  + Rs * i_ab.a);
            e.b = u_ab.b - (dEsb.out_est(i_ab.b) * Lsh * Tb  + Rs * i_ab.b);
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
    
        TF::Integrator<T>       ima;
        TF::Integrator<T>       imb;
        clarkes::abo_t<T>       e;
        T                       Tr;
        T                       k;
        T                       Lmh;
        T                       Tb;
        T                       Lu;
        T                       Lr;



        void init(const IMpar_t<T>& im_par){
            Tr = im_par.Tr;
            Lu = im_par.Lu;
            Lr = im_par.Lu + im_par.Lrs; 
            Lmh = Lu*Lu/Lr;
            k = Tr/Lmh;
            Tb = T(1.0)/im_par.Wb;
            T sat_ = T{1000.0};
            
            ima = TF::Integrator<T>{im_par.Ts, Tb, sat_, -sat_};
            ima.reset();
            
            imb = TF::Integrator<T>{im_par.Ts, Tb, sat_, -sat_};
            imb.reset();
            
        }
        
        
        clarkes::abo_t<T> est(abo_t<T> i_ab, T wr){

            T ima_z_1 = ima.out_get();
            T imb_z_1 = imb.out_get();

            e.a = i_ab.a * Tb - ima_z_1 / Tr - wr *imb_z_1;
            ima.out_est(e.a);
            e.a *= k;

            e.b = i_ab.b * Tb - imb_z_1 / Tr + wr *ima_z_1;
            imb.out_est(e.b);
            e.b *= k;

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
    

} //namespace mras3_im

#endif //_MRAS3_IM_H

