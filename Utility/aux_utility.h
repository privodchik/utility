// Date: 19.02.2021
// Creator: ID

#ifndef _UTILITY_H
#define _UTILITY_H

#include <cstdint>
#include <utility>
#include "user_constants.h"
#include <time.h>

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
    
    
    
    template<typename T>
    T MAX(T v1, T v2){
        return v1 > v2 ? v1 : v2;
    }
    
    
    template<typename T>
    T uSecToSec(time_t time_uSec){
        return static_cast<T>(time_uSec * 0.000'001);
    }
    
}


template <typename T>
auto angle_saturate(T&& _wt){
    if (_wt > std::remove_reference_t<T>(utl::PI)) _wt -= std::remove_reference_t<T>(utl::DBL_PI);
    else if (_wt < std::remove_reference_t<T>(-utl::PI)) _wt += std::remove_reference_t<T>(utl::DBL_PI);
    return _wt;
}
//inline iq_t angle_saturate(iq_t _wt){
//    if (_wt > IQ(utl::PI)) _wt -= IQ(utl::DBL_PI);
//    else if (_wt < IQ(-utl::PI)) _wt += IQ(utl::DBL_PI);
//    return _wt;
//}

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
