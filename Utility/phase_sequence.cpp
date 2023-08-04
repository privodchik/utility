// Date:04.08.2023
// Created by: NPT

#include "phase_sequence.h"
#include "pt.h"
#include "expt.h"
#include "aux_utility.h"
#include <type_traits>
#include <utility>
#include "transfer_functions.h"



namespace ph_seq{
    
    using namespace expt;
    
    eSequence_t phase_sequence_get_task(time_t period, float ua, float ub, float uc){
        return eSequence_t::ABC;
    }
    
    
    template<typename T>
    auto sin2meandr(T&& s){
        using Type = std::remove_reference_t<T>;
        return AUX_UTILITY::lim(std::forward<T>(s), static_cast<Type>(0.001), static_cast<Type>(-0.001));
    }
    
    
    
    static TF::Difference<float> diff[3];
    
    
    PT_THREAD(task_phase_sequence(ExPT* pt, time_t period, float ua_pu, float ub_pu, float uc_pu, char result)){
        
        PT_BEGIN(pt);
        timer_set(&pt->tmr, period);
        diff[2] = diff[1] = diff[0] = TF::Difference<float>{1.f, -1.f};
        
        while(1){
            PT_WAIT_UNTIL(pt, timer_expired(&pt->tmr));
            timer_advance(&pt->tmr, pt->tmr.interval);
            {
                float ma_ = sin2meandr(ua_pu);
                float mb_ = sin2meandr(ub_pu);
                float mc_ = sin2meandr(uc_pu);
                
                diff[0].out_est(std::move(ma_));
                diff[1].out_est(std::move(mb_));
                diff[1].out_est(std::move(mc_));
            }
            
            
        }
        
        PT_END(pt);
        
    }
    
    
} //namespce ph_seq
