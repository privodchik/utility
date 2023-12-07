// Date: 17.05.2022
// Created by: ID

/**
* @date         07.12.2023 
* @copyright    NPT
* @author       ID
*/



#ifndef _TAILOR_H
#define _TAILOR_H

#include <cmath>
#include <type_traits>

namespace tailor{
    
    /** @defgroup Tailor Tailor
    * @{ 
    */


    constexpr long long factorial(long long x){
        if (0 == x) return 1;
        return x * factorial(x - 1);
    }
    
    
    template<typename T, int I> 
    constexpr T iFACT = T(1.0/factorial(I));    
    
    template<typename T, int I> 
    constexpr T iCONST = T(1.0/I);    
    
    
    
    template <typename T>
    constexpr T sin(const T& x){ // x[rad], x in [-pi, pi]
        const T x2 = x*x;
        T res = -x2 *   iFACT<T, 9>;
        res +=          iFACT<T, 7>;
        res *=  -x2;
        res +=          iFACT<T, 5>;
        res *=  -x2;
        res +=          iFACT<T, 3>;
        res *=  -x2;
        res += T(1.0);
        return res * x;
    }
    
    
    template <typename T>
    constexpr T cos(const T& x){ // x[rad], x in [-pi, pi]
        const T x2 =   x*x;
        T res = -x2 *   iFACT<T, 8>;
        res +=          iFACT<T, 6>;
        res *=  -x2;
        res +=          iFACT<T, 4>;
        res *=  -x2;
        res +=          iFACT<T, 2>;
        res *=  -x2;
        return res += T(1);
    }
    
    
    /**
    * @brief    Estimate arctan(x)
    * @param[in]        x       -1.0 <= x <= 1.0
    * @return           out     angle th[rad],  -pi/4 <= th <= pi/4
    */
    template <typename T>
    constexpr T atan(const T& x){
        const T x2 =   x*x;
        T res = -x2 *   iCONST<T, 13>;
        res +=          iCONST<T, 11>;
        res *=  -x2;
        res +=          iCONST<T, 9>;
        res *=  -x2;
        res +=          iCONST<T, 7>;
        res *=  -x2;
        res +=          iCONST<T, 5>;
        res *=  -x2;
        res +=          iCONST<T, 3>;
        res *=  -x2;
        res +=          iCONST<T, 1>;
        return res*x;
    }
    
    /**
    * @}
    */
    
    
}// namespace tailor






#endif //_TAILOR_H

