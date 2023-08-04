// Date: 20.01.2022
// Created by: ID

#ifndef _CLRKES_TRANSFORMATION_H
#define _CLRKES_TRANSFORMATION_H

#include <cmath>
#include <utility>

template<typename T>
struct Coord3_t{
    T first;
    T second;
    T third;
    
    Coord3_t() : first(T{}), second(T{}), third(T{}){}
    Coord3_t(T _1st, T _2nd, T _3rd) : first(_1st), second(_2nd), third(_3rd){}
};


#pragma inline = forced
template<typename T>
Coord3_t<T> abo2dqo(Coord3_t<T> _coord, T _wt){ // FIXME: const Coord3_t<T>&
    T _cosWT = std::cos(_wt);
    T _sinWT = std::sin(_wt);
    Coord3_t<T> _retCoord;
    _retCoord.first  = _coord.first * _cosWT + _coord.second * _sinWT;
    _retCoord.second = -_coord.first * _sinWT + _coord.second * _cosWT;
    _retCoord.third  = _coord.third;
    return _retCoord;
};

#pragma inline = forced
template<typename T>
Coord3_t<T> abc2abo(const Coord3_t<T>& _coord){
    Coord3_t<T> _retCoord;
    _retCoord.first  = IQmpy( IQmpy2(_coord.first) - _coord.second - _coord.third, IQ(1./3.) );
    _retCoord.second = IQmpy( _coord.second - _coord.third, IQ(1./std::sqrt(3.)) );
    _retCoord.third  = IQmpy( _coord.first + _coord.second + _coord.third, IQ(1./3.) );
    return _retCoord;
};


template<typename T>
class Cabo2dqo{
  private:
    Coord3_t<T> m_aboCoord;
    std::pair<T, T> m_CosSinDqFrameRotate;
    
  public:
    Cabo2dqo(): m_aboCoord{0, 0, 0}{}
    
    #pragma inline = forced
    const Coord3_t<T>& out_est(Coord3_t<T> _dqoCoord, T _dqoRotate){
        m_CosSinDqFrameRotate.first = std::cos(_dqoRotate);
        m_CosSinDqFrameRotate.second = std::sin(_dqoRotate);
        m_aboCoord.first  =  _dqoCoord.first * m_CosSinDqFrameRotate.first + _dqoCoord.second * m_CosSinDqFrameRotate.second;
        m_aboCoord.second = -_dqoCoord.first * m_CosSinDqFrameRotate.second + _dqoCoord.second * m_CosSinDqFrameRotate.first;
        m_aboCoord.third  =  _dqoCoord.third;
        return m_aboCoord;
//        return m_aboCoord = abo2dqo(_dqoCoord, _dqoRotate);
    }
    
    const Coord3_t<T>& out_get() const{return m_aboCoord;}
    
    #pragma inline = forced
    const std::pair<T,T>& cos_sin_dq_frame_rotate(){return m_CosSinDqFrameRotate;}
};





#endif //_CLRKES_TRANSFORMATION_H

