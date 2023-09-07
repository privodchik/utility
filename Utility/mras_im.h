// Date: 31.08.2023
// Created by: ID

//#pragma once

#ifndef _MRAS_IM_H
#define _MRAS_IM_H

#include "clarkes.h"
#include "transfer_functions.h"

namespace mras_im{
    using namespace clarkes;

    template <typename T>
    struct IMpar_t{
            T Ts;
            T Wb;
            T Rb;
            T Lu;
            T Lss;
            T Lrs;
            T Tr;
    };
    
    
    template <typename T>
    struct ReferenceModel_t{
        T q;
        T k;
        abo_t<T> iab_z_1;
        
        
        void init(const IMpar_t<T>& im_par){
            T sigma = T(1.0) - im_par.Lu * im_par.Lu / ( (im_par.Lu+im_par.Lss) 
                                                        *(im_par.Lu+im_par.Lrs) );
            k = sigma * (im_par.Lu + im_par.Lss) / (im_par.Rb * im_par.Ts);
        }
        
        
        T est(abo_t<T> u_ab, abo_t<T> i_ab){
           
            q = (i_ab.a * u_ab.b - i_ab.b * u_ab.a) - 
                (iab_z_1.a * i_ab.b - iab_z_1.b * i_ab.a) * k;
            
            iab_z_1 = i_ab;
            
            return q;

        }
        
        
        void reset(){
            q = T{0};
            iab_z_1.a = T{0};
            iab_z_1.b = T{0};
        }
    };

    
    template <typename T>
    struct AdaptModel_t{
        T                       q;
        T                       ema;
        T                       emb;
        TF::Integrator<T>       ima;
        TF::Integrator<T>       imb;
        T                       Tr;
        T                       kEm;
        

        void init(const IMpar_t<T>& im_par){
            Tr = im_par.Tr;
            kEm = std::pow(im_par.Lu, 2.0) / (im_par.Lu + im_par.Lrs);
            
            T sat_ = T{10.0};
            
            ima = TF::Integrator<T>{im_par.Ts, T(1.0)/im_par.Wb, sat_, -sat_};
            ima.reset();
            
            imb = TF::Integrator<T>{im_par.Ts, T(1.0)/im_par.Wb, sat_, -sat_};
            imb.reset();
            
        }
        
        
        T est(abo_t<T> i_ab, T wr){
            T k_1divTr = T(1.0)/Tr;
            
            T ima_z_1 = ima.out_get();
            T imb_z_1 = imb.out_get();
            
            T err_ = (i_ab.a -  ima_z_1) * k_1divTr  - wr * imb_z_1; 
            ema = ima.out_est(err_) * kEm;
            
            err_ = (i_ab.b -  imb_z_1) * k_1divTr  + wr * ima_z_1; 
            emb = imb.out_est(err_) * kEm;
            
            q = i_ab.a * emb - i_ab.b * ema;
            
            return q;
        }

        
        void reset(){
            q = T{0};
            ema = T{0};
            ema = T{0};
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
            
            T err_ = rm.est(u_ab, i_ab) - am.est(i_ab, reg.out_get());
            return reg.out_est(err_);
        }
        
        T wr_get(){return reg.out_get();}
        
        
        void reset(){
            init();
            rm.reset();
            am.reset();
            reg.reset();
        }
    };
    

} //namespace mras_im

#endif //_MRAS_IM_H

