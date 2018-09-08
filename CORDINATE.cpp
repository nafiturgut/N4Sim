//
// Created by Nafi Ahmet Turgut on 22.02.2018.
//

#include "CORDINATE.h"
#include <cmath>
CORDINATE::CORDINATE() {}

CORDINATE::CORDINATE(double xAX , double yAX) {
X_axis=xAX;
    Y_axis=yAX;

}

double CORDINATE::distance_calc( CORDINATE v1) {

   double xdiff= X_axis-v1.X_axis;
    double ydiff=Y_axis-v1.Y_axis;

    double res=sqrt( pow(xdiff,2.0)+pow(ydiff,2.0));
    return res;
}