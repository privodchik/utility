// Date: 08.06.2023
// Created by: ID

#pragma once

#include "sogi.h"
#include "clarkes.h"
#include "complex.h"

namespace elec{
    
    using namespace sogi;   
    using namespace clarkes;   
    using namespace cmplx;   
    
    template<typename T>
    class Symmetric{
        
        
        ABC_t<SimpleSogi<T>> s;
        
        T reverseSequence;
        
      public:
        
        constexpr Symmetric(T Ts) : reverseSequence(T(0)){
            
            s.A = std::move(SimpleSogi<T>{Ts});
            s.B = std::move(SimpleSogi<T>{Ts});
            s.C = std::move(SimpleSogi<T>{Ts});
            
        }
        
        constexpr auto out_est(T signalA, T signalB, T signalC, T w){
            s.A.out_est(signalA, w);
            s.B.out_est(signalB, w);
            s.C.out_est(signalC, w);
            
            ComplexExp<T> vectA = reim2exp(ComplexReIm<T>{s.A.alpha_get(), s.A.beta_get()});
            ComplexExp<T> vectB = reim2exp(ComplexReIm<T>{s.B.alpha_get(), s.B.beta_get()});
            ComplexExp<T> vectC = reim2exp(ComplexReIm<T>{s.C.alpha_get(), s.C.beta_get()});
            
            vectB *= ComplexExp<T>{1.0, 4.0/3.0*utl::PI};
            vectC *= ComplexExp<T>{1.0, 2.0/3.0*utl::PI};
            
            ComplexExp<T>  reversSeqVec = T(1.0/3.0)*(vectA + vectB + vectC);
            
            return reverseSequence = reversSeqVec.modul();
        }
        
        
        constexpr const T& out_get(){return reverseSequence;}
        
        
        constexpr void config(T Ts){
            s.A.config(Ts);
            s.B.config(Ts);
            s.C.config(Ts);
        }
        
        
        constexpr void reset(){
            s.A.reset();
            s.B.reset();
            s.C.reset();
            reverseSequence = T{0};
        }
        
    };
    
} //namespace elec
