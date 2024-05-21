// Date: 02.11.2023
// Created by: NPT

#pragma once


#include <cstdint>
#include "clarkes.h"
#include "transfer_functions.h"
#include "CTheta.h"


template<typename T>
struct PLLOuts_t{
    T w;
    CTheta<T> theta;
    constexpr PLLOuts_t(T Ts, T w, T th) : w(w), theta(CTheta<T>{Ts, th}){}
};


template<typename T>
class CPLL{
  private:
    PLLOuts_t<T>        m_outs;
    TF::PIreg<T>        m_piReg;
    clarkes::dqo_t<T>   m_Vdq;
    const T WREF; 
  public:
    constexpr CPLL(T Ts, T Wref,  T K, T Ti, T SatP, T SatN) : 
                  m_outs(PLLOuts_t{Ts, Wref, T(0)}),
                  m_piReg(TF::PIreg{ Ts, K, Ti, SatP, SatN}),             
                  WREF(Wref)
                  {}

                   
    template<typename U>                
    constexpr const PLLOuts_t<T>& out_est(U&& Vabo){
        
        clarkes::abo2dqo<T>(Vabo, m_Vdq, m_outs.theta.out_get());
        T w_pu_ = T(1.0) + m_piReg.out_est(T(0) - m_Vdq.q);
        m_outs.w = w_pu_ * WREF;
        m_outs.theta.out_est(m_outs.w);
        
        return m_outs;
    }
    
    constexpr const T& w_get() const{return m_outs.w;}
    constexpr const T& theta_get() const{return m_outs.theta.out_get();}
    constexpr const T& amp_get() const{return m_Vdq.d;}
    
};

