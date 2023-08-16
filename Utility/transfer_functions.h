// Date: 02.03.2022
// Created by: ID


#pragma once

#include <cstdint>
#include <utility>
#include <type_traits>
#include <cmath>

//#define USE_INFO

#ifdef USE_INFO
#include <iostream>
#endif


namespace TF{

//--------------------------------------- Base -----------------------------------------------------
template<class T>
class TFBase{
  protected:
    T m_Ts;
    T m_yk;
  protected:
    T m_satPos, m_satNeg;
  public:
  
    constexpr TFBase(){
        #ifdef USE_INFO
        std::cout << "TFBase Ctor" << std::endl;
        #endif         
    }
    constexpr TFBase(T Ts, T satPos, T satNeg) : 
                  m_yk(T{0}),
                  m_Ts(std::move(Ts)), 
                  m_satPos(std::move(satPos)), 
                  m_satNeg(std::move(satNeg))
    {
        #ifdef USE_INFO
        std::cout << "TFBase Ctor" << std::endl;
        #endif
    }


    TFBase(const TFBase& value) : 
                        m_Ts(value.m_Ts),
                        m_yk(value.m_yk),
                        m_satPos(value.m_satPos),
                        m_satNeg(value.m_satNeg)
    {
        #ifdef USE_INFO
        std::cout << "TFBase Copy ctor" << std::endl;
        #endif
    }

    TFBase& operator=(const TFBase& value){
        if (this != &value){
            m_Ts = value.m_Ts;
            m_yk = value.m_yk;
            m_satPos = value.m_satPos;
            m_satNeg = value.m_satNeg;
        }
        #ifdef USE_INFO
        std::cout << "TFBase Copy assignment" << std::endl;
        #endif
        return *this;
    }                    

    TFBase(TFBase&& value) :
                    m_Ts(std::move(value.m_Ts)),
                    m_yk(std::move(value.m_yk)),
                    m_satPos(std::move(value.m_satPos)),
                    m_satNeg(std::move(value.m_satNeg))
    {
        #ifdef USE_INFO
        std::cout << "TFBase Move ctor" << std::endl;
        #endif
    }

    TFBase& operator=(TFBase&& value){
        if (this != &value){
            m_Ts = std::move(value.m_Ts);
            m_yk = std::move(value.m_yk);
            m_satPos = std::move(value.m_satPos);
            m_satNeg = std::move(value.m_satNeg);
        }
        #ifdef USE_INFO
        std::cout << "TFBase Move assignment" << std::endl;
        #endif
        return *this;
    }

    
    virtual ~TFBase() = 0;

  protected:
    constexpr decltype(auto) out_limit(){
        return m_yk = (m_yk > m_satPos ? m_satPos : (m_yk < m_satNeg ? m_satNeg : m_yk));
    }
  public:
    constexpr const T& out_get() const{return m_yk;}
    
    template<typename U>
    constexpr void out_set(U&& val){m_yk = std::forward<U>(val);}
    
    constexpr void reset(){m_yk = T{0};}
    constexpr T Ts_get() const {return m_Ts;}
    
    constexpr void sat_set(T satP, T satN){m_satPos = satP; m_satNeg = satN;}
    
};

template<class T>
TFBase<T>::~TFBase(){
    #ifdef USE_INFO
    std::cout << "TFBase Dtor" << std::endl;
    #endif

}



//template <typename T> TFBase(T, T, T) -> TFBase<T>; // it is deduction guide


//--------------------------------------- Filter ---------------------------------------------------
template<class T>
class Filter final: public TFBase<T>{
    T m_k1, m_k2;

  public:
    constexpr Filter(){
        #ifdef USE_INFO
        std::cout << "Filter Ctor" << std::endl;
        #endif   
    }
    constexpr Filter(T Ts, T Tf, T satPos, T satNeg) : 
      TFBase<T>(std::move(Ts), std::move(satPos), std::move(satNeg))
    {
        config(std::move(Tf));
        #ifdef USE_INFO
        std::cout << "Filter Ctor" << std::endl;
        #endif   
    }
    
    Filter(const Filter& value) : 
                    TFBase<T>(*static_cast<const TFBase<T>*>(&value)), 
                    m_k1(value.m_k1),
                    m_k2(value.m_k2)
    {
        #ifdef USE_INFO
        std::cout << "Filter Copy ctor" << std::endl;
        #endif          
    }

