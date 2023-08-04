// Date: 08.06.2023
// Created by: ID

#pragma once

#include "clarkes.h"

namespace elec{
    
    template<typename T>
    clarkes::ABC_t<T> v2u(T v_ab, T v_bc){
        using namespace clarkes;
        
        clarkes::ABC_t<T> uABC;
        T v_ca = -v_ab - v_bc;
        
        uABC.A = T(1.0/utl::SQRT3)*(v_ab * T(2.0) + v_bc);
        uABC.B = T(1.0/utl::SQRT3)*(v_bc * T(2.0) + v_ca);
        uABC.C = T(1.0/utl::SQRT3)*(v_ca * T(2.0) + v_ab);
        
        return uABC;
    }

} //namespace elec


