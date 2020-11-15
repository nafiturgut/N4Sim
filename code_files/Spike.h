#pragma once
#include <vector>

#ifndef SPIKE_H
#define SPIKE_H
using namespace std;

 class Spike
{
public:
	Spike();
	Spike(vector<vector<double>>&, int, int);
	Spike(vector<vector<double>>&,int,int,int);
	vector<double>* Spike_Contribution;
	int Spike_contr_size;
	double Spike_time;
	int Neuron_ID;
	int Spike_ID;
	vector<double>* Spike_vec;
	int dim;
	int dim2;
	void calc_contr(vector<vector<double>>&,int);
};

#endif //SPIKE_H
