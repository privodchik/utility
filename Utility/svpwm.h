// Date: 12.08.2022
// Created by: ID

//#pragma once

#ifndef _SVPWM_H
#define _SVPWM_H

#include <cstdint>
#include "user_constants.h"
#include <math.h>
#include "clarkes.h"

namespace csvpwm{
    using namespace clarkes;

    constexpr const float PI_VAL = utl::PI;

    template <typename T> 
    T theta_to_positive(T theta){
        while (theta < 0) theta += static_cast<T>(2.*PI_VAL);
        return theta;
    }


    template <typename T> 
    int sector_find(T theta){
        
        theta = theta_to_positive(theta);

        int sector_ = 0;

             if (theta >= T(0)           && theta <= T(PI_VAL/3.))          sector_ = 1;
        else if (theta > T(PI_VAL/3.)    && theta <= T(2.*PI_VAL/3.))       sector_ = 2;
        else if (theta > T(2.*PI_VAL/3.) && theta <= T(PI_VAL))             sector_ = 3;
        else if (theta > T(PI_VAL)       && theta <= T(4.*PI_VAL/3.))       sector_ = 4;
        else if (theta > T(4.*PI_VAL/3.) && theta <= T(5.*PI_VAL/3.))       sector_ = 5;
        else sector_ = 6;

        return sector_;
    }


    template <typename T>
    struct TimeRealize_t{
        T tau1;
        T tau2;
    };


    template <typename T>
    TimeRealize_t<T> time_realize_estimate(T puVamp, T th, int sector){
        
        theta_to_positive(th);
        th -= static_cast<T>(PI_VAL/3.)*(sector - 1);

        TimeRealize_t<T> t;
        t.tau1 = puVamp * sin(T(PI_VAL/3.) - th);
        t.tau2 = puVamp * sin(th);

        return t;

    }


    template <typename T>
    struct CCR_t{
        T ccr1;
        T ccr2;
        T ccr3;
    };


    template <typename T>
    CCR_t<T> compare_values_estimate(TimeRealize_t<T>& t, int sector){
        CCR_t<T> ccr_;
        switch (sector){
            case 1: 
                ccr_.ccr3 = (T(1.0) - t.tau1 - t.tau2)/T(2.0);
                ccr_.ccr2 = (T(1.0) - t.tau1 + t.tau2)/T(2.0);
                ccr_.ccr1 = (T(1.0) + t.tau1 + t.tau2)/T(2.0);
                break;
            case 2:
                ccr_.ccr1 = (T(1.0) + t.tau1 - t.tau2)/T(2.0);
                ccr_.ccr3 = (T(1.0) - t.tau1 - t.tau2)/T(2.0);
                ccr_.ccr2 = (T(1.0) + t.tau1 + t.tau2)/T(2.0);
                break;
            case 3:
                ccr_.ccr2 = (T(1.0) + t.tau1 + t.tau2)/T(2.0);
                ccr_.ccr1 = (T(1.0) - t.tau1 - t.tau2)/T(2.0);
                ccr_.ccr3 = (T(1.0) - t.tau1 + t.tau2)/T(2.0);
                break;
            case 4: 
                ccr_.ccr3 = (T(1.0) + t.tau1 + t.tau2)/T(2.0);
                ccr_.ccr2 = (T(1.0) + t.tau1 - t.tau2)/T(2.0);
                ccr_.ccr1 = (T(1.0) - t.tau1 - t.tau2)/T(2.0);
                break;
            case 5:
                ccr_.ccr1 = (T(1.0) - t.tau1 + t.tau2)/T(2.0);
                ccr_.ccr3 = (T(1.0) + t.tau1 + t.tau2)/T(2.0);
                ccr_.ccr2 = (T(1.0) - t.tau1 - t.tau2)/T(2.0);
                break;
            case 6:
                ccr_.ccr2 = (T(1.0) - t.tau1 - t.tau2)/T(2.0);
                ccr_.ccr1 = (T(1.0) + t.tau1 + t.tau2)/T(2.0);
                ccr_.ccr3 = (T(1.0) + t.tau1 - t.tau2)/T(2.0);
                break;
            default:
                ccr_.ccr1 = T(1.0);
                ccr_.ccr2 = T(1.0);
                ccr_.ccr3 = T(1.0);
        }
        
        return ccr_;

    }


    template <typename T>
    CCR_t<T> svpwm_est(polar_t<T> Vpu){
        int sector_ = sector_find(Vpu.th);
        TimeRealize_t<T> tau = time_realize_estimate(Vpu.mag, Vpu.th, sector_);
        return compare_values_estimate(tau, sector_);
    }

} //namespace csvpwm



#endif //_SVPWM_H
