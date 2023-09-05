// Date: 31.08.2023
// Created by: ID

//#pragma once

#ifndef _MRAS_IM_H
#define _MRAS_IM_H

#include "clarkes.h"
#include "transfer_functions.h"

namespace mras2_im{
    using namespace clarkes;

    template <typename T>
    struct IMpar_t{
            T Ts;
            T Wb;
            T Lu;
            T Lss;
            T Lrs;
            
            T Ls;
            T Lr;

            T Rs;
            T Rr;

            T Lsh;
            T Lrh;
            
            T Tsh;
            T Trh;

            T Ks;
            T Kr;

            void config(){
                Ls = Lss + Lu;
                Lr = Lrs + Lu;
                
                Lsh = Ls - Lu*Lu/Lr;
                Lrh = Lr - Lu*Lu/Ls;

                Ks = Lu/Ls;
                Kr = Lu/Lr;

                Tsh = Lsh/Rs;
                Trh = Lrh/Rr;

            }
    };
    
    
    template <typename T>
    struct ReferenceModel_t{
        void init(){}
        void est(){}
        void reset(){}
    };

    
    template <typename T>
    struct AdaptModel_t{
        void init(){}
        void est(){}
        void reset(){}
    };
    
    
    template <typename T>
    struct MRAS_t{
        IMpar_t<T>              im;

        TF::Filter<T> fluxSa;
        TF::Filter<T> fluxSb;
        TF::Filter<T> fluxRa;
        TF::Filter<T> fluxRb;

        T Kadapt;
        T Tiadapt;
        TF::PIreg<T> reg;
        
      public:   
        
        void init(){
            im.config();
            fluxSa = TF::Filter<T>{im.Ts, im.Tsh/im.Wb, T(10.), T(-10.)};
            fluxSb = fluxSa;
            fluxRa = TF::Filter<T>{im.Ts, im.Trh/im.Wb, T(10.), T(-10.)};
            fluxRb = fluxRa;


            reg = TF::PIreg<T>{im.Ts, Kadapt, Tiadapt, T(10.), T(-10.)};
            reg.reset();
        }

        
        
        T est(abo_t<T> u_ab, abo_t<T> i_ab){

            T ia_est = (fluxSa.out_get() - im.Kr * fluxRa.out_get())/im.Lsh;
            T ib_est = (fluxSb.out_get() - im.Kr * fluxRb.out_get())/im.Lsh;

            T dia = i_ab.a - ia_est;
            T dib = i_ab.b - ib_est;

            T e = dia * fluxRb.out_get() - dib * fluxRa.out_get();

            T err_ = u_ab.a * im.Tsh + im.Kr * fluxRa.out_get();
            fluxSa.out_est(err_);

            err_ = u_ab.b * im.Tsh + im.Kr * fluxRb.out_get();
            fluxSb.out_est(err_);

            T w_ = reg.out_est(e);

            err_ = im.Ks * fluxSa.out_get() - w_ * im.Trh * fluxRb.out_get();
            fluxRa.out_est(err_);

            err_ = im.Ks * fluxSb.out_get() + w_ * im.Trh * fluxRa.out_get();
            fluxRb.out_est(err_);


            return w_;
        }
        
        T wr_get(){return reg.out_get();}
        
        
        void reset(){
            init();
        }
    };
    

} //namespace mras2_im

#endif //_MRAS_IM_H

