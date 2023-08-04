// Date:07.06.2023
// Created by: NPT

#pragma once


#include "transfer_functions.h"


// SOGI is a second-order generalized integrator

namespace sogi{

    template<typename T>
    class SimpleSogi{
        TF::Integrator<T> integrDirect;
        TF::Integrator<T> integrFB;
        
        T alpha;
        T beta;
        
      public:
        
        constexpr SimpleSogi(T Ts = T(0.0001)) : alpha(T{0}), beta(T{0}){
            integrDirect = TF::Integrator<T>{Ts, T(1), T(10), T(-10)};
            integrFB = TF::Integrator<T>{Ts, T(1), T(10), T(-10)};
        }
        
        constexpr void out_est(T signal, T w){
            beta = integrFB.out_est(alpha * w);
            
            T err_ = (signal - alpha) * T(0.7) - beta;
            err_ *= w;
            alpha = integrDirect.out_est(err_);
        }
        
        constexpr const T& alpha_get(){return alpha;}
        constexpr const T& beta_get(){return beta;}
        
        constexpr void config(T Ts){
            integrDirect = TF::Integrator<T>{Ts, T(1), T(10), T(-10)};
            integrFB = TF::Integrator<T>{Ts, T(1), T(10), T(-10)};
        }
        
        constexpr void reset(){
            integrDirect.reset();
            integrFB.reset();
            alpha = T(0);
            beta = T(0);
        }
        
    };
    
} //namespace sogi

