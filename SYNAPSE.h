//
// Created by Nafi Ahmet Turgut on 30.12.2017.
//
#include <iostream>
#include <vector>
#include <stdlib.h>

#ifndef SYNAPSE_H
#define SYNAPSE_H
using namespace std;

class SYNAPSE {

public:

    SYNAPSE();
    double interpolate(vector<vector<double>>,int);
    int AMPA=0;
    int NMDA=0;
    int VESC=0;
    int in_ID;
    int out_ID;
    int SYNO=0;
    float weight;
    SYNAPSE(int,int);

};


#endif //SYNAPSE_H
