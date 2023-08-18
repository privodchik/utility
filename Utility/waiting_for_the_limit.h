// Date: 17.08.2023
// Created by: NPT

#pragma once

#include "pt.h"
#include "timers.h"


namespace wait{
    
    constexpr const char WAITING  = PT_WAITING;
    constexpr const char DONE     = PT_EXITED;
    constexpr const char ERROR    = PT_ENDED;
    
    
    template<typename T>
    PT_THREAD(task(PT* pt, T inputSignal, T signalThreshold, TIMER* tmr, time_t timeThreshold)){        
        
        PT_BEGIN(pt);
        timer_set(tmr, timeThreshold);
        
        PT_YIELD(pt);
        
        if (!timer_expired(tmr)){
            if (inputSignal > signalThreshold){  
                return DONE;
            }
            else return WAITING;
        }
        
        PT_YIELD(pt);
        return ERROR;
        
        PT_END(pt);
    }
    
    
} //namespace wait
