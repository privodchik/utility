// Date: 13.06.2022
// Created by: ID

#pragma once

namespace TL{

class NullType {};
struct EmptyType {};

template<typename T, typename U>
struct Typelist{
    using Head = T;
    using Tail = U;
};

#define TYPELIST_1(T1) Typelist<T1, TL::NullType>
#define TYPELIST_2(T1, T2) Typelist<T1, TL::TYPELIST_1(T2) >
#define TYPELIST_3(T1, T2, T3) Typelist<T1, TL::TYPELIST_2(T2, T3) >
#define TYPELIST_4(T1, T2, T3, T4) Typelist<T1, TL::TYPELIST_3(T2, T3, T4) >
#define TYPELIST_5(T1, T2, T3, T4, T5) Typelist<T1, TL::TYPELIST_4(T2, T3, T4, T5) >
#define TYPELIST_6(T1, T2, T3, T4, T5, T6) \
                  Typelist<T1, TL::TYPELIST_5(T2, T3, T4, T5, T6) >
#define TYPELIST_7(T1, T2, T3, T4, T5, T6, T7) \
                  Typelist<T1, TL::TYPELIST_6(T2, T3, T4, T5, T6, T7) >
#define TYPELIST_8(T1, T2, T3, T4, T5, T6, T7, T8) \
                  Typelist<T1, TL::TYPELIST_7(T2, T3, T4, T5, T6, T7, T8) >
#define TYPELIST_9(T1, T2, T3, T4, T5, T6, T7, T8, T9) \
                  Typelist<T1, TL::TYPELIST_8(T2, T3, T4, T5, T6, T7, T8, T9) >
#define TYPELIST_10(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10) \
                  Typelist<T1, TL::TYPELIST_9(T2, T3, T4, T5, T6, T7, T8, T9, T10) >
#define TYPELIST_11(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11) \
                  Typelist<T1, TL::TYPELIST_10(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11) >
#define TYPELIST_12(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12) \
                  Typelist<T1,\
                  TL::TYPELIST_11(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12) >
#define TYPELIST_13(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13) \
                  Typelist<T1,\
                  TL::TYPELIST_12(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13) >
#define TYPELIST_14(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14) \
                  Typelist<T1,\
                  TL::TYPELIST_13(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14) >
#define TYPELIST_15(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15) \
                  Typelist<T1,\
                  TL::TYPELIST_14(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15) >
#define TYPELIST_16(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16) \
                  Typelist<T1,\
                  TL::TYPELIST_15(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16) >


template <class TList>
struct Length;

template <>
struct Length<NullType>{
    enum { value = 0 };
};

template <class T, class U>
struct Length< Typelist<T, U> >
{
    enum { value = 1 + Length<U>::value };
};



template <class TList, unsigned int index>
struct TypeAt;

template <class Head, class Tail>
struct TypeAt<Typelist<Head, Tail>, 0>{
    typedef Head Result;
};

template <class Head, class Tail, unsigned int i>
struct TypeAt<Typelist<Head, Tail>, i>{
    typedef typename TypeAt<Tail, i-1>::Result Result;
};

}
