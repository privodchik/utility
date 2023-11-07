// Date: 08.06.20212
// Created by: ID


#ifndef _PROFILER_H
#define _PROFILER_H

#include "niietcm4_pwm.h"

template<unsigned PWM_BASE_NO>
struct BasePWM{
    using PtrType = NT_PWM_TypeDef*;
    static uint32_t get_cnt(){return ((PtrType)PWM_BASE_NO)->TBCTR_bit.TBCTR;}
};

//  *   *   *
// * * * * * *
//*   *   *   *
template<unsigned PWM_BASE_NO>
struct SYMMETRICAL{
    using PtrType = NT_PWM_TypeDef*;

    static uint32_t est(uint32_t ARR, uint32_t CNTStop){
        uint32_t tReserve_;
        if (((PtrType)PWM_BASE_NO)->TBSTS_bit.CTRDIR){ // UP
            tReserve_ = 2*ARR - CNTStop;
        }
        else{ //DOWN
            tReserve_ = CNTStop;
        }            
        return tReserve_;
    }
};

//*   *   *   *
// * * * * * *
//  *   *   *
template<unsigned PWM_BASE_NO>
struct NSYMMETRICAL : BasePWM<PWM_BASE_NO>{
    using PtrType = NT_PWM_TypeDef*;

    static uint32_t est(uint32_t ARR, uint32_t CNTStop){
        uint32_t tReserve_;
        if (((PtrType)PWM_BASE_NO)->TBSTS_bit.CTRDIR){ // UP
            tReserve_ = ARR - CNTStop;
        }
        else{ //DOWN
            tReserve_ = ARR + CNTStop;
        }            
        return tReserve_;
    }
};

//*  *  *  *  *
// *  *  *  *  *
//  *  *  *  *  *
template<unsigned PWM_BASE_NO>
struct NTRIANGLE : BasePWM<PWM_BASE_NO>{
    static uint32_t est(uint32_t ARR, uint32_t CNTStop){
        return CNTStop;
    }
};

//  *  *  *  *  *
// *  *  *  *  *
//*  *  *  *  *
template<unsigned PWM_BASE_NO>
struct TRIANGLE : BasePWM<PWM_BASE_NO>{
    static uint32_t est(uint32_t ARR, uint32_t CNTStop){
        return ARR - CNTStop;
    }
};


template<unsigned PWM_BASE, template<unsigned> class TypePWM >
class Profiler{
    
    using TypePwm = TypePWM<PWM_BASE>;
    
    const uint32_t tMAX;
    uint32_t tStart;
    uint32_t tStop;
    uint32_t tReserve;

  public:
    Profiler(uint32_t tMax_) : tMAX(tMax_){}
    void begin(){tStart = TypePwm::get_cnt();}
    void end(){ tStop = TypePwm::get_cnt(); est(tStop);}
  
  private:
    void est(uint32_t CNTStop){
        tReserve = TypePwm::est(tMAX, CNTStop);
    }
    
};


#endif //_PROFILER_H
