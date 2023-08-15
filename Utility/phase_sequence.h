// Date:04.08.2023
// Created by: NPT

#pragma once

#include <cstdint>
#include "timer.h"
#include "aux_utility.h"
#include <type_traits>
#include <utility>


namespace ph_seq{
    
    enum eSequence_t{ABC = 0, ACB, UNKNOWN};
    
    eSequence_t phase_sequence_get_task(time_t period, float ua, float ub, float uc);
    


    bool get_meandr_a();
    bool get_meandr_b();

    float get_lpf_b();
    float get_dif_b();

    bool timer_expired_state();
    time_t timer_val();

    extern bool toggle;

    template<typename T>
    auto sin2meandr(T&& s){
        using Type = std::remove_reference_t<T>;
        return AUX_UTILITY::lim(std::forward<T>(s), static_cast<Type>(1), static_cast<Type>(0));
    }

    void task();
    
} //namespce ph_seq
