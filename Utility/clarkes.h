// Date: 12.08.2022
// Created by: ID

// #pragma once
#ifndef _CLARKES_H
#define _CLARKES_H

#include <stdint.h>
#include <cmath>
#include "aux_utility.h"

#define ROTATING_FRAME_90 1


namespace clarkes{
    
    using Type = float;
    
    
    constexpr const Type PIx1    = 3.14159265358979;
    constexpr const Type PIx2  = PIx1 * 2.0;
    constexpr const Type SQRT3 = 1.73205080756888;
    
    
  template<typename T>
  struct ABC_t
  {
      T A;
      T B;
      T C;
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
  abo_t<T> ABC2abo(const ABC_t<T>& ABC){
      abo_t<T> abo;

      abo.a = static_cast<T>(1./3.)*(
              static_cast<T>(2.0) * ABC.A -
              ABC.B -
              ABC.C);
      
      abo.b = static_cast<T>(1./SQRT3)*(
              0 +
              ABC.B -
              ABC.C);
      
      abo.o = static_cast<T>(1./3.)*(ABC.A + ABC.B + ABC.C);
      
      return abo;
  }

  
  template<typename T>
  void ABC2abo(const ABC_t<T>& ABC, abo_t<T>& abo){
      
      abo.a = static_cast<T>(1./3.)*(
              static_cast<T>(2.0) * ABC.A -
              ABC.B -
              ABC.C);
      
      abo.b = static_cast<T>(1./SQRT3)*(
              0 +
              ABC.B -
              ABC.C);
      
      abo.o = static_cast<T>(1./3.)*(ABC.A + ABC.B + ABC.C);
      
  }
  
  
  template<typename T>
  ABC_t<T> abo2ABC(const abo_t<T>& abo){

      ABC_t<T> ABC;
      
      ABC.A = abo.a + abo.o;
      ABC.B = static_cast<T>(1.0/2.0)*(
              - abo.a 
              + static_cast<T>(SQRT3)*abo.b
              + abo.o);
      ABC.C = static_cast<T>(1.0/2.0)*(
              - abo.a 
              - static_cast<T>(SQRT3)*abo.b
              + abo.o); 
      return ABC;
  }
  
  
  template<typename T>
  void abo2ABC(const abo_t<T>& abo, ABC_t<T>& ABC){
      ABC.A = abo.a + abo.o;
      ABC.B = static_cast<T>(1.0/2.0)*(
              - abo.a 
              + static_cast<T>(SQRT3)*abo.b
              + abo.o);
      ABC.C = static_cast<T>(1.0/2.0)*(
              - abo.a 
              - static_cast<T>(SQRT3)*abo.b
              + abo.o); 
  }
  
  
  
  template<typename T>
  dqo_t<T> ABC2dqo(const ABC_t<T>& ABC, T wt){
      dqo_t<T> dqo;
#if ROTATING_FRAME_90
      dqo.d = static_cast<T>(2./3.)*(
               ABC.A * AUX_UTILITY::sin(wt) +
               ABC.B * AUX_UTILITY::sin(wt - static_cast<T>(2./3.*PIx1)) +
               ABC.C * AUX_UTILITY::sin(wt + static_cast<T>(2./3.*PIx1)));
      
      dqo.q = static_cast<T>(2./3.)*(
              ABC.A * AUX_UTILITY::cos(wt) +
              ABC.B * AUX_UTILITY::cos(wt - static_cast<T>(2./3.*PIx1)) +
              ABC.C * AUX_UTILITY::cos(wt + static_cast<T>(2./3.*PIx1)));
      
      dqo.o = static_cast<T>(1./3.)*(ABC.A + ABC.B + ABC.C);
#else      
      dqo.d = static_cast<T>(2./3.)*(
               ABC.A * AUX_UTILITY::cos(wt) +
               ABC.B * AUX_UTILITY::cos(wt - static_cast<T>(2./3.*PIx1)) +
               ABC.C * AUX_UTILITY::cos(wt + static_cast<T>(2./3.*PIx1)));
      
      dqo.q = static_cast<T>(-2./3.)*(
              ABC.A * AUX_UTILITY::sin(wt) +
              ABC.B * AUX_UTILITY::sin(wt - static_cast<T>(2./3.*PIx1)) +
              ABC.C * AUX_UTILITY::sin(wt + static_cast<T>(2./3.*PIx1)));
      
      dqo.o = static_cast<T>(1./3.)*(ABC.A + ABC.B + ABC.C);
#endif
      
      return dqo;
      
  }
  