    Filter(Filter&& value) : 
                    TFBase<T>(std::move(*static_cast<TFBase<T>*>(&value))), 
                    m_k1(std::move(value.m_k1)),
                    m_k2(std::move(value.m_k2))
    {
        #ifdef USE_INFO
        std::cout << "Filter Move ctor" << std::endl;
        #endif         
    }

    Filter& operator=(const Filter& value){
        if (this != &value){
            *static_cast<TFBase<T>*>(this) = *static_cast<const TFBase<T>*>(&value);
            m_k1 = value.m_k1;
            m_k2 = value.m_k2;
        }
        #ifdef USE_INFO
        std::cout << "Filter Copy assignment" << std::endl;
        #endif         
        return *this;
    }                

    Filter& operator=(Filter&& value){
        if (this != &value){
            *static_cast<TFBase<T>*>(this) = std::move(*static_cast<TFBase<T>*>(&value));
            m_k1 = std::move(value.m_k1);
            m_k2 = std::move(value.m_k2);
        }
        #ifdef USE_INFO
        std::cout << "Filter Move assignment" << std::endl;
        #endif         
        return *this;
    } 

    ~Filter(){
        #ifdef USE_INFO
        std::cout << "Filter Dtor" << std::endl;
        #endif
    }
      
    template<typename  U>
    constexpr void config(U&& Tf){
        m_k1 = TFBase<T>::m_Ts / (TFBase<T>::m_Ts + Tf);
        m_k2 = Tf / (TFBase<T>::m_Ts + Tf);
    }
        

    template<typename U>
    constexpr decltype(auto) out_est(U&& xk){
        TFBase<T>::m_yk = m_k1 * xk + m_k2 * TFBase<T>::m_yk;
        return TFBase<T>::out_limit();
    }

    
    const T& out_get() const{return TFBase<T>::m_yk;}
};

//template <typename T> Filter(T, T, T, T) -> Filter<T>;


//--------------------------------------- Integrator -----------------------------------------------
template<class T>
class Integrator final: public TFBase<T>{
    
    T m_TsDivTi;
    
  public:

    constexpr Integrator(){
        #ifdef USE_INFO
        std::cout << "Integrator Ctor" << std::endl;
        #endif         
    }
    constexpr Integrator(T Ts, T Ti, T satPos, T satNeg ) : 
            TFBase<T>(std::move(Ts), std::move(satPos), std::move(satNeg)){ 
        config(std::move(Ti));
        #ifdef USE_INFO
        std::cout << "Integrator Ctor" << std::endl;
        #endif          
    }

    Integrator(const Integrator& value) : 
                    TFBase<T>(*static_cast<const TFBase<T>*>(&value)), 
                    m_TsDivTi(value.m_TsDivTi)
    {
        #ifdef USE_INFO
        std::cout << "Integrator Copy ctor" << std::endl;
        #endif          
    }

    Integrator(Integrator&& value) : 
                    TFBase<T>(std::move(*static_cast<TFBase<T>*>(&value))), 
                    m_TsDivTi(std::move(value.m_TsDivTi))
    {
        #ifdef USE_INFO
        std::cout << "Integrator Move ctor" << std::endl;
        #endif         
    }

    Integrator& operator=(const Integrator& value){
        if (this != &value){
            *static_cast<TFBase<T>*>(this) = *static_cast<const TFBase<T>*>(&value);
            m_TsDivTi = value.m_TsDivTi;
        }
        #ifdef USE_INFO
        std::cout << "Integrator Copy assignment" << std::endl;
        #endif         
        return *this;
    }                

    Integrator& operator=(Integrator&& value){
        if (this != &value){
            *static_cast<TFBase<T>*>(this) = std::move(*static_cast<TFBase<T>*>(&value));
            m_TsDivTi = std::move(value.m_TsDivTi);
        }
        #ifdef USE_INFO
        std::cout << "Integrator Move assignment" << std::endl;
        #endif         
        return *this;
    } 

    ~Integrator(){
        #ifdef USE_INFO
        std::cout << "Integrator Dtor" << std::endl;
        #endif
    }               
      
