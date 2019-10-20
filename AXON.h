//
// Created by Nafi Ahmet Turgut on 26.12.2017.
//
#include <iostream>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <vector>




#ifndef AXON_H
#define AXON_H
class AXON {

public:
AXON();
    //INPUT PARAMETERS
    double freq;
    double pulsewidth;
    double duration;
    int in_ID;
    int out_ID;
	double axon_release = 1;
	

    // OVERLOAD CONSTRUCTOR
AXON(int,int);

    //DELAY FUNCTION
	void update_failure();
     double calculate_delay(bool) ;
    void set_length(double);







private:
    // Axonal Parameters
    bool myelination;                                         // 0/1 denoting unmyelinated/myelinated AXON
    double length;                                           // Length of the AXON (mm)
    double width;                                           // Axonal width
    double resistivity,a_capacitance, a_resistance;
    double ref_period,delay,r_i,r_m,space_const;
    int control;




};



#endif //AXON_H
