// Date: 07.06.2023
// Created by: NPT


#pragma once


#if 0
#       include "gtest/gtest.h"
#endif //0


#include <cmath>
#include "aux_utility.h"


namespace cmplx{
    
    template<typename T>
    class ComplexExp;
 
    template<typename T>
    class ComplexReIm{
        
        T Re;
        T Im;

      public:
        constexpr ComplexReIm(T r = T{0.0}, T i = T{0.0}) : Re(r), Im(i) { }
        constexpr T real() const { return Re;}
        constexpr T imag() const { return Im;}
        constexpr ComplexReIm& operator+= (ComplexReIm rhs) { 
            Re += rhs.Re; 
            Im += rhs.Im;
            return *this;
        }

        constexpr ComplexReIm& operator-= (ComplexReIm rhs) { 
            Re -= rhs.Re; 
            Im -= rhs.Im;
            return *this;
        }


        constexpr ComplexReIm& operator*= (ComplexReIm rhs) {
            T Re_ = (Re * rhs.Re) - (Im * rhs.Im);
            T Im_ = (Re * rhs.Im) + (Im * rhs.Re);
            Re = Re_;
            Im = Im_;
            return *this;
        } 

        template <typename U>
        friend constexpr ComplexReIm<U> exp2reim(ComplexExp<U> value);
        
        
    };
    
    
    template<typename T>                     
    constexpr ComplexReIm<T> operator+ (ComplexReIm<T> lhs, ComplexReIm<T> rhs) {
        lhs += rhs; return lhs;
    }


    template<typename T>                     
    constexpr ComplexReIm<T> operator- (ComplexReIm<T> lhs, ComplexReIm<T> rhs) {
        lhs -= rhs; return lhs;
    }
    

    template<typename T>                     
    constexpr ComplexReIm<T> operator* (ComplexReIm<T> lhs, ComplexReIm<T> rhs) {
        lhs *= rhs; return lhs;
    }

    
    
    template<typename T>
    class ComplexExp{
        
        T Mod, Th;
        
      public:   
        constexpr ComplexExp(T mod = T{0.0}, T th = T{0.0}) : Mod(mod), Th(th) { }
        constexpr T modul() const { return Mod;}
        constexpr T theta() const { return Th;}
        
        constexpr ComplexExp& operator+= (ComplexExp rhs) { 
            Mod += rhs.Mod; 
            Th += rhs.Th;
            angle_saturate(Th);
            return *this;
        }

        constexpr ComplexExp& operator-= (ComplexExp rhs) { 
            Mod -= rhs.Mod; 
            Th -= rhs.Th;
            angle_saturate(Th);
            return *this;
        }


        constexpr ComplexExp& operator*= (ComplexExp rhs) { 
            Mod *= rhs.Mod; 
            Th += rhs.Th;
            angle_saturate(Th);
            return *this;
        }
        
        constexpr ComplexExp& operator*= (T rhs) { 
            Mod *= rhs; 
            return *this;
        }


        constexpr ComplexExp& operator/= (ComplexExp rhs) { 
            Mod /= rhs.Mod;     //FIXME
            Th -= rhs.Th;
            angle_saturate(Th);
            return *this;
        }
        
        constexpr ComplexExp& operator/= (T rhs) { 
            Mod /= rhs;     //FIXME
            return *this;
        }


        template<typename U>    
        friend constexpr ComplexExp<U> reim2exp(ComplexReIm<U> value);
        
        template<typename U>                     
        friend constexpr ComplexExp<U> operator* (U lhs, ComplexExp<U> rhs); 
        
        template<typename U>                     
        friend constexpr ComplexExp<U> operator/ (ComplexExp<U> lhs, U rhs);
       
    };
                             
       
    template<typename T>                     
    constexpr ComplexExp<T> operator+ (ComplexExp<T> lhs, ComplexExp<T> rhs) {
        ComplexReIm<T> lhs_ = exp2reim(lhs);
        ComplexReIm<T> rhs_ = exp2reim(rhs);
        lhs_ += rhs_;
        lhs = reim2exp(lhs_);
        return lhs;
    }                      


    template<typename T>                     
    constexpr ComplexExp<T> operator- (ComplexExp<T> lhs, ComplexExp<T> rhs) {
        ComplexReIm<T> lhs_ = exp2reim(lhs);
        ComplexReIm<T> rhs_ = exp2reim(rhs);
        lhs_ -= rhs_;
        lhs = reim2exp(lhs_);
        return lhs;
    }                      


    template<typename T>                     
    constexpr ComplexExp<T> operator* (ComplexExp<T> lhs, ComplexExp<T> rhs) {
        lhs *= rhs; return lhs;
    }
    
    template<typename T>                     
    constexpr ComplexExp<T> operator* (T lhs, ComplexExp<T> rhs) {
        rhs.Mod *= lhs; return rhs;
    }
    
    
    template<typename T>                     
    constexpr ComplexExp<T> operator/ (ComplexExp<T> lhs, T rhs) {
        lhs.Mod /= rhs; return lhs;
    }
    
    
    template <typename T>
    constexpr ComplexExp<T> reim2exp(ComplexReIm<T> value){
        ComplexExp<T> cmplxExp;
        cmplxExp.Mod = std::sqrt(pow(value.real(), T(2.0)) + pow(value.imag(), T(2.0)));
        cmplxExp.Th = std::atan2(value.imag(), value.real());
        return cmplxExp;
    }
    
    
    
    template <typename T>
    constexpr ComplexReIm<T> exp2reim(ComplexExp<T> value){
        ComplexReIm<T> cmplxReIm;
        cmplxReIm.Re = value.modul() * std::cos(value.theta());
        cmplxReIm.Im = value.modul() * std::sin(value.theta());
        return cmplxReIm;
    }
        
    
}// namespace cmplx


#if 0

TEST(cexpr, complex) {
  cmplx::ComplexReIm c{1.0f, 1.0f};
  cmplx::ComplexReIm d{1.5f, -0.5f};
  c = c + d;
  EXPECT_EQ(c.real(), 2.5f);
  EXPECT_EQ(c.imag(), 0.5f);
  EXPECT_EQ(d.real(), 1.5f);
  EXPECT_EQ(d.imag(), -0.5f);  

  c = c * d;
  EXPECT_EQ(c.real(), 4.0f);
  EXPECT_EQ(c.imag(), -0.5f);

  cmplx::ComplexExp e{1.0f, 1.0f};
  cmplx::ComplexExp f{1.5f, -0.5f};
  e = e - f;
  EXPECT_EQ(e.modul(), -0.5f);
  EXPECT_EQ(e.theta(), 1.5f);

  e = e * f;  
  EXPECT_EQ(e.modul(), -0.75f);
  EXPECT_EQ(e.theta(), 1.0f);

  cmplx::ComplexReIm g{2.f, -1.f};
  cmplx::ComplexExp h = cmplx::reim2exp(g);
  EXPECT_GE(h.modul(), -2.23607f);
  EXPECT_GE(h.theta(), -0.463648f);


  cmplx::ComplexExp k{1.f, 0.5f};
  cmplx::ComplexReIm m = cmplx::exp2reim(k);
  EXPECT_EQ(m.real(), 1.0f);
  EXPECT_EQ(m.imag(), 1.0f);


}
#endif //0