    template<typename U>
    constexpr void config(U&& Ti){
        m_TsDivTi = TFBase<T>::m_Ts / Ti;
    }

    
    template<typename U>
    constexpr decltype(auto) out_est(U&& xk){
        TFBase<T>::m_yk += m_TsDivTi * xk;
        return TFBase<T>::out_limit();
    }
};


//template <typename T> Integrator(T&&, T&&, T&&, T&&) -> Integrator<T>;


//--------------------------------------- Trapezoidal Integrator -----------------------------------------------
template<class T>
class TrapezIntegrator final: public TFBase<T>{
    T m_xk_1;
    T m_TsDivTi;
    
  public:

    constexpr TrapezIntegrator(){
        #ifdef USE_INFO
        std::cout << "TrapezIntegrator Ctor" << std::endl;
        #endif         
    }
   
    constexpr TrapezIntegrator(T Ts, T Ti, T satPos, T satNeg ) : 
            m_xk_1(T{0}),
            TFBase<T>(std::move(Ts), std::move(satPos), std::move(satNeg))
   { 
        config(std::move(Ti));
        #ifdef USE_INFO
        std::cout << "TrapezIntegrator Ctor" << std::endl;
        #endif          
    }

    TrapezIntegrator(const TrapezIntegrator& value) : 
                    TFBase<T>(*static_cast<const TFBase<T>*>(&value)), 
                    m_TsDivTi(value.m_TsDivTi),
                    m_xk_1(value.m_xk_1)
    {
        #ifdef USE_INFO
        std::cout << "TrapezIntegrator Copy ctor" << std::endl;
        #endif          
    }

    TrapezIntegrator(TrapezIntegrator&& value) : 
                    TFBase<T>(std::move(*static_cast<TFBase<T>*>(&value))), 
                    m_TsDivTi(std::move(value.m_TsDivTi)),
                    m_xk_1(std::move(value.m_xk_1))
    {
        #ifdef USE_INFO
        std::cout << "Integrator Move ctor" << std::endl;
        #endif         
    }

    TrapezIntegrator& operator=(const TrapezIntegrator& value){
        if (this != &value){
            *static_cast<TFBase<T>*>(this) = *static_cast<const TFBase<T>*>(&value);
            m_TsDivTi = value.m_TsDivTi;
            m_xk_1 = value.m_xk_1;
        }
        #ifdef USE_INFO
        std::cout << "TrapezIntegrator Copy assignment" << std::endl;
        #endif         
        return *this;
    }                

    TrapezIntegrator& operator=(TrapezIntegrator&& value){
        if (this != &value){
            *static_cast<TFBase<T>*>(this) = std::move(*static_cast<TFBase<T>*>(&value));
            m_TsDivTi = std::move(value.m_TsDivTi);
            m_xk_1 = std::move(value.m_xk_1);
        }
        #ifdef USE_INFO
        std::cout << "TrapezIntegrator Move assignment" << std::endl;
        #endif         
        return *this;
    } 

    ~TrapezIntegrator(){
        #ifdef USE_INFO
        std::cout << "TrapezIntegrator Dtor" << std::endl;
        #endif
    }               
      
    template<typename U>
    constexpr void config(U&& Ti){
        m_TsDivTi = TFBase<T>::m_Ts / Ti;
    }

    
    template<typename U>
    constexpr decltype(auto) out_est(U&& xk){
        TFBase<T>::m_yk += (m_TsDivTi / std::remove_reference_t<U>(2.0) * (xk + m_xk_1));
        m_xk_1 = xk;
        return TFBase<T>::out_limit();
    }

    void reset(){
        m_xk_1 = 0;
        TFBase<T>::reset();
    }
};


//template <typename T> TrapezIntegrator(T&&, T&&, T&&, T&&) -> TrapezIntegrator<T>;


//--------------------------------------- Simpson Integrator -----------------------------------------------
template<class T>
class SimpsonIntegrator final: public TFBase<T>{
    
    T m_TsDivTi;
    
    T m_yk_2;
    T m_yk_1;
    
  public:

    constexpr SimpsonIntegrator(){
        #ifdef USE_INFO
        std::cout << "SimpsonIntegrator Ctor" << std::endl;
        #endif         
    }
    
