// Date: 17.08.2023
// Created by: ID

//#pragma once

#ifndef _MRAS_H
#define _MRAS_H

#include "clarkes.h"
#include "transfer_functions.h"

namespace mras_pmsm{
    using namespace clarkes;

    template <typename T>
    struct AdaptModelPar_t{
            T Ts;
            T Wb;
            T Ld;
            T Lq;
            T Rs;
            T Ff;
            
            TF::Filter<T> isd;
            TF::Filter<T> isq;
            
            T wEva;
            
    };
    
    
    template <typename T>
    struct MRAS_t{
        AdaptModelPar_t<T> am;
        
        T Kadapt;
        T Tiadapt;
        TF::PIreg<T> reg;
    };
    
    
    template <typename T>
    void adapt_model_init(AdaptModelPar_t<T>& am){
        am.isd = TF::Filter<T>{am.Ts, am.Ld/am.Rs/am.Wb, T(1000.), T(-1000.)};
        am.isq = TF::Filter<T>{am.Ts, am.Lq/am.Rs/am.Wb, T(1000.), T(-1000.)};
        am.isd.reset();
        am.isq.reset();
        am.wEva = T(0);
    }
    
    
    template <typename T>
    void adapt_model_rst(AdaptModelPar_t<T>& am){
        am.isd.reset();
        am.isq.reset();
        am.wEva = T(0);
    }

    
    template <typename T>
    void adapt_model_est1(AdaptModelPar_t<T>& am, const dqo_t<T>& Vs){
        T xk = Vs.d + am.wEva * am.Lq * am.isq.out_get();
        am.isd.out_est(xk / am.Rs);
        
        xk = Vs.q - am.wEva*(am.isd.out_get() * am.Ld + am.Ff);
        am.isq.out_est(xk / am.Rs); 
    }
    
        
    template <typename T>
    T adapt_model_est2(AdaptModelPar_t<T>& am, const dqo_t<T>& Is){
        return  Is.d * am.isq.out_get() - 
                Is.q * am.isd.out_get() -
                (Is.q - am.isq.out_get()) * am.Ff/am.Ld;  
    }
    
    template <typename T>
    void mras_rst(MRAS_t<T>& m){
        adapt_model_rst(m.am);
        m.reg.reset();
    }
    
    template <typename T>
    void mras_init(MRAS_t<T>& m){
        adapt_model_init(m.am);
        m.reg = TF::PIreg<T>{m.am.Ts, m.Kadapt, m.Tiadapt, T(10000.f), T(-10000.f)};
        mras_rst(m);
    }
    
    template <typename T>
    T mras_est(MRAS_t<T>& m, const dqo_t<T>& Vs, const dqo_t<T>& Is){
        adapt_model_est1(m.am, Vs);
        T err = adapt_model_est2(m.am, Is);
        return m.am.wEva = m.reg.out_est(err);        
    }



} //namespace mras_pmsm

#endif //_MRAS_H

