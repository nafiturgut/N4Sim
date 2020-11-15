//
// Created by Nafi Ahmet Turgut on 30.12.2017.
//
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#ifndef SYNAPSE_H
#define SYNAPSE_H
using namespace std;

class SYNAPSE {

public:

	//vector <int>* &  getpointer();
    SYNAPSE();
    double interpolate(vector<vector<double>>,int);
	void plasticity(int, int);
	void update_vesc_generate(double);
	void update_vesc_release();
	double vesicle_probability = 1;
	double vesicle_onoff = 1;
	int temp = 100;
	double vesc_time = 0;
	int AMPAR;
    int GLUT ;
    int vesc=0;
    int in_ID;
    int out_ID;
    int SYNO=0;
	double th_ampa = 22 * 1e+16;
	double th_reac = 11 * 1e+4;
	double alpha_amp=0.1;
	vector<int> ampa_values;
	int ampa_size = 0;
	int glut_size = 0;
	vector<int> glut_values;
	double alpha_glut = 0.1;
	double beta_amp = 0.5;
	double beta_glut = 0.5;
	double max_amp = 220;
	double max_glut = 10000;
	double min_glut = 0;
	double min_amp = 0;
	
    float weight;
    SYNAPSE(int,int);

};


#endif //SYNAPSE_H
