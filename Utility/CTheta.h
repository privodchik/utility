// Date: 02.11.2023
// Created by: NPT

#pragma once

#include <cstdint>
#include <utility>
#include <type_traits>
#include "user_constants.h"
#include "transfer_functions.h"


template <typename T>
class CTheta{
  
  private:
    TF::Integrator<T> m_th;
    
  public:
    constexpr CTheta(T Ts, T outVal) : 
        m_th( TF::Integrator{Ts, T(1.0), T(utl::DBL_PI), -T(utl::DBL_PI)} )
      {
          m_th.out_set(std::move(outVal));
      }
    
    template<typename U>
    decltype(auto) out_est(U&& w){
        saturation(m_th.out_est(std::forward<U>(w)));
        return m_th.out_get();  
    }
    
    const T& out_get() const{return m_th.out_get();}
    void reset(){m_th.reset();}
    
    template<typename U>
        void out_set(U&& wt){m_th.out_set(std::forward<U>(wt));}
    
  private:
    
    void saturation(T wt){
        if (wt > T(utl::PI)) wt -= T(utl::DBL_PI);
        else if (wt < T(-utl::PI)) wt += T(utl::DBL_PI);
        m_th.out_set(std::move(wt));
    }
    
};


