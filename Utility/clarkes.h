// Date: 12.08.2022
// Created by: ID

// #pragma once
#ifndef _CLARKES_H
#define _CLARKES_H

#include <stdint.h>
#include "user_constants.h"
#include <cmath>

#define ROTATING_FRAME_90 1 


namespace clarkes{
  template<typename T>
  struct ABC_t
  {
      T A;
      T B;
      T C;
      
      ABC_t() : A(T{0}), B(T{0}), C(T{0}){}
  };


  template<typename T>
  struct dqo_t
  {
      T d;
      T q;
      T o;
      
  };


  template<typename T>
  struct abo_t
  {
      T a;
      T b;
      T o;
      
      
      
  };


  template<typename T>
  struct polar_t{
      T mag;
      T th;
  };
  
  
  template<typename T>
  struct cartesian_t{
      T x;
      T y;
  };
  
  
  template<typename T>
  void ABC2abo(ABC_t<T>& ABC, abo_t<T>& abo){
      abo.a = static_cast<T>(1./3.)*(
              static_cast<T>(2.0) * ABC.A -
              ABC.B -
              ABC.C);
      
      abo.b = static_cast<T>(1./sqrt(3.))*(
              0 +
              ABC.B -
              ABC.C);
      
      abo.o = static_cast<T>(1./3.)*(ABC.A + ABC.B + ABC.C);
      
  }
  
  
  template<typename T>
  void abo2ABC(abo_t<T>& abo, ABC_t<T>& ABC){
      ABC.A = abo.a + abo.o;
      ABC.B = static_cast<T>(1.0/2.0)*(
              - abo.a 
              + static_cast<T>(sqrt(3.0))*abo.b
              + abo.o);
      ABC.C = static_cast<T>(1.0/2.0)*(
              - abo.a 
              - static_cast<T>(sqrt(3.0))*abo.b
              + abo.o); 
  }
  


  template<typename T>
  void ABC2dqo(ABC_t<T>& ABC, dqo_t<T>& dqo, T wt){
#if ROTATING_FRAME_90
      dqo.d = (T)(2./3.)*(
               ABC.A * sin(wt) +
               ABC.B * sin(wt - (T)(2./3.*utl::PI)) +
               ABC.C * sin(wt + (T)(2./3.*utl::PI)));
      
      dqo.q = (T)(2./3.)*(
              ABC.A * cos(wt) +
              ABC.B * cos(wt - (T)(2./3.*utl::PI)) +
              ABC.C * cos(wt + (T)(2./3.*utl::PI)));
      
      dqo.o = (T)(1./3.)*(ABC.A + ABC.B + ABC.C);
#else      
      dqo.d = (T)(2./3.)*(
               ABC.A * cos(wt) +
               ABC.B * cos(wt - (T)(2./3.*utl::PI)) +
               ABC.C * cos(wt + (T)(2./3.*utl::PI)));
      
      dqo.q = (T)(-2./3.)*(
              ABC.A * sin(wt) +
              ABC.B * sin(wt - (T)(2./3.*utl::PI)) +
              ABC.C * sin(wt + (T)(2./3.*utl::PI)));
      
      dqo.o = (T)(1./3.)*(ABC.A + ABC.B + ABC.C);
#endif
      
  }


  template<typename T>
  void dqo2ABC(dqo_t<T>& dqo, ABC_t<T>& ABC, T wt){
#if ROTATING_FRAME_90
      ABC.A = dqo.d * sin(wt) + 
              dqo.q * cos(wt) +
              dqo.o;
      ABC.B = dqo.d * sin(wt - 2.*utl::PI/3.) + 
              dqo.q * cos(wt - 2.*utl::PI/3.) +
              dqo.o;
      ABC.C = dqo.d * sin(wt + 2.*utl::PI/3.) + 
              dqo.q * cos(wt + 2.*utl::PI/3.) +
              dqo.o;
#else
      ABC.A = dqo.d * cos(wt) - 
              dqo.q * sin(wt) +
              dqo.o;
      ABC.B = dqo.d * cos(wt - 2.*utl::PI/3.) -
              dqo.q * sin(wt - 2.*utl::PI/3.) +
              dqo.o;
      ABC.C = dqo.d * cos(wt + 2.*utl::PI/3.) - 
              dqo.q * sin(wt + 2.*utl::PI/3.) +
              dqo.o;
#endif
  }


  template<typename T>
  void dqo2abo(dqo_t<T>& dqo, abo_t<T>& abo, T wt){
      #if ROTATING_FRAME_90
      abo.a =  dqo.d * sin(wt) + dqo.q * cos(wt);
      abo.b = -dqo.d * cos(wt) + dqo.q * sin(wt);
      abo.o =  dqo.o;
      #else 
      abo.a = dqo.d * cos(wt) - dqo.q * sin(wt);
      abo.b = dqo.d * sin(wt) + dqo.q * cos(wt);
      abo.o = dqo.o;
      #endif
  }
  
  
  template<typename T>
  void abo2dqo(abo_t<T>& abo, dqo_t<T>& dqo, T wt){
      #if ROTATING_FRAME_90
      dqo.d = -abo.a * sin(wt) + abo.b * cos(wt);
      dqo.q = -abo.a * cos(wt) - abo.b * sin(wt);
      dqo.o =  abo.o;
      #else 
      dqo.d =  abo.a * cos(wt) + abo.b * sin(wt);
      dqo.q = -abo.a * sin(wt) + abo.b * cos(wt);
      dqo.o =  abo.o;
      #endif
  }
  

  template<typename T>
  void c2p(T Vx, T Vy, polar_t<T>& V){
      V.mag = sqrt(pow(Vx, 2.f) + pow(Vy, 2.f));
      V.th = atan2(Vy, Vx);
  }
  
  
  template<typename T>
  void c2p(cartesian_t<T> Vxy, polar_t<T>& V){
      V.mag = sqrt(pow(Vxy.x, 2.f) + pow(Vxy.y, 2.f));
      V.th = atan2(Vxy.y, Vxy.x);
  }
  
  
  template<typename T>
  cartesian_t<T> p2c(polar_t<T> V){
      cartesian_t<T> Vxy;
      Vxy.x = V.mag * cos(V.th);
      Vxy.y = V.mag * sin(V.th);
      return Vxy;
  }
  
  
  template<typename T>
  cartesian_t<T> p2c(T Amp, T theta){
      cartesian_t<T> Vxy;
      Vxy.x = Amp * cos(theta);
      Vxy.y = Amp * sin(theta);
      return Vxy;
  }
  
  
  template<typename T>
  T mag(T Vx, T Vy){
      return sqrt(pow(Vx, T(2.)) + pow(Vy, T(2.)));
  }

} //namespace clarkes

#endif //_CLARKES_H
