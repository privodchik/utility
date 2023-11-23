/**
 @file
 @date         19.02.2022
 @copyright    NPT
 @author       ID  
*/

#ifndef _UTILITY_H
#define _UTILITY_H

#include <cstdint>
#include <utility>
#include "user_constants.h"
#include <time.h>
#include <cmath>
#include "IXmathLib.hpp"
#include "arm_math.h"

template<class T>
T set_bit(T _bitNo){
    return
        static_cast<T>(1) << _bitNo;
}


enum eQuant{
    eQ0 = 0,
    eQ1 = 1,
    eQ2 = 2,
    eQ3 = 3,
    eQ4 = 4,
    eQ5 = 5,
    eQ6 = 6,
    eQ7 = 7,
    eQ8 = 8,
    eQ9 = 9,
    eQ10 = 10,
    eQ11 = 11,
    eQ12 = 12,
    eQ13 = 13,
    eQ14 = 14,
    eQ15 = 15,

    eQ24 = 24
};


template<class T, std::size_t N>
constexpr std::size_t array_size(T (&)[N]){
    return N;
}

#define ABS(x) ((x) < 0 ? (-x) : (x))


/**
  * @brief Saturate value
  * @param[in] _inSignal input value
  * @param[in] _satPos rhs limit value
  * @param[in] _satNeg lhs limit value
  * @param[out] saturated value
  */

template <typename T>
T saturate(T _inSignal, T _satPos, T _satNeg){
    return (_inSignal > _satPos) ? _satPos :
           (_inSignal < _satNeg) ? _satNeg : _inSignal;
}


namespace AUX_UTILITY{

    template <typename T>
        void limit(T* _inSignal, T _satPos, T _satNeg){
            if (*_inSignal > _satPos ) *_inSignal = _satPos;
            else if (*_inSignal < _satNeg)*_inSignal = _satNeg;
        }
    
    template <typename T>
    auto lim(T&& v, std::remove_reference_t<T> satP, std::remove_reference_t<T> satN){
      return (v > satP) ? satP : (v < satN) ? satN : v;
    }
    
    
    
    template <typename T1, typename T2>
    decltype(auto) MAX(T1&& v1, T2&& v2){
        return v1 > v2 ? std::forward<T1>(v1) : std::forward<T2>(v2);
    }
    

    template <typename T1, typename T2, typename... Types>
    decltype(auto) MAX(T1&& v1, T2&& v2, Types&&... args){
        return MAX(std::forward<T1>(v1), MAX(std::forward<T2>(v2), std::forward<Types>(args)...));
    }
    
    
    /**
      * @brief Convert time from uSec to Sec
      * @param[in] time_uSec time in uSec
      * @param[out] time in Sec
      */        
    
    template<typename T>
    constexpr T uSecToSec(time_t time_uSec){
        return static_cast<T>(time_uSec * 0.000001);
    }
                              
    
    /**
      * @brief Estimate sinus of angle
      * @param[in] v angle, rad
      * @param[out] sinus, pu
      */
    
    template<typename T, std::enable_if_t<std::is_same_v<T, double>, bool> = true>   
    auto sin(const T& v){
        return std::sin(v);
    }
    
    template<typename T, std::enable_if_t<std::is_same_v<T, float>, bool> = true>   
    auto sin(const T& v){
        return arm_sin_f32(v);
    }
                        
    template<typename T, std::enable_if_t<std::is_same_v<typename T::ix_t, typename T::ix_t>, bool> = true>   
    auto sin(const T& v){
        return IXsin(v);
    }
    
    /**
      * @brief Estimate absolute value
      * @param[in] v value
      * @param[out] abs
      */
    
    template<typename T, std::enable_if_t<std::is_arithmetic_v<T>, bool> = true>   
    auto abs(const T& v){
        return std::sin(v);
    }
    
    template<typename T, std::enable_if_t<std::is_same_v<typename T::ix_t, typename T::ix_t>, bool> = true>   
    auto abs(const T& v){
        return IXsin(v);
    }
    
    
    /**
      * @brief Estimate atan(y/x)
      * @param[in] y value
      * @param[in] x value
      * @param[out] angle, rad
      */
    
    template<typename T, std::enable_if_t<std::is_arithmetic_v<T>, bool> = true>   
    auto atan2(const T& y, const T& x){
        return std::atan2(y, x);
    }
    
    template<typename T, std::enable_if_t<std::is_same_v<typename T::ix_t, typename T::ix_t>, bool> = true>   
    auto atan2(const T& y, const T& x){
        return IXatan2(y, x);
    }
    
    
    
}


                              
/**
  * @brief Saturate angle in range [-PI, PI] 
  * @param[in] _wt universal reference to current angle
  * @param[out] angle with saturate
  */
                              
template <typename T>
auto angle_saturate(T&& _wt){
  	using Type = std::remove_reference_t<T>;
    if (_wt > static_cast<Type>(utl::PIx1)) _wt -= static_cast<Type>(utl::PIx2);
    else if (_wt < static_cast<Type>(-utl::PIx1)) _wt += static_cast<Type>(utl::PIx2);
    return _wt;
}
                              
                              
/**
  * @brief Add and saturate angle in range [-PI, PI] on current step of estimation 
  * @param[in] Ts time step
  * @param[in] wt reference to current angle
  * @param[in] w frequence
  * @param[out] angle with saturate
  */
                              
template<typename T>
auto wt_add_and_sat(T Ts, T& wt, T w){
    wt += w * Ts;
    return  angle_saturate(wt);
}


template <typename T1, typename T2, typename T3>
struct CSpatial{
    T1 first = 0;
    T2 second = 0;
    T3 third = 0;

//    constexpr CSpatial() = default;
//    constexpr CSpatial(const CSpatial&) = default;
};







#endif //_UTILITY_H