  template<typename T>
  void ABC2dqo(ABC_t<T>& ABC, dqo_t<T>& dqo, T wt){
#if ROTATING_FRAME_90
      dqo.d = static_cast<T>(2./3.)*(
               ABC.A * AUX_UTILITY::sin(wt) +
               ABC.B * AUX_UTILITY::sin(wt - static_cast<T>(2./3.*PIx1)) +
               ABC.C * AUX_UTILITY::sin(wt + static_cast<T>(2./3.*PIx1)));
      
      dqo.q = static_cast<T>(2./3.)*(
              ABC.A * AUX_UTILITY::cos(wt) +
              ABC.B * AUX_UTILITY::cos(wt - static_cast<T>(2./3.*PIx1)) +
              ABC.C * AUX_UTILITY::cos(wt + static_cast<T>(2./3.*PIx1)));
      
      dqo.o = static_cast<T>(1./3.)*(ABC.A + ABC.B + ABC.C);
#else      
      dqo.d = static_cast<T>(2./3.)*(
               ABC.A * AUX_UTILITY::cos(wt) +
               ABC.B * AUX_UTILITY::cos(wt - static_cast<T>(2./3.*PIx1)) +
               ABC.C * AUX_UTILITY::cos(wt + static_cast<T>(2./3.*PIx1)));
      
      dqo.q = static_cast<T>(-2./3.)*(
              ABC.A * AUX_UTILITY::sin(wt) +
              ABC.B * AUX_UTILITY::sin(wt - static_cast<T>(2./3.*PIx1)) +
              ABC.C * AUX_UTILITY::sin(wt + static_cast<T>(2./3.*PIx1)));
      
      dqo.o = static_cast<T>(1./3.)*(ABC.A + ABC.B + ABC.C);
#endif
      
  }
  
  
  template<typename T>
  ABC_t<T> dqo2ABC(const dqo_t<T>& dqo, T wt){
      ABC_t<T> ABC;
#if ROTATING_FRAME_90
      ABC.A = dqo.d * AUX_UTILITY::sin(wt) + 
              dqo.q * AUX_UTILITY::cos(wt) +
              dqo.o;
      ABC.B = dqo.d * AUX_UTILITY::sin(wt - static_cast<T>(2.*PIx1/3.)) + 
              dqo.q * AUX_UTILITY::cos(wt - static_cast<T>(2.*PIx1/3.)) +
              dqo.o;
      ABC.C = dqo.d * AUX_UTILITY::sin(wt + static_cast<T>(2.*PIx1/3.)) + 
              dqo.q * AUX_UTILITY::cos(wt + static_cast<T>(2.*PIx1/3.)) +
              dqo.o;
#else
      ABC.A = dqo.d * AUX_UTILITY::cos(wt) - 
              dqo.q * AUX_UTILITY::sin(wt) +
              dqo.o;
      ABC.B = dqo.d * AUX_UTILITY::cos(wt - static_cast<T>(2.*PIx1/3.)) -
              dqo.q * AUX_UTILITY::sin(wt - static_cast<T>(2.*PIx1/3.)) +
              dqo.o;
      ABC.C = dqo.d * AUX_UTILITY::cos(wt + static_cast<T>(2.*PIx1/3.)) - 
              dqo.q * AUX_UTILITY::sin(wt + static_cast<T>(2.*PIx1/3.)) +
              dqo.o;
#endif
      return ABC;
  }

  
  


