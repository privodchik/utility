/**
 @file         button_utility.hpp
 @date         04.01.2024
 @copyright    NPT
 @author       ID  
*/

#ifndef _UTILITY_FUNC_H
#define _UTILITY_FUNC_H

#include <stdint.h>
#include "pt.h"
#include "timer.h"
#include <utility>
#include <type_traits>


namespace btn{
    
    struct SpecPT : PT{
        TIMER tmr;
    };
    
    
    template<typename T, std::enable_if_t<std::is_integral_v<T>, bool> = true>
    char task_change_by(SpecPT* pt, T& val, const int& add_v, const T& satP, const T& satN){
        
        PT_BEGIN(pt);
        
        while(1){
            {
                timer_set(&pt->tmr, TIME_SEC(3));
                
                int val__ = static_cast<int>(val);
                int adding_ = std::abs(val__) % std::abs(add_v);
                
                if (val__ >= 0){
                    if (add_v >= 0) {
                        adding_ = add_v - adding_;
                    }
                    else{
                        adding_ =  adding_ != 0 ? -adding_ : add_v;
                    }
                }
                else{ 
                    if (add_v < 0){
                        adding_ = add_v + adding_;
                    }
                    else{
                        adding_ =  adding_ != 0 ? adding_ : add_v;
                    }
                    
                }
                
                val__ += adding_;
                AUX_UTILITY::lim(val__, static_cast<int>(satP), static_cast<int>(satN));
                val = val__;
            }
            PT_YIELD_UNTIL(pt, timer_expired(&pt->tmr));
            
        }
        
        PT_END(pt);
    }
    
} //namespace btn

#endif //_UTILITY_FUNC_H