    constexpr SimpsonIntegrator(T Ts, T Ti, T satPos, T satNeg ) : 
            TFBase<T>(std::move(Ts), std::move(satPos), std::move(satNeg)),
            m_yk_2(T{0},
            m_yk_1(T{0})        
    { 
        config(std::move(Ti));
        #ifdef USE_INFO
        std::cout << "SimpsonIntegrator Ctor" << std::endl;
        #endif          
    }

    SimpsonIntegrator(const SimpsonIntegrator& value) : 
                    TFBase<T>(*static_cast<const TFBase<T>*>(&value)), 
                    m_TsDivTi(value.m_TsDivTi),
                    m_yk_2(value.m_yk_2) 
                    m_yk_1(value.m_yk_1) 
    {
        #ifdef USE_INFO
        std::cout << "SimpsonIntegrator Copy ctor" << std::endl;
        #endif          
    }

    SimpsonIntegrator(SimpsonIntegrator&& value) : 
                    TFBase<T>(std::move(*static_cast<TFBase<T>*>(&value))), 
                    m_TsDivTi(std::move(value.m_TsDivTi)),
                    m_yk_2(std::move(value.m_yk_2))        
                    m_yk_1(std::move(value.m_yk_1))        
    {
        #ifdef USE_INFO
        std::cout << "SimpsonIntegrator Move ctor" << std::endl;
        #endif         
    }

    SimpsonIntegrator& operator=(const SimpsonIntegrator& value){
        if (this != &value){
            *static_cast<TFBase<T>*>(this) = *static_cast<const TFBase<T>*>(&value);
            m_TsDivTi = value.m_TsDivTi;
            m_yk_2 = value.m_yk_2;
            m_yk_1 = value.m_yk_1;
        }
        #ifdef USE_INFO
        std::cout << "SimpsonIntegrator Copy assignment" << std::endl;
        #endif         
        return *this;
    }                

    SimpsonIntegrator& operator=(SimpsonIntegrator&& value){
        if (this != &value){
            *static_cast<TFBase<T>*>(this) = std::move(*static_cast<TFBase<T>*>(&value));
            m_TsDivTi = std::move(value.m_TsDivTi);
            m_yk_2 = std::move(value.m_yk_2);
            m_yk_1 = std::move(value.m_yk_1);
        }
        #ifdef USE_INFO
        std::cout << "SimpsonIntegrator Move assignment" << std::endl;
        #endif         
        return *this;
    } 

    ~SimpsonIntegrator(){
        #ifdef USE_INFO
        std::cout << "SimpsonIntegrator Dtor" << std::endl;
        #endif
    }               
      
    template<typename U>
    constexpr void config(U&& Ti){
        m_TsDivTi = TFBase<T>::m_Ts / Ti;
    }

    
    template<typename U>
    constexpr decltype(auto) out_est(U&& xk){
        
        std::remove_reference_t<U> yk_1_ = m_yk;
        
        TFBase<T>::m_yk = m_yk_2 
                + std::remove_reference_t<U>(4.0) * TFBase<T>::m_yk + xk;
        TFBase<T>::m_yk *= (m_TsDivTi * std::remove_reference_t<U>(1.0/3.0));
        
        m_yk_2 = yk_1_;
       
        return TFBase<T>::out_limit();
    }
    
    void reset(){
        m_yk_2 = 0;
        TFBase<T>::reset();
    }
};


//template <typename T> SimpsonIntegrator(T&&, T&&, T&&, T&&) -> SimpsonIntegrator<T>;


//--------------------------------------- PI-Regulator ---------------------------------------------
template<class T>
class PIreg final: public TFBase<T>{
    
    T m_K;
    Integrator<T> m_I;
    
  public:

    constexpr PIreg(){
        #ifdef USE_INFO
        std::cout << "PIreg Ctor" << std::endl;
        #endif 
    } 
    
    constexpr PIreg(T Ts, T K, T Ti, T satPos, T satNeg) : 
      TFBase<T>(Ts, satPos, satNeg),
      m_K(K),
      m_I(Ts, Ti, satPos, satNeg)
    {
        config(std::move(K), std::move(Ti)); 
        #ifdef USE_INFO
        std::cout << "PIreg Ctor" << std::endl;
        #endif 
        
    }

    PIreg(const PIreg& value) : 
                    TFBase<T>(*static_cast<TFBase<T*>>(&value)), 
                    m_K(value.m_K),
                    m_I(value.m_I)
    {
        #ifdef USE_INFO
        std::cout << "PIreg Copy ctor" << std::endl;
        #endif          
    }

