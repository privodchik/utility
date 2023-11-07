// Date: 17.05.2022
// Created by: ID

#ifndef _TAILOR_H
#define _TAILOR_H

#include <cmath>
#include <type_traits>


constexpr int factorial(int x){
    if (0 == x) return 1;
    return x * factorial(x - 1);
}


template <typename T, typename = std::enable_if_t<std::is_floating_point<T>::value>>
constexpr T sin_tailor(T x){ // x[rad], x in [-pi, pi]
    T x2 = x*x;
    T res = -x2/factorial(9);
    res += T(1.0)/factorial(7);
    res *= -x2;
    res += T(1.0)/factorial(5);
    res *= -x2;
    res += T(1.0)/factorial(3);
    res *= -x2;
    res += T(1.0);
    return res * x;
}






#endif //_TAILOR_H

