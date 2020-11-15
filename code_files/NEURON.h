//
// Created by Nafi Ahmet Turgut on 28.12.2017.
//
#include "Spike.h"

#include <iostream>
#include <vector>

#include "OutEvent.h"
#include "AXON.h"

#include "SYNAPSE.h"

#include "CORDINATE.h"
#ifndef NEURON_H
#define NEURON_H
using namespace std;

class NEURON {

public:
    NEURON();

  NEURON(vector<int>,vector<CORDINATE>,vector<double>,int);
    void communicate();
	void update_colltime(OutEvent);
	double neuron_specific_voltage = 15;
    vector<double> TimeVEC;
    vector<AXON> axon;
    vector<SYNAPSE> synapse;
    double Volt=-70;
     void update_volt(OutEvent,double,int);
    double prevtime=0;
	int indx = 0;
	int Spike_num = 0;
	int ax = 0;
	int bx = 0;
	double prevVolt = -70; // mv
	double decay_const = 1;
	double conductance = 1e-11; // 10 pS 
	vector<vector<double>> VoltCont;
	vector<Spike> Spike_vector;
	vector<vector<double>> SpikeCont;
    int status=0;
    double collision_time=-10;
	vector<double> ap_vec = {};


    int ID;


};


#endif //UNTITLED_NEURON_H
