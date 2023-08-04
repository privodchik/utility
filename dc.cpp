// Date:04.08.2023
// Created by: NPT


#include "pt.h"
#include "timer.h"
#include "sens.h"
#include "config_inv.h"
#include "dc.h"

namespace dc{

    static 
    PT_THREAD(task_dc_charge(PT* pt, float uDC)){
        PT_BEGIN(pt);
        PT_END(pt);
    }
    
    static PT pt_DC;
    
    
/*!
  \brief
  \param[in]    uDC value
  \param[out]   charging operation status
    \arg        CHARGING
    \arg        CHARGED
    \arg        ERROR_CHARGE
      
*/
    char charge_dc_task(float uDC){
        return task_dc_charge(&pt_DC, uDC);
    }
    
    
    void reset(){
        PT_INIT(&pt_DC);
    }
    
    

} //namespace dc

