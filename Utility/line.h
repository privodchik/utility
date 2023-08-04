// Date: 28.10.2022
// Created by: ID

#pragma once

template<typename T>
struct Point{
    T x;
    T y;
    Point(T x = 0, T y = 0) : x(x), y(y){}
    
};


template<typename T, int numPoints>
struct Curve{
    
    Point<T> points[numPoints];
    
    
    template<typename... TPoints>
    Curve(TPoints... points){
    }
    
    
    template<typename Head, typename... Tail>
        Curve(Head head, Tail... tail) : {
            Curve(std::move(tail...));
    }
    
    
    template<typename Head>
        Curve(Head head){
            points[0] = std::move(head);
    }
    
};