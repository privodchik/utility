// Date: 12.08.2022
// Created by: ID

// #pragma once
#ifndef _CLARKES_H
#define _CLARKES_H

#include <stdint.h>
#include <cmath>

#define ROTATING_FRAME_90 0


namespace clarkes{
    
    using Type = float;
    
    constexpr const Type PI    = 3.14159265358979;
    constexpr const Type PIx2  = PI * 2.0;
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
               ABC.A * sin(wt) +
               ABC.B * sin(wt - static_cast<T>(2./3.*PI)) +
               ABC.C * sin(wt + static_cast<T>(2./3.*PI)));
      
      dqo.q = static_cast<T>(2./3.)*(
              ABC.A * cos(wt) +
              ABC.B * cos(wt - static_cast<T>(2./3.*PI)) +
              ABC.C * cos(wt + static_cast<T>(2./3.*PI)));
      
      dqo.o = static_cast<T>(1./3.)*(ABC.A + ABC.B + ABC.C);
#else      
      dqo.d = static_cast<T>(2./3.)*(
               ABC.A * cos(wt) +
               ABC.B * cos(wt - static_cast<T>(2./3.*PI)) +
               ABC.C * cos(wt + static_cast<T>(2./3.*PI)));
      
      dqo.q = static_cast<T>(-2./3.)*(
              ABC.A * sin(wt) +
              ABC.B * sin(wt - static_cast<T>(2./3.*PI)) +
              ABC.C * sin(wt + static_cast<T>(2./3.*PI)));
      
      dqo.o = static_cast<T>(1./3.)*(ABC.A + ABC.B + ABC.C);
