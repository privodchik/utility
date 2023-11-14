/**
 @file
 @date         20.01.2022
 @copyright    NPT
 @author       ID  
*/

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
    
    constexpr CTheta(T Ts, T outVal = static_cast<T>(0)) : 
        m_th(Ts, T(1.0), T(utl::DBL_PI), -T(utl::DBL_PI))
      {
          m_th.out_set(std::move(outVal));
      }
    
        
    template<typename U>
    constexpr decltype(auto) out_est(U&& w){
        saturation(m_th.out_est(std::forward<U>(w)));
        return m_th.out_get();  
    }
    
    constexpr const T& out_get() const{return m_th.out_get();}
    void reset(){m_th.reset();}
    
    template<typename U>
    constexpr void out_set(U&& wt){m_th.out_set(std::forward<U>(wt));}
    
  private:
    
    constexpr void saturation(T wt){
        if (wt >= static_cast<T>(utl::PI)) wt -= static_cast<T>(utl::DBL_PI);
        else if (wt <= static_cast<T>(-utl::PI)) wt += static_cast<T>(utl::DBL_PI);
        m_th.out_set(std::move(wt));
    }
    
};


/** @var CTheta::m_th
    @brief curretnt angle
  */