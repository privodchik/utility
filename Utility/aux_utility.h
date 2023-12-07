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

constexpr bool USE_TAILOR = false; 


/**
  * @brief Saturate value
  * @param[in] _inSignal input value
  * @param[in] _satPos rhs limit value
  * @param[in] _satNeg lhs limit value
  * @return out saturated value
  */

template <typename T>
T saturate(T _inSignal, T _satPos, T _satNeg){
    return (_inSignal > _satPos) ? _satPos :
           (_inSignal < _satNeg) ? _satNeg : _inSignal;
}





namespace AUX_UTILITY{
    /**
    * @defgroup nsAUX_UTILITY AUX_UTILITY Functions
    * @{
    */
    
    
    /**
      * @brief limit value
      * @param[in,out]    _inSignal       pointer to a variable 
      * @param[in]        _satPos         max value
      * @param[in]        _satNeg         min value
      */
    
    template <typename T>
        void limit(T* _inSignal, T _satPos, T _satNeg){
            if (*_inSignal > _satPos ) *_inSignal = _satPos;
            else if (*_inSignal < _satNeg)*_inSignal = _satNeg;
        }
    
    
    /**
      * @brief limit value
      * @param[in]        v       reference to a variable 
      * @param[in]        satP    max value
      * @param[in]        satN    min value
      * @return           out     limited value
      */
    
    template <typename T>
    constexpr auto lim(T& v, const T& satP, const T& satN){
        return v = (v > satP) ? satP : (v < satN) ? satN : v;
    }
    
    
    template <typename T1, typename T2>
    decltype(auto) MAX(T1&& v1, T2&& v2){
        return v1 >= v2 ? std::forward<T1>(v1) : std::forward<T2>(v2);
    }
    

    /**
      * @brief Find Max value
      * @param[in]        v1      universal reference to first variable
      * @param[in]        v2...   universal reference to package of variables
      * @return           out     max value or reference to max variable
      */
    
    template <typename T1, typename T2, typename... Types>
    decltype(auto) MAX(T1&& v1, T2&& v2, Types&&... args){
        return MAX(std::forward<T1>(v1), MAX(std::forward<T2>(v2), std::forward<Types>(args)...));
    }
    
        
    template <typename T1, typename T2>
    decltype(auto) MIN(T1&& v1, T2&& v2){
        return v1 <= v2 ? std::forward<T1>(v1) : std::forward<T2>(v2);
    }
    
    /**
      * @defgroup nsAUX_UTILITY AUX_UTILITY Functions
      * @brief Find Min value
      * @param[in]        v1      universal reference to first variable
      * @param[in]        v2...   universal reference to package of variables
      * @return           out     min value or reference to max variable
      */
    template <typename T1, typename T2, typename... Types>
    decltype(auto) MIN(T1&& v1, T2&& v2, Types&&... args){
        return MIN(std::forward<T1>(v1), MIN(std::forward<T2>(v2), std::forward<Types>(args)...));
    }
    
    
    /**
      * @defgroup nsAUX_UTILITY AUX_UTILITY Functions
      * @brief Convert time from uSec to Sec
      * @param[in]      time_uSec       time in uSec
      * @return         out             time in Sec
      */        
    
    template<typename T>
    constexpr T uSecToSec(time_t time_uSec){
        return static_cast<T>(time_uSec * 0.000001);
    }
                        
    
    
    /**
      * @brief Estimate sin(th)
      * @param[in]      th      angle, rad
      * @return         out     sin, pu
      */
    
    template<typename T, std::enable_if_t<std::is_same_v<T, double>, bool> = true>   
    auto sin(const T& v){
        if constexpr(USE_TAILOR){
            return tailor::sin(v);
        }
        else{
            return std::sin(v);
        }
    }
    
    template<typename T, std::enable_if_t<std::is_same_v<T, float>, bool> = true>   
    auto sin(const T& v){
        if constexpr(USE_TAILOR){
            return tailor::sin(v);
        }
        else{
            return arm_sin_f32(v);
        }
        
    }
                        