    PIreg(PIreg&& value) : 
                    TFBase<T>(std::move(*static_cast<TFBase<T*>>(*value))), 
                    m_K(std::move(value.m_K)),
                    m_I(std::move(value.m_I))
    {
        #ifdef USE_INFO
        std::cout << "PIreg Move ctor" << std::endl;
        #endif         
    }

    PIreg& operator=(const PIreg& value){
        if (this != &value){
            *static_cast<TFBase<T>*>(this) = *static_cast<const TFBase<T>*>(&value);
            m_K = value.m_K;
            m_I = value.m_I;
        }
        #ifdef USE_INFO
        std::cout << "PIreg Copy assignment" << std::endl;
        #endif         
        return *this;
    }                

    PIreg& operator=(PIreg&& value){
        if (this != &value){
            *static_cast<TFBase<T>*>(this) = std::move(*static_cast<TFBase<T>*>(&value));
            m_K = std::move(value.m_K);
            m_I = std::move(value.m_I);
        }
        #ifdef USE_INFO
        std::cout << "PIreg Move assignment" << std::endl;
        #endif         
        return *this;
    } 

    ~PIreg(){
        #ifdef USE_INFO
        std::cout << "PIreg Dtor" << std::endl;
        #endif
    }
      
      
    template<typename U>
    constexpr void config(U&& K, U&& Ti){
        m_K = K;
        m_I.config(std::forward<U>(Ti));
    }

      
    template<typename U>
    constexpr decltype(auto) out_est(U&& xk){
        TFBase<T>::m_yk = m_K * xk + m_I.out_est(xk);
        return TFBase<T>::out_limit();
    }
    
    constexpr void reset(){
        m_I.reset();
        TFBase<T>::reset();
    }
};


//template <typename T> PIreg(T, T, T, T, T) -> PIreg<T>;


//--------------------------------------- Difference -----------------------------------------------
template<class T>
class Difference final: public TFBase<T>{
    
    T m_yk_1;
    
  public:
    constexpr Difference(){
        #ifdef USE_INFO
        std::cout << "Difference Ctor" << std::endl;
        #endif    
    }
    constexpr Difference(T satPos, T satNeg) : 
        TFBase<T>(T{}, std::move(satPos), std::move(satNeg))
    {
        #ifdef USE_INFO
        std::cout << "Difference Ctor" << std::endl;
        #endif  
    }

    Difference(const Difference& value) : 
                    TFBase<T>(*static_cast<const TFBase<T>*>(&value)), 
                    m_yk_1(value.m_yk_1)
    {
        #ifdef USE_INFO
        std::cout << "Difference Copy ctor" << std::endl;
        #endif          
    }

    Difference(Difference&& value) : 
                    TFBase<T>(std::move(*static_cast<TFBase<T>*>(&value))), 
                    m_yk_1(std::move(value.m_yk_1))
    {
        #ifdef USE_INFO
        std::cout << "Difference Move ctor" << std::endl;
        #endif         
    }

    Difference& operator=(const Difference& value){
        if (this != &value){
            *static_cast<TFBase<T>*>(this) = *static_cast<const TFBase<T>*>(&value);
            m_yk_1 = value.m_yk_1;
        }
        #ifdef USE_INFO
        std::cout << "Difference Copy assignment" << std::endl;
        #endif         
        return *this;
    }                

    Difference& operator=(Difference&& value){
        if (this != &value){
            *static_cast<TFBase<T>*>(this) = std::move(*static_cast<TFBase<T>*>(&value));
            m_yk_1 = std::move(value.m_yk_1);
        }
        #ifdef USE_INFO
        std::cout << "Difference Move assignment" << std::endl;
        #endif         
        return *this;
    } 

    ~Difference(){
        #ifdef USE_INFO
        std::cout << "Difference Dtor" << std::endl;
        #endif
    }

    template<typename U>  
    constexpr decltype(auto) out_est(U&& yk){
        TFBase<T>::m_yk = yk - m_yk_1;
        m_yk_1 = yk;
        return TFBase<T>::out_limit();
    }
};

//template <typename T> Difference(T, T) -> Difference<T>;



//--------------------------------------- Differentiator -------------------------------------------
template<class T>
class Differentiator final: public TFBase<T>{
    
