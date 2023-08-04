//
// Created by Dmitry on 28.10.2022.
//

#ifndef CURVE_CURVE_H
#define CURVE_CURVE_H

#include <utility>
#include "iqmath.h"

template<typename T>
struct Point{
    T x;
    T y;
    Point(T x = 0, T y = 0): x(x), y(y){}
};


template<typename T, int numPoints>
class Curve{
    using PointType = Point<T>;
    PointType points[numPoints];
    T k[numPoints];
    T yo[numPoints];

    template<int idx, typename ...Points>
    void set_point(Points... points){}

    template<int idx, typename HeadPoint, typename ...TailPoints>
    void set_point(HeadPoint p, TailPoints... points) {
        this->points[idx] = std::move(p);

        if constexpr(idx > 0){
            k[idx] = (this->points[idx].y - this->points[idx-1].y)/(this->points[idx].x - this->points[idx-1].x);
            yo[idx] = this->points[idx].y - k[idx] * this->points[idx].x;

            if constexpr(1 == idx) {
                k[0] = k[1];
                yo[0] = yo[1];
            }
        }

        set_point<idx+1>(points...);
    }

    template<int idx>
    void set_point(){}

    public:
    template<typename... Points>
    Curve(Points... points){
        set_point<0>(points...);
    }

    T out_est(T in) const{
        for(int i = 0; i < numPoints; ++i) {
            if ( in <= points[i].x ){
                return yo[i] + k[i]*in;
            }
        }
        return yo[numPoints-1] + k[numPoints-1]*in;
    }

    bool correct_point(int idx, Point<T> point){
        points[idx] = point;

        if(idx >= numPoints) return false;

        for (int i = 0; i < 2; ++i) {
            if (0 != idx) {
                k[idx] = (this->points[idx].y - this->points[idx - 1].y)/
                               (this->points[idx].x - this->points[idx - 1].x);
                yo[idx] = this->points[idx].y - k[idx] * this->points[idx].x;

                if (1 == idx){
                    k[0] = k[1];
                    yo[0] = yo[1];
                }
            }
            if (numPoints - 1 == idx) break;
            idx++;
        }

        return true;
    }

};


#endif //CURVE_CURVE_H
