// Date: 31.08.2023
// Created by: ID


#pragma once

#include "clarkes.h"
#include "transfer_functions.h"
#include "aux_utility.h"


namespace im_foc{
    
    template<typename T>
    struct CurrentModel_t{
        T Ts;
        T Wb;
        T Lu;
        T Tr;
        TF::Integrator<T>   integrator;
        clarkes::polar_t<T> vectFluxR;
        
        void init(){
            integrator = TF::Integrator<T>{Ts, Tr/Wb, T(10000.0), -T(10000.0)};
            integrator.out_set(T(0.01));
            vectFluxR.mag = integrator.out_get();
            vectFluxR.th = 0;
        }
        
        void reset(){
            integrator.out_set(T(0.01));
            vectFluxR.mag = integrator.out_get();
            vectFluxR.th = 0;
        }
        
    };
    
    
        
    template<typename T>
    clarkes::polar_t<T> est(CurrentModel_t<T>& params, clarkes::dqo_t<T> is_dq, T wr){
        
        T k_1div_Tr = T(1.0)/params.Tr;
        
        T err_ = is_dq.d * params.Lu - params.integrator.out_get();
                
        params.vectFluxR.mag = params.integrator.out_est(err_);
        
        T w_slide = is_dq.q * params.Lu * k_1div_Tr / params.vectFluxR.mag;
        
        T w_sync = w_slide + wr;
        
        //wt_add_and_sat<T>(params.Ts, params.vectFluxR.th, w_sync * params.Wb);

        params.vectFluxR.th += w_sync * params.Ts * params.Wb;

        if (params.vectFluxR.th > utl::PI) params.vectFluxR.th -= utl::DBL_PI;
        else  if (params.vectFluxR.th < -utl::PI) params.vectFluxR.th += utl::DBL_PI;
      
        return params.vectFluxR;  
    }
    
    
} //namespace im_foc