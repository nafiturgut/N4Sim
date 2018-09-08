//
// Created by Nafi Ahmet Turgut on 26.12.2017.
//
#define _USE_MATH_DEFINES

#include <cmath>
#include "AXON.h"


AXON::AXON() {




}
AXON::AXON(int inID, int outID) {
    width=1e-6;        // 1 µm
    control=1;
    resistivity=100;    // Ω*m
    ref_period=2.65*1e-3;    // s
    a_capacitance=1e-6; //  1 µF/cm^2
    a_resistance=2000;  //  Ω/cm^2
    r_i=resistivity/ ( M_PI *width*width*0.25);
    r_m=a_resistance/(M_PI*width);
    space_const=sqrt(r_m/r_i);
in_ID=inID;
out_ID=outID;
}

double AXON::calculate_delay(bool myel)  {

    myelination=myel;
if (myelination==0){
	
    delay=ref_period+ length/sqrt(width/(8*resistivity*a_resistance*a_capacitance*a_capacitance)); // s ---->Length (m)

}

    return delay;
}
void AXON::set_length(double L) {
    length=L;
}

