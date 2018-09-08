#include "NEURON.h"


#ifndef LAYER_H
#define LAYER_H
class LAYER {

public:
	//INPUT PARAMETERS
	double xIN;
	double yIN;
	double xOUT;
	double yOUT;
	int NumNer;
	vector<NEURON> LayNER;
	int ID;
	int out_ID;
	LAYER(double, double, double, double, int);
	// OVERLOAD CONSTRUCTOR
	void update_LAYER(int, int);

	//DELAY FUNCTION


private:






};



#endif //AXON_H
#pragma once
