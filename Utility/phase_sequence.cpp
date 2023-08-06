// Date:04.08.2023
// Created by: NPT

#include "phase_sequence.h"
#include "expt.h"
#include "aux_utility.h"
#include <type_traits>
#include <utility>
#include "transfer_functions.h"
#include "timer.h"



namespace ph_seq{
    
    using namespace expt;
    
   
    static bool meandr[2]{0};
    static TF::Filter<float> lpf[2];
    static TF::Difference<float> diff[2];
    static TIMER tmr;

    static bool is_timer_expired = false;
    
    PT_THREAD(task_phase_sequence(ExPT* pt, time_t period, float ua_pu, float ub_pu, float uc_pu, eSequence_t result)){
        
        PT_BEGIN(pt);
        timer_set(&pt->tmr, period);

        lpf[1] = lpf[0] = 
            TF::Filter<float>{ AUX_UTILITY::uSecToSec<float>(period), 0.001f, 1.f, -1.f };
        
        diff[2] = diff[1] = diff[0] = TF::Difference<float>{1.f, 0.f};

        /*
        while(1){
            PT_YIELD_UNTIL(pt, timer_expired(&pt->tmr));
            timer_advance(&pt->tmr, pt->tmr.interval);
            is_timer_expired = true;
            {
                float ma_ = sin2meandr(ua_pu * 1000.f);
                float mb_ = sin2meandr(ub_pu * 1000.f);

                meandr[0] = ma_;
                meandr[1] = mb_;

                //float lpfA_ = lpf[0].out_est(std::move(ma_));
                float lpfB_ = lpf[1].out_est(std::move(mb_));

                //float dA_ = diff[0].out_est(std::move(lpfA_));
                float dB_ = diff[1].out_est(std::move(lpfB_));

                        if (ua_pu > 0 && dB_ > 0) result = eSequence_t::ABC;
                else    if (ua_pu > 0 && dB_ < 0) result = eSequence_t::ACB;

            }

            //PT_YIELD(pt);

        }
        */
        PT_YIELD(pt);
        while(1){}
        
        PT_END(pt);
        
    }
    
    static ExPT pt_Phase;

    eSequence_t phase_sequence_get_task(time_t period, float ua, float ub, float uc){
        static eSequence_t result = UNKNOWN;

        task_phase_sequence(&pt_Phase, period, ua, ub, uc, result);

        return result;
    }

    bool get_meandr_a(){return meandr[0];}
    bool get_meandr_b(){return meandr[1];}

    float get_lpf_b(){return lpf[1].out_get();}
    float get_dif_b(){return diff[1].out_get();}

    bool timer_expired_state(){return is_timer_expired;}

    time_t timer_val(){return pt_Phase.tmr.start; }


    bool toggle = false;

    PT_THREAD(_task(PT* pt)){

        static TIMER tmr;

        PT_BEGIN(pt);
        timer_set(&tmr, TIME_MSEC(1));
        toggle = false;

        while(1){
            PT_YIELD_UNTIL(pt, timer_expired(&tmr));
            timer_advance(&tmr, tmr.interval);
            toggle = !toggle;

        }
        PT_END(pt);
    }

    static PT ptTask;
    
    void task(){
        _task(&ptTask);
    }

    
} //namespce ph_seq