    T m_1DivTs;
    T m_xk_1;
    
    public:
        constexpr Differentiator(){
            #ifdef USE_INFO
            std::cout << "Differentiator Ctor" << std::endl;
            #endif 
        }  
        constexpr Differentiator(T Ts, T satPos, T satNeg) : 
            TFBase<T>(Ts, satPos, satNeg),
            m_1DivTs(T{1}/Ts)
        {
            #ifdef USE_INFO
            std::cout << "Differentiator Ctor" << std::endl;
            #endif 
        }

        Differentiator(const Differentiator& value) : 
                    TFBase<T>(*static_cast<const TFBase<T>*>(&value)), 
                    m_1DivTs(value.m_1DivTs),
                    m_xk_1(value.m_xk_1)
        {
            #ifdef USE_INFO
            std::cout << "Differentiator Copy ctor" << std::endl;
            #endif          
        }

        Differentiator(Differentiator&& value) : 
                        TFBase<T>(std::move(*static_cast<TFBase<T>*>(&value))), 
                        m_1DivTs(std::move(value.m_1DivTs)),
                        m_xk_1(std::move(value.m_xk_1))
        {
            #ifdef USE_INFO
            std::cout << "Differentiator Move ctor" << std::endl;
            #endif         
        }

        Differentiator& operator=(const Differentiator& value){
            if (this != &value){
                *static_cast<TFBase<T>*>(this) = *static_cast<const TFBase<T>*>(&value);
                m_1DivTs = value.m_1DivTs;
                m_xk_1 = value.m_xk_1;
            }
            #ifdef USE_INFO
            std::cout << "Differentiator Copy assignment" << std::endl;
            #endif         
            return *this;
        }                

        Differentiator& operator=(Differentiator&& value){
            if (this != &value){
                *static_cast<TFBase<T>*>(this) = std::move(*static_cast<TFBase<T>*>(&value));
                m_1DivTs = std::move(value.m_1DivTs);
                m_xk_1 = std::move(value.m_xk_1);
            }
            #ifdef USE_INFO
            std::cout << "Differentiator Move assignment" << std::endl;
            #endif         
            return *this;
        } 

        ~Differentiator(){
            #ifdef USE_INFO
            std::cout << "Differentiator Dtor" << std::endl;
            #endif
        }

        template<typename U>
        constexpr decltype(auto) out_est(U&& xk){
          TFBase<T>::m_yk = m_1DivTs * (xk - m_xk_1);
          m_xk_1 = xk;
          return TFBase<T>::out_limit();
        }

        void reset(){
          TFBase<T>::reset();
          m_xk_1 = T{};
        }

};

//template <typename T> Differentiator(T, T, T) -> Differentiator<T>;


//--------------------------------------- RMS ------------------------------------------------------
template<class T>
class RMS final: public TFBase<T>{
    
    Integrator<T>  	m_I;
    T        		m_f;
    T        		m_internalTime;

  public:
    constexpr RMS(){
        #ifdef USE_INFO
        std::cout << "RMS Ctor" << std::endl;
        #endif         
    }
    constexpr RMS(T Ts, T f, T satPos, T satNeg ) : TFBase<T>(Ts, satPos, satNeg),
                                                  m_I(Ts, T{1}, satPos, satNeg),
                                                  m_f(f),
                                                  m_internalTime(T{0})
    {
        #ifdef USE_INFO
        std::cout << "RMS Ctor" << std::endl;
        #endif         
    }

    RMS(const RMS& value) : 
                    TFBase<T>(*static_cast<const TFBase<T>*>(&value)), 
                    m_I(value.m_I),
                    m_f(value.m_f),
                    m_internalTime(value.m_internalTime)
    {
        #ifdef USE_INFO
        std::cout << "RMS Copy ctor" << std::endl;
        #endif          
    }

    RMS(RMS&& value) : 
                    TFBase<T>(std::move(*static_cast<TFBase<T>*>(&value))), 
                    m_I(std::move(value.m_I)),
                    m_f(std::move(value.m_f)),
                    m_internalTime(std::move(value.m_internalTime))
    {
        #ifdef USE_INFO
        std::cout << "RMS Move ctor" << std::endl;
        #endif         
    }

