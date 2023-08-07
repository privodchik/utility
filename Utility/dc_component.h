// Data: 07.08.2023
// Created by: NPT

#pragma once
#include "transfer_functions.h"
#include "timer.h"
#include "pt.h"
#include "aux_utility.h"

namespace dc_comp{

    template<typename T>
    class helper_t{
        TF::Integrator<T>   integrator;
        T                   DC_component;
        TIMER               step_tmr;
        TIMER               est_period_tmr;
        PT                  pt;
        
        public:
            helper_t(time_t timeStep) : 
                integrator(TF::Integrator<T>{AUX_UTILITYL::uSecToSec(timeStep), T{1.0}, T{100.0}, T{-100.0}}), 
                DC_component(0)
                {
                    timer_set(&step_tmr, timeStep);
                    timer_set(&est_period_tmr, TIME_SEC(1));
                }

            T out_est(T in){
                task_out_est(&pt, in);               
                return DC_component;
            }

        private:
            PT_THREAD(task_out_est(PT* pt, T in)){
                
                PT_BEGIN(pt);
                timer_set(&step_tmr, step_tmr.interval);
                timer_set(&est_period_tmr, TIME_SEC(1));

                while(1){
                    PT_YIELD_UNTIL(pt, timer_expired(&step_tmr));
                    timer_advance(&step_tmr, step_tmr.interval);
                    integrator.out_est(in);

                    if (timer_expired(&est_period_tmr)){
                        timer_advance(&est_period_tmr, est_period_tmr.interval);
                        DC_component = integrator.out_get();
                        integrator.reset();
                    }
                
                }
                PT_END(pt);
            }


    };
    


} //namespace dc_comp