#endif
      
      return dqo;
      
  }
  


  template<typename T>
  void ABC2dqo(ABC_t<T>& ABC, dqo_t<T>& dqo, T wt){
#if ROTATING_FRAME_90
      dqo.d = static_cast<T>(2./3.)*(
               ABC.A * sin(wt) +
               ABC.B * sin(wt - static_cast<T>(2./3.*PI)) +
               ABC.C * sin(wt + static_cast<T>(2./3.*PI)));
      
      dqo.q = static_cast<T>(2./3.)*(
              ABC.A * cos(wt) +
              ABC.B * cos(wt - static_cast<T>(2./3.*PI)) +
              ABC.C * cos(wt + static_cast<T>(2./3.*PI)));
      
      dqo.o = static_cast<T>(1./3.)*(ABC.A + ABC.B + ABC.C);
#else      
      dqo.d = static_cast<T>(2./3.)*(
               ABC.A * cos(wt) +
               ABC.B * cos(wt - static_cast<T>(2./3.*PI)) +
               ABC.C * cos(wt + static_cast<T>(2./3.*PI)));
      
      dqo.q = static_cast<T>(-2./3.)*(
              ABC.A * sin(wt) +
              ABC.B * sin(wt - static_cast<T>(2./3.*PI)) +
              ABC.C * sin(wt + static_cast<T>(2./3.*PI)));
      
      dqo.o = static_cast<T>(1./3.)*(ABC.A + ABC.B + ABC.C);
#endif
      
  }
  
  
  template<typename T>
  ABC_t<T> dqo2ABC(const dqo_t<T>& dqo, T wt){
      ABC_t<T> ABC;
#if ROTATING_FRAME_90
      ABC.A = dqo.d * sin(wt) + 
              dqo.q * cos(wt) +
              dqo.o;
      ABC.B = dqo.d * sin(wt - static_cast<T>(2.*PI/3.)) + 
              dqo.q * cos(wt - static_cast<T>(2.*PI/3.)) +
              dqo.o;
      ABC.C = dqo.d * sin(wt + static_cast<T>(2.*PI/3.)) + 
              dqo.q * cos(wt + static_cast<T>(2.*PI/3.)) +
              dqo.o;
#else
      ABC.A = dqo.d * cos(wt) - 
              dqo.q * sin(wt) +
              dqo.o;
      ABC.B = dqo.d * cos(wt - static_cast<T>(2.*PI/3.)) -
              dqo.q * sin(wt - static_cast<T>(2.*PI/3.)) +
              dqo.o;
      ABC.C = dqo.d * cos(wt + static_cast<T>(2.*PI/3.)) - 
              dqo.q * sin(wt + static_cast<T>(2.*PI/3.)) +
              dqo.o;
#endif
      return ABC;
  }

  
  


  template<typename T>
  void dqo2ABC(const dqo_t<T>& dqo, ABC_t<T>& ABC, T wt){
#if ROTATING_FRAME_90
      ABC.A = dqo.d * sin(wt) + 
              dqo.q * cos(wt) +
              dqo.o;
      ABC.B = dqo.d * sin(wt - static_cast<T>(2.*PI/3.)) + 
              dqo.q * cos(wt - static_cast<T>(2.*PI/3.)) +
              dqo.o;
      ABC.C = dqo.d * sin(wt + static_cast<T>(2.*PI/3.)) + 
              dqo.q * cos(wt + static_cast<T>(2.*PI/3.)) +
              dqo.o;
#else
      ABC.A = dqo.d * cos(wt) - 
              dqo.q * sin(wt) +
              dqo.o;
      ABC.B = dqo.d * cos(wt - static_cast<T>(2.*PI/3.)) -
              dqo.q * sin(wt - static_cast<T>(2.*PI/3.)) +
              dqo.o;
      ABC.C = dqo.d * cos(wt + static_cast<T>(2.*PI/3.)) - 
              dqo.q * sin(wt + static_cast<T>(2.*PI/3.)) +
              dqo.o;
#endif
  }

  
  template<typename T>
  abo_t<T> dqo2abo(const dqo_t<T>& dqo, T wt){
      abo_t<T> abo; 
      #if ROTATING_FRAME_90
      abo.a =  dqo.d * sin(wt) + dqo.q * cos(wt);
      abo.b = -dqo.d * cos(wt) + dqo.q * sin(wt);
      abo.o =  dqo.o;
      #else 
      abo.a = dqo.d * cos(wt) - dqo.q * sin(wt);
      abo.b = dqo.d * sin(wt) + dqo.q * cos(wt);
      abo.o = dqo.o;
      #endif
      return abo;
  }

  
  template<typename T>
  void dqo2abo(const dqo_t<T>& dqo, abo_t<T>& abo, T wt){
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
  dqo_t<T> abo2dqo(const abo_t<T>& abo, T wt){
      dqo_t<T> dqo; 
      #if ROTATING_FRAME_90
      dqo.d = -abo.a * sin(wt) + abo.b * cos(wt);
      dqo.q = -abo.a * cos(wt) - abo.b * sin(wt);
      dqo.o =  abo.o;
      #else 
      dqo.d =  abo.a * cos(wt) + abo.b * sin(wt);
      dqo.q = -abo.a * sin(wt) + abo.b * cos(wt);
      dqo.o =  abo.o;
      #endif
      return dqo;
  }
  
  
  template<typename T>
  void abo2dqo(const abo_t<T>& abo, dqo_t<T>& dqo, T wt){
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
  polar_t<T> c2p(T Vx, T Vy){
      polar_t<T> V;
      V.mag = sqrt(pow(Vx, 2.f) + pow(Vy, 2.f));
      V.th = atan2(Vy, Vx);
      return V;
  }
  

  template<typename T>
  void c2p(T Vx, T Vy, polar_t<T>& V){
      V.mag = sqrt(pow(Vx, 2.f) + pow(Vy, 2.f));
      V.th = atan2(Vy, Vx);
  }
  
  
  template<typename T>
  void c2p(const cartesian_t<T>& Vxy, polar_t<T>& V){
      V.mag = sqrt(pow(Vxy.x, 2.f) + pow(Vxy.y, 2.f));
      V.th = atan2(Vxy.y, Vxy.x);
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
