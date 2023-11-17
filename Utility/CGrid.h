/**
 @file
 @date         04.02.2023
 @copyright    NPT
 @author       ID  
*/

#ifndef _CGRID_H
#define _CGRID_H

#include "CTheta.h"
#include "arm_math.h"
#include "IQmathCPP.h"
#include <type_traits>
#include <utility>


/** @class 
  * @brief grid parameters 
  */

template <typename T>
class CGrid{
    T   amp;            ///< magnitude
    T   w;              ///< frequency
    CTheta<T> wt;       ///< theta
    T currentValue;     ///< current value
  
  public:
    constexpr CGrid(T Ts_, T amp_, T w_)
        : amp(amp_)
        , w(w_)
        , wt{Ts_}
        , currentValue(0){}
   
        
       T out_est(){
          if constexpr(std::is_floating_point_v<T>){
              return currentValue = amp * arm_sin_f32(wt.out_est(w)); // for "arm_math.h"; FIXME!
          }
          else{
              return currentValue = amp * CPP_IQsin(wt.out_est(w));
          }
      }
      
      const T& out_get() const {return currentValue;}
      void angle_set(T th){wt.out_set(th);}
};


/** @fn constexpr CGrid::CGrid(T Ts_, T amp_, T w_)
  * @brief Constructor
  * @param[in] Ts_      time step
  * @param[in] amp_     voltage magnitude
  * @param[in] w_       voltage theta
  */


/** @fn T CGrid::out_est()
  * @brief Grid voltage theta and value estimation on current step kTs 
  * @return current value of grid voltage
  */

/** @fn const T& CGrid::out_get()
  * @brief Get grid voltage reference
  * @return const reference to grid voltage value
  */

/** @fn void angle_set(T th)
  * @brief Set new grid voltage angle
  * @param[in] new voltage theta 
  */


#endif //_CGRID_H