  template<typename T>
  void dqo2ABC(const dqo_t<T>& dqo, ABC_t<T>& ABC, T wt){
#if ROTATING_FRAME_90
      ABC.A = dqo.d * AUX_UTILITY::sin(wt) + 
              dqo.q * AUX_UTILITY::cos(wt) +
              dqo.o;
      ABC.B = dqo.d * AUX_UTILITY::sin(wt - static_cast<T>(2.*PIx1/3.)) + 
              dqo.q * AUX_UTILITY::cos(wt - static_cast<T>(2.*PIx1/3.)) +
              dqo.o;
      ABC.C = dqo.d * AUX_UTILITY::sin(wt + static_cast<T>(2.*PIx1/3.)) + 
              dqo.q * AUX_UTILITY::cos(wt + static_cast<T>(2.*PIx1/3.)) +
              dqo.o;
#else
      ABC.A = dqo.d * AUX_UTILITY::cos(wt) - 
              dqo.q * AUX_UTILITY::sin(wt) +
              dqo.o;
      ABC.B = dqo.d * AUX_UTILITY::cos(wt - static_cast<T>(2.*PIx1/3.)) -
              dqo.q * AUX_UTILITY::sin(wt - static_cast<T>(2.*PIx1/3.)) +
              dqo.o;
      ABC.C = dqo.d * AUX_UTILITY::cos(wt + static_cast<T>(2.*PIx1/3.)) - 
              dqo.q * AUX_UTILITY::sin(wt + static_cast<T>(2.*PIx1/3.)) +
              dqo.o;
#endif
  }

  
  template<typename T>
  abo_t<T> dqo2abo(const dqo_t<T>& dqo, T wt){
      abo_t<T> abo; 
      #if ROTATING_FRAME_90
      abo.a =  dqo.d * AUX_UTILITY::sin(wt) + dqo.q * AUX_UTILITY::cos(wt);
      abo.b = -dqo.d * AUX_UTILITY::cos(wt) + dqo.q * AUX_UTILITY::sin(wt);
      abo.o =  dqo.o;
      #else 
      abo.a = dqo.d * AUX_UTILITY::cos(wt) - dqo.q * AUX_UTILITY::sin(wt);
      abo.b = dqo.d * AUX_UTILITY::sin(wt) + dqo.q * AUX_UTILITY::cos(wt);
      abo.o = dqo.o;
      #endif
      return abo;
  }

  
  template<typename T>
  void dqo2abo(const dqo_t<T>& dqo, abo_t<T>& abo, T wt){
      #if ROTATING_FRAME_90
      abo.a =  dqo.d * AUX_UTILITY::sin(wt) + dqo.q * AUX_UTILITY::cos(wt);
      abo.b = -dqo.d * AUX_UTILITY::cos(wt) + dqo.q * AUX_UTILITY::sin(wt);
      abo.o =  dqo.o;
      #else 
      abo.a = dqo.d * AUX_UTILITY::cos(wt) - dqo.q * AUX_UTILITY::sin(wt);
      abo.b = dqo.d * AUX_UTILITY::sin(wt) + dqo.q * AUX_UTILITY::cos(wt);
      abo.o = dqo.o;
      #endif
  }
  
  
  template<typename T>
  dqo_t<T> abo2dqo(const abo_t<T>& abo, T wt){
      dqo_t<T> dqo; 
      #if ROTATING_FRAME_90
      dqo.d = abo.a * AUX_UTILITY::sin(wt) - abo.b * AUX_UTILITY::cos(wt);
      dqo.q = abo.a * AUX_UTILITY::cos(wt) + abo.b * AUX_UTILITY::sin(wt);
      dqo.o =  abo.o;
      #else 
      dqo.d =  abo.a * AUX_UTILITY::cos(wt) + abo.b * AUX_UTILITY::sin(wt);
      dqo.q = -abo.a * AUX_UTILITY::sin(wt) + abo.b * AUX_UTILITY::cos(wt);
      dqo.o =  abo.o;
      #endif
      return dqo;
  }
  
  
  template<typename T>
  void abo2dqo(const abo_t<T>& abo, dqo_t<T>& dqo, T wt){
      #if ROTATING_FRAME_90
      dqo.d = -abo.a * AUX_UTILITY::sin(wt) + abo.b * AUX_UTILITY::cos(wt);
      dqo.q = -abo.a * AUX_UTILITY::cos(wt) - abo.b * AUX_UTILITY::sin(wt);
      dqo.o =  abo.o;
      #else 
      dqo.d =  abo.a * AUX_UTILITY::cos(wt) + abo.b * AUX_UTILITY::sin(wt);
      dqo.q = -abo.a * AUX_UTILITY::sin(wt) + abo.b * AUX_UTILITY::cos(wt);
      dqo.o =  abo.o;
      #endif
  }
  
  
  template<typename T>
  polar_t<T> c2p(T Vx, T Vy){
      polar_t<T> V;
      V.mag = AUX_UTILITY::sqrt(Vx * Vx + Vy * Vy);
      V.th  = AUX_UTILITY::atan2(Vy, Vx);
      return V;
  }
  

  template<typename T>
  void c2p(T Vx, T Vy, polar_t<T>& V){
      V.mag = sqrt(pow(Vx, 2.f) + pow(Vy, 2.f));
      V.th = atan2(Vy, Vx);
  }
  
  
  template<typename T>
  void c2p(const cartesian_t<T>& Vxy, polar_t<T>& V){
      V.mag = AUX_UTILITY::sqrt(Vxy.x * Vxy.x + Vxy.y * Vxy.y);
      V.th  = AUX_UTILITY::atan2(Vxy.y, Vxy.x);
  }
  
  
  template<typename T>
  polar_t<T> c2p(const cartesian_t<T>& Vxy){
      polar_t<T> V;
      V.mag = sqrt(pow(Vxy.x, 2.f) + pow(Vxy.y, 2.f));
      V.th = atan2(Vxy.y, Vxy.x);
      return V;
  }
  
  
  
  template<typename T>
  cartesian_t<T> p2c(const polar_t<T>& V){
      cartesian_t<T> Vxy;
      Vxy.x = V.mag * AUX_UTILITY::cos(V.th);
      Vxy.y = V.mag * AUX_UTILITY::sin(V.th);
      return Vxy;
  }
  
  
  template<typename T>
  cartesian_t<T> p2c(T Amp, T theta){
      cartesian_t<T> Vxy;
      Vxy.x = Amp * AUX_UTILITY::cos(theta);
      Vxy.y = Amp * AUX_UTILITY::sin(theta);
      return Vxy;
  }
  
  
  template<typename T>
  T mag(T Vx, T Vy){
      return AUX_UTILITY::sqrt(Vx*Vx + Vy*Vy);
  }

} //namespace clarkes

#endif //_CLARKES_H
