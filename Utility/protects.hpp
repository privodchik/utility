/**
 @file         protects.hpp
 @date         06.12.2023
 @copyright    NPT
 @author       ID
*/

#ifndef _PROTECTS_HPP
#define _PROTECTS_HPP

#include "aux_utility.h"
#include "timer.h"
#include "transfer_functions.h"

namespace protects{

  template<typename T>
  bool short_protect(T value, T threshold){
      if (AUX_UTILITY::abs(value) > threshold){
          return true;
      }
      return false;
  }

   ///-----------------------------
  template<typename T>
  struct ExPT : PT{
      TIMER tmr;
      TF::Integrator<T> integrator;
  };

  template<typename T>
      static PT_THREAD(task_low_signal(ExPT<T>* pt, T signal, T threshold, time_t t,  bool& result)){

      using namespace AUX_UTILITY;

      const time_t TIME_STEP = TIME_MSEC(10);

      PT_BEGIN(pt);
      pt->integrator = TF::Integrator{ uSecToSec<T>(TIME_STEP), uSecToSec<T>(t), T(1.f), T(-0.01f)};
      pt->integrator.out_set(T(1.f));
      timer_set(&pt->tmr, TIME_STEP);

      while(1){
          PT_YIELD_UNTIL(pt, timer_expired(&pt->tmr));
          timer_advance(&pt->tmr, pt->tmr.interval);
          {
              T inVal_ = T(1.f);
              if ( signal < threshold){
                  inVal_ = T(-1.f);
              }

              pt->integrator.out_est(inVal_);
          }

          if (pt->integrator.out_get() < T(0.f)) result = true;
      }

      PT_END(pt);
  }


  template<typename T>
  static PT_THREAD(task_large_signal(ExPT<T>* pt, T signal, T threshold, time_t t,  bool& result)){

      using namespace AUX_UTILITY;

      const time_t TIME_STEP = TIME_MSEC(10);

      PT_BEGIN(pt);
      pt->integrator = TF::Integrator{ uSecToSec<T>(TIME_STEP), uSecToSec<T>(t), T(1.f), T(-0.01f)};
      pt->integrator.out_set(T(1.f));
      timer_set(&pt->tmr, TIME_STEP);
      result = false;

      while(1){
          PT_YIELD_UNTIL(pt, timer_expired(&pt->tmr));
          timer_advance(&pt->tmr, pt->tmr.interval);
          {
              T inVal_ = T(1.f);
              if ( signal > threshold){
                  inVal_ = T(-1.f);
              }

              pt->integrator.out_est(inVal_);
          }

          if (pt->integrator.out_get() < T(0.f)) result = true;
      }

      PT_END(pt);
  }



}


#endif //_PROTECTS_HPP