    RMS& operator=(const RMS& value){
        if (this != &value){
            *static_cast<TFBase<T>*>(this) = *static_cast<const TFBase<T>*>(&value);
            m_I = value.m_I;
            m_f = value.m_f;
            m_internalTime = value.m_internalTime;
        }
        #ifdef USE_INFO
        std::cout << "RMS Copy assignment" << std::endl;
        #endif         
        return *this;
    }                

    RMS& operator=(RMS&& value){
        if (this != &value){
            *static_cast<TFBase<T>*>(this) = std::move(*static_cast<TFBase<T>*>(&value));
            m_I = std::move(value.m_I);
            m_f = std::move(value.m_f);
            m_internalTime = std::move(value.m_internalTime);
        }
        #ifdef USE_INFO
        std::cout << "RMS Move assignment" << std::endl;
        #endif         
        return *this;
    } 

    ~RMS(){
        #ifdef USE_INFO
        std::cout << "RMS Dtor" << std::endl;
        #endif
    }
    
    template<typename U>
    constexpr void config(U&& Ti){
        m_I.config(std::forward<U>(Ti));
    }

  private:
    
    template<typename U>
    constexpr decltype(auto) sqrt_helper(U v){
        return std::sqrt(v);
    }
    
    ///*constexpr*/ decltype(auto) sqrt_helper(iqCpp::iq v){
    //    return (iqCpp::CPP_IQsqrt(v));
    //}
    
  public:
    
    template<typename U>
    constexpr decltype(auto) out_est(U&& xk){
        m_I.out_est(xk * xk);
        m_internalTime += TFBase<T>::m_Ts;
        if (m_internalTime > T{1}/m_f){
            m_internalTime = T{0};
            TFBase<T>::m_yk = sqrt_helper( m_I.out_get() * m_f );
            m_I.reset();
        }
        return TFBase<T>::out_limit();
    }

    constexpr void reset(){
        m_I.reset();
        m_internalTime = T{0};
        TFBase<T>::reset();
    }
};
  
//template <typename T> RMS(T, T, T, T) -> RMS<T>;


template <typename T>
class AVG{
    T yk;
    
  public:
    constexpr AVG() : yk(0){}
    
    template<typename U>
    constexpr decltype(auto) out_est(U&& xk){
        return yk = (xk + yk) / T(2.0);
    }
    
    
    constexpr void reset(){yk = T{0};}
        
};

} //namespace TF



#if 0
inline
int test(){

    #if 0
    TF::Filter<float> lpf;
    TF::Filter lpf2 = TF::Filter{0.001f, 1.f, 10.f, -10.f};
    TF::Filter<float> lpf3 = lpf2;
    TF::Filter<float> lpf4 = std::move(lpf2);
    lpf4 = lpf2;
    lpf4 = std::move(lpf3);
    #endif

    #if 0
    TF::Integrator<float> integr;
    TF::Integrator integr2 = TF::Integrator{0.001f, 1.f, 10.f, -10.f};
    TF::Integrator<float> integr3 = std::move(integr2);
    integr = std::move(integr2);
    #endif

    #if 0
    TF::PIreg<float> idReg;
    TF::PIreg idReg2 = TF::PIreg{0.001f, 1.f, 0.5f, 10.f, -10.f};
    TF::PIreg<float> idReg3; 
    idReg3 = std::move(idReg2);
    idReg = std::move(idReg2);
    #endif

    #if 0
    TF::Differentiator<float> dif;
    TF::Differentiator dif2 = TF::Differentiator{0.001f, 10.f, -10.f};
    TF::Differentiator<float> dif3 = std::move(dif2);
    dif = std::move(dif2);
    #endif

    #if 0
    TF::Difference<float> diff;
    TF::Difference diff2 = TF::Difference{10.f, -10.f};
    TF::Difference<float> diff3 = diff2;
    TF::Difference<float> diff4 = std::move(diff2);
    diff4 = diff2;
    diff4 = std::move(diff3);
    #endif
    
    #if 0
    TF::RMS<float> rms;
    TF::RMS rms2 = TF::RMS{0.001f, 1.f, 10.f, -10.f};
    TF::RMS<float> rms3 = rms2;
    TF::RMS<float> rms4 = std::move(rms2);
    rms4 = rms2;
    rms4 = std::move(rms3);
    #endif
    
    return 1;
}

#endif //0

