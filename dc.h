// Date:04.08.2023
// Created by: NPT

#pragma once
#include "pt.h"


namespace DC{
    
    const char CHARGING = PT_WAITING;
    const char CHARGED = PT_EXITED;
    const char ERROR_CHARGE = PT_ENDED;
    
    char charge_dc_task(float uDC);
    void reset();
    
    
} //namespace DC
