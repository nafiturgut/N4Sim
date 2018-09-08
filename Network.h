//
// Created by Nafi Ahmet Turgut on 15.03.2018.
//
#include <iostream>
#include "AXON.h"
#include "Event.h"
#include <vector>
#include "OutEvent.h"
#include <cmath>
#include <time.h>
#include "CORDINATE.h"
#include <array>
#include <algorithm>
#include "NEURON.h"
#include <iomanip>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include "MyForm1.h"
#include "LAYER.h"

#include <string>
#ifndef UNTITLED_SOLVE_H
#define UNTITLED_SOLVE_H


class Network {
public:
    Network( );
	// Function to write an Event to EVENT LOG
    void update_event(vector<Event>&, Event); 
	// Function to write an Output Event to OUTPUT LOG
    void update_out(vector<OutEvent>&, Event,vector<int> ,vector<double>); 
	// Function to update MAIN LOG which is composed of EVENT and OUTPUT LOGs
    void update_main(vector<OutEvent>&,vector<OutEvent>&); 
	// Function to display EVENT LOG
	void display_eventlog(const vector<Event>&);    
	// Function to Randomize network for Custom Networks
	void Init_Custom(int,int ,vector<int>*,vector<double>*);
	// Function to Randomize network for Random Networks
    void Randomize(int,int,int,vector<vector<int>>& ,int,int, bool , bool, bool , double ,bool,double,double,int,vector<vector<double>>&, vector<LAYER>&);
	// Function to display OUT LOG
	void display_outlog(const vector<OutEvent>&);  
	// Function to Initialize Networks
	void Initialize_Network(int,int,int,int,int, bool , bool , bool , double,bool,double,double,int, vector<vector<double>> &);
    void Start_Network(int,vector<vector<double>>&,int );
    void generate_Neuron(vector<vector<int>>&,vector<vector<double>>&,vector<CORDINATE>&,int,vector<NEURON>&,int, vector<LAYER>&);
    vector<CORDINATE> CordVEC;
    vector<vector<int>> ConnMAP;
    vector<vector<double>> TsMAP;
    vector<OutEvent> MAIN_LOG={};
    vector<OutEvent> OUTPUT_LOG={};
	vector<OutEvent> HISTORY_LOG = {};
    vector<NEURON> NerVEC;
	vector<LAYER> LayVEC;
    vector<Event> EVENT_LOG={};
	int Row = 0;
	int NumberColl;
	vector<vector<double>> LUT1;

};


#endif //UNTITLED_SOLVE_H
