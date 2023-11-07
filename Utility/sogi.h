// Date:07.06.2023
// Created by: NPT

#pragma once


#include "transfer_functions.h"


// SOGI is a second-order generalized integrator


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
    
    template<typename U1, typename U2>
    constexpr void out_est(U1&& signal, U2&& w){
        beta = integrFB.out_est(alpha * std::forward<U2>(w));
        
        T err_ = (std::forward<U1>(signal) - alpha) * T(0.7) - beta;
        err_ *= w;
        alpha = integrDirect.out_est(std::move(err_));
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