    template<typename T, std::enable_if_t<std::is_same_v<typename T::ix_t, typename T::ix_t>, bool> = true>   
    auto sin(const T& v){
        if constexpr(USE_TAILOR){
            return tailor::sin(v);
        }
        else{
            return IXsin(v);
        }
    }
    
    
    /**
      * @brief Estimate cos(th)
      * @param[in]      th      angle, rad
      * @return         out     cos, pu
      */
    
    template<typename T, std::enable_if_t<std::is_same_v<T, double>, bool> = true>   
    auto cos(const T& v){
        if constexpr(USE_TAILOR){
            return tailor::cos(v);
        }
        else{
            return std::cos(v);
        }
    }
    
    template<typename T, std::enable_if_t<std::is_same_v<T, float>, bool> = true>   
    auto cos(const T& v){
        if constexpr(USE_TAILOR){
            return tailor::cos(v);
        }
        else{
            return arm_cos_f32(v);
        }
    }
                        
    template<typename T, std::enable_if_t<std::is_same_v<typename T::ix_t, typename T::ix_t>, bool> = true>   
    auto cos(const T& v){
        if constexpr(USE_TAILOR){
            return tailor::cos(v);
        }
        else{
            return IXcos(v);
        }
    }
    
    
    
    /**
      * @brief Estimate sqrt
      * @param[in]      v      
      * @return         out     
      */
    
    template<typename T, std::enable_if_t<std::is_same_v<T, double>, bool> = true>   
    auto sqrt(const T& v){
        return std::sqrt(v);
    }
    
    template<typename T, std::enable_if_t<std::is_same_v<T, float>, bool> = true>   
    auto sqrt(const T& v){
        return arm_sqrt_f32(v);
    }
                        
    template<typename T, std::enable_if_t<std::is_same_v<typename T::ix_t, typename T::ix_t>, bool> = true>   
    auto sqrt(const T& v){
        return IXsqrt(v);
    }
    
    
    /**
      * @defgroup nsAUX_UTILITY AUX_UTILITY Functions
      * @brief Estimate cos(th)
      * @param[in]      th      angle, rad
      * @return         out     cos, pu
      */
    
    
    /**
      * @defgroup nsAUX_UTILITY AUX_UTILITY Functions
      * @brief Estimate absolute value
      * @param[in]      v       value
      * @return         out     abs
      */
    
    template<typename T, std::enable_if_t<std::is_arithmetic_v<T>, bool> = true>   
    auto abs(const T& v){
        return std::abs(v);
    }
    
    template<typename T, std::enable_if_t<std::is_same_v<typename T::ix_t, typename T::ix_t>, bool> = true>   
    auto abs(const T& v){
        return IXabs(v);
    }
    
    
    /**
      * @defgroup nsAUX_UTILITY AUX_UTILITY Functions
      * @brief Estimate atan(y/x)
      * @param[in]      y       value
      * @param[in]      x       value
      * @return         out     angle, rad
      */
    
    template<typename T, std::enable_if_t<std::is_arithmetic_v<T>, bool> = true>   
    auto atan2(const T& y, const T& x){
        return std::atan2(y, x);
    }
    
    template<typename T, std::enable_if_t<std::is_same_v<typename T::ix_t, typename T::ix_t>, bool> = true>   
    auto atan2(const T& y, const T& x){
        return IXatan2(y, x);
    }
    /**
      * @}
      */
}


                              
/**
  * @brief Saturate angle in range [-PI, PI] 
  * @param[in] _wt universal reference to current angle
  * @param[out] angle with saturate
  */
                              
template <typename T>
auto angle_saturate(T&& _wt){
    using Type = std::remove_reference_t<T>;
    const Type PIx1 = utl::PIx1;
    const Type PIx2 = utl::PIx2;  
    
    if (_wt > PIx1) _wt -= PIx2;
    else if (_wt < -PIx1) _wt += PIx2;
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
