//
// Created by Nafi Ahmet Turgut on 15.03.2018.
//

#include "Network.h"
#include "AXON.h"
#include "Event.h"
#include <vector>
#include "OutEvent.h"
#include <cmath>
#include <time.h>
#include "CORDINATE.h"
#include <algorithm>
#include "NEURON.h"
#include <iomanip>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <string>
#include "MyForm1.h"
#include "LAYER.h"

using namespace std;

Network::Network() {

 

    int Col=0;
    std::string lineA;
    double x;
    srand (time(NULL));
    ifstream fileIN("C:\\Users\\Nafi Ahmet Turgut\\CLionProjects\\N4Sim\\LUT.txt");
    if(!fileIN.is_open()){
        cerr<<"ERRRRORRRRR"<<endl;
        exit(1);
    }



    while(fileIN.good()){
        while(getline(fileIN,lineA)){
            LUT1.push_back(vector<double>());
            istringstream streamA(lineA);
            Col=0;
            while(streamA>>x){
                LUT1[Row].push_back(x);
                Col++;
            }
            Row++;
        }
    }

    cout<<"Number of Rows: "<<Row<<endl<<"Number of columns: "<<Col<<endl;
    vector<vector<double>> LUTT=LUT1;
//    for (int i=0;i<Row;i++){
//        cout << i << "; ";
//        for(int j=0;j<Col;j++){
//
//            cout<<left<<setw(6)<<LUT1[i][j]<< " ";
//
//        }
//    cout<<endl;
//    }


    std::cout << "Hello, World!" << std::endl;


    Event InpEvent(0,1,0);              // First Input EVENT
    Event NewEvent(0.2,2,0);            // Second Input EVENT
    EVENT_LOG.push_back(InpEvent);
    EVENT_LOG.push_back(NewEvent);
    OutEvent OEv(0,1,0);
    OutEvent OEv2(0.2,2,0);
    vector<CORDINATE> CV;


    
    // MAIN_LOG.push_back(OEv2);

	HISTORY_LOG = MAIN_LOG;

	




    }









void Network::generate_Neuron(vector<vector<int>>& ConMAP,vector<vector<double>>& TMAP,vector<CORDINATE>& CorVEC,int N ,vector<NEURON>& NerVEC,int LayerN, vector<LAYER>& Layy){

    for(int i=0;i<N;i++)
    {

        NEURON newNeuron(ConMAP[i],CorVEC,TMAP[i],i+1);
        TMAP[i]=newNeuron.TimeVEC;


        NerVEC.push_back(newNeuron);

    }
	int c = 0;
	int nn;
	// HERE SHOULD BE FIXED---->> FOR CUST=0 CASE LAY SHOULD BE DEFINED
	for (int i = 0; i < LayerN; i++) {
		nn = Layy[i].NumNer;
		for (int j = 0; j < nn; j++) {
			Layy[i].LayNER.push_back(NerVEC[c]);
			cout << "Layer " << i << ": " << Layy[i].LayNER[j].ID;
			c++;

		}
		cout << endl;
	}


}
void Network::Init_Custom(int Neuron, int layer, vector<int>* Cmap, vector<double>* Corvec) {
	cout << "Here"<<endl;
	for (int i = 0; i < Neuron; i++)
	{
		double ax = Corvec[i][0];
		double ay = Corvec[i][1];
		CORDINATE corx(ax, ay);
		CordVEC.push_back(corx);
	}
	cout << "Here2" << endl;

	vector<vector<double>> TMAP(Neuron, vector<double>(Neuron, 0));
	TsMAP = TMAP;

	for (int i = 0; i < Neuron; i++){
		ConnMAP.push_back(vector<int>());
		for (int j = 0; j < Neuron; j++)
		{
			int a = Cmap[i][j];
			ConnMAP[i].push_back(a);
		}
	}

	for (int i = 0; i < Neuron; i++)
	{

		NEURON newNeuron(ConnMAP[i], CordVEC, TsMAP[i], i + 1);
		TsMAP[i] = newNeuron.TimeVEC;


		NerVEC.push_back(newNeuron);

	}
	cout << "Here3" << endl;

}

void Network::Randomize(int tNeuron,int iNeuron,int oNeuron,vector<vector<int>> & ConnMAP,int type,int layer,bool regular,bool interfeed,bool intrafeed,double prob,bool gnet,double Xlim,double Ylim,int Cust,vector<vector<double>>& LayMAP, vector<LAYER>& Layy)
{
	srand(time(NULL));
	if (Cust == 0) {
		vector<int> A = {};
		int v;
		if (layer > 2)
			v = floor((tNeuron - iNeuron - oNeuron) / (layer - 2));
		else
			v = 0;

		for (int k = 0; k < iNeuron; k++)
		{
			A.push_back(1);
		}


		for (int k = 0; k < tNeuron - iNeuron - oNeuron; k++)
		{
			for (int u = 1; u < layer - 2; u++) {
				if (k >= v * (u - 1) && k < v*u)
				{
					A.push_back(u + 1);
				}

			}
			if (k >= v * (layer - 3))
			{
				A.push_back(layer - 1);
			}

		}
		for (int k = 0; k < oNeuron; k++)
		{
			A.push_back(layer);
		}
		for (int k = 0; k < tNeuron; k++)
		{
			if (k < iNeuron) {
				double x = (rand() % 34) / layer;
				x += 33 / layer;
				x = (x / 100);
				x += (A[k] - 1) / layer;
				double xt = (A[k] - 1);
				xt = xt / layer;
				x = x + xt;
				x = x * Xlim;
				double y = rand() % 5;
				y += 18;
				y += (60 * (k + 1)) / (iNeuron + 1);
				y = y / 100;
				y = y * Ylim;
				CORDINATE cord(x, y);
				CordVEC.push_back(cord);
			}
			else if (k > tNeuron - oNeuron - 1) {
				double x = (rand() % 34) / layer;
				x += 33 / layer;
				x = (x / 100);
				x += (A[k] - 1) / layer;
				double xt = (A[k] - 1);
				xt = xt / layer;
				x = x + xt;
				x = x * Xlim;
				double y = rand() % 5;
				y += 18;
				y += (60 * (tNeuron - k)) / (oNeuron + 1);
				y = y / 100;
				y = y * Ylim;
				CORDINATE cord(x, y);
				CordVEC.push_back(cord);
			}
			else if (gnet == 1) {
				double x = (rand() % 33) / layer;
				x += 33 / layer;
				x = (x / 100);
				x += (A[k] - 1) / layer;
				double xt = (A[k] - 1);
				xt = xt / layer;
				x = x + xt;
				x = x * Xlim;
				double y = rand() % 5;
				y += 18;

				y += (60 * (k - iNeuron + 1)) / (tNeuron - oNeuron - iNeuron + 1);
				y = y / 100;
				y = y * Ylim;
				CORDINATE cord(x, y);
				CordVEC.push_back(cord);
			}
			else {
				double x = (rand() % 100) / layer;
				x = (x / 100);
				x += (A[k] - 1) / layer;
				double xt = (A[k] - 1);
				xt = xt / layer;
				x = x + xt;
				x = x * Xlim;
				double y = rand() % 80;
				y += 10;
				y = y / 100;
				y = y * Ylim;
				CORDINATE cord(x, y);
				CordVEC.push_back(cord);
			}

		}


		double dist = CordVEC[tNeuron - 1].distance_calc(CordVEC[0]);
		dist = dist * 0.75;
		if (type == 0)
		{
			for (int i = 0; i < tNeuron; i++) {
				for (int j = 0; j < tNeuron; j++)
				{
					if (i != j) {
						double p = rand() % 100;
						p = p / 100;
						if (p < prob)
							ConnMAP[i][j] = 1;
						else
							ConnMAP[i][j] = 0;
					}
					else
						ConnMAP[i][j] = 0;
				}
			}
		}
		else if (type == 1) {
			for (int i = 0; i < tNeuron; i++) {
				for (int j = 0; j < tNeuron; j++)
				{
					if (i != j) {
						double p = rand() % 100;
						p = p / 100;
						double px = 1 - ((CordVEC[i].distance_calc(CordVEC[j])) / dist);
						if (p < px)
							ConnMAP[i][j] = 1;
						else
							ConnMAP[i][j] = 0;
					}
					else
						ConnMAP[i][j] = 0;
				}
			}
		}
		if (regular == 1)
		{
			for (int i = 0; i < tNeuron; i++) {
				for (int j = 0; j < tNeuron; j++)
				{
					if (A[j] - A[i] > 1)
					{
						ConnMAP[i][j] = 0;
					}
				}
			}
		}
		if (interfeed == 0)
		{
			for (int i = 0; i < tNeuron; i++) {
				for (int j = 0; j < tNeuron; j++)
				{
					if (A[i] - A[j] > 0)
					{
						ConnMAP[i][j] = 0;
					}
				}
			}
		}
		if (intrafeed == 0)
		{
			for (int i = 0; i < tNeuron; i++) {
				for (int j = 0; j < tNeuron; j++)
				{
					if (A[j] - A[i] == 0 && i > j)
					{
						ConnMAP[i][j] = 0;
					}
				}
			}
		}
	}
	else {
		for (int i = 0; i < layer; i++) {

			double x1 = LayMAP[i][0];
			double y1 = LayMAP[i][1];
			double x2 = LayMAP[i][2];
			double y2 = LayMAP[i][3];
			int NX= LayMAP[i][4];
			LAYER lay(x1,y1,x2,y2,NX);
			Layy.push_back(lay);
			cout << "NAT "<<Layy[i].xIN << endl;
			for (int j = 0; j < NX; j++) {
			
				double xtemp;
				double ytemp;
				double xdiff = x2 - x1;
				double ydiff = y2 - y1;
				if (xdiff >1e-3) {
					int xr = xdiff * pow(10, 5);
					 xtemp = rand() % xr;
					double xyy=x1* pow(10, 5);
					xtemp += xyy;
					xtemp = xtemp / pow(10, 5);
					xtemp = xtemp * Xlim;

				}
				else if (xdiff > 1e-6)
				{
					int xr = xdiff * pow(10, 7);
					 xtemp = rand() % xr;
					double xyy = x1 * pow(10, 7);
					xtemp += xyy;
					xtemp = xtemp / pow(10, 7);
					xtemp = xtemp * Xlim;

				}
				if (ydiff > 1e-3) {
					int yr = ydiff * pow(10, 5);
					ytemp = rand() % yr;
					double yyy = y1 * pow(10, 5);
					ytemp += yyy;
					ytemp = ytemp / pow(10, 5);
					ytemp = ytemp * Ylim;
				}
				else if (ydiff > 1e-6) {
					int yr = ydiff * pow(10, 7);
					ytemp = rand() % yr;
					double yyy = y1 * pow(10, 7);
					ytemp += yyy;
					ytemp = ytemp / pow(10, 7);
					ytemp = ytemp * Ylim;

				}
			
				CORDINATE cord(xtemp, ytemp);
				CordVEC.push_back(cord);
			



			}

		}
		double dist = CordVEC[tNeuron - 1].distance_calc(CordVEC[0]);
		dist = dist * 0.75;
		if (type == 0)
		{
			for (int i = 0; i < tNeuron; i++) {
				for (int j = 0; j < tNeuron; j++)
				{
					if (i != j) {
						double p = rand() % 100;
						p = p / 100;
						if (p < prob)
							ConnMAP[i][j] = 1;
						else
							ConnMAP[i][j] = 0;
					}
					else
						ConnMAP[i][j] = 0;
				}
			}
		}
		else if (type == 1) {
			for (int i = 0; i < tNeuron; i++) {
				for (int j = 0; j < tNeuron; j++)
				{
					if (i != j) {
						double p = rand() % 100;
						p = p / 100;
						double px = 1 - ((CordVEC[i].distance_calc(CordVEC[j])) / dist);
						if (p < px)
							ConnMAP[i][j] = 1;
						else
							ConnMAP[i][j] = 0;
					}
					else
						ConnMAP[i][j] = 0;
				}
			}
		}
		int bb = 0;
		if (regular == 1)
		{
			for (int k = 0; k < layer - 2; k++) {
				int t = Layy[k].NumNer;
				int t2 = Layy[k + 1].NumNer;
				
				for (int i = bb; i < bb+t; i++) {
					for (int j = bb+t2+t; j < tNeuron; j++)
					{
						
							ConnMAP[i][j] = 0;
						
					}
				}
				bb = bb + t;
			}
		}
		 bb = 0;
		if (interfeed == 0)
		{
			for (int k = 0; k < layer - 1; k++) {
				int t = Layy[k].NumNer;
			
				for (int j = bb; j < bb+t; j++) {
				
					for (int i = bb+t; i < tNeuron; i++)	{
						
							ConnMAP[i][j] = 0;
						
					}
				}
				bb = bb + t;

			}
		}
		bb = 0;
		if (intrafeed == 0)
		{
			for (int k = 0; k < layer ; k++) {
				int t = Layy[k].NumNer;
				
				for (int i = bb; i < bb + t; i++) {
					for (int j =bb ; j < i; j++)
					{

						ConnMAP[i][j] = 0;

					}
				}
				bb = bb + t;

			}
		}

	}
//    for(int i=0;i<tNeuron;i++)
//    {
//        for(int j=0;j<tNeuron;j++)
//        {
//            if(ConnMAP[i][j]==0)
//                TsMAP[i][j]=0;
//            else
//                TsMAP[i][j]=TsMAP[i][j]=static_cast <double> (rand()) / static_cast <double> (RAND_MAX);
//        }
//    }

}
void Network::update_event(vector<Event>& EVENT_LOG,Event newEvent){
    unsigned int size=EVENT_LOG.size();


    for( unsigned int i=0;i<size;i++){

        if(newEvent.get_time()<EVENT_LOG[i].get_time()){
            EVENT_LOG.insert(EVENT_LOG.begin()+i,newEvent);
            break;
        }


    }
    unsigned  int size2=EVENT_LOG.size();
    if(size2==size)    EVENT_LOG.push_back(newEvent);

}
void Network::update_out(vector<OutEvent>& OUTPUT_LOG, Event newEv,vector<int> mat,vector<double> ts ){


    int siz=mat.size();

    for(unsigned i=0;i<siz;i++){
        OutEvent Out(ts[i]+newEv.get_time(),newEv.get_id(),mat[i]);
        if(OUTPUT_LOG.empty()){
            OUTPUT_LOG.push_back(Out);
        }

        else{
            unsigned int size2=OUTPUT_LOG.size();
            for(unsigned int j=0;j<size2;j++ ){
                if(Out.get_otime()<OUTPUT_LOG[j].get_otime()){
                    OUTPUT_LOG.insert(OUTPUT_LOG.begin()+j,Out);
                    break;
                }
            }
            unsigned int size3=OUTPUT_LOG.size();
            if(size3==size2)
                OUTPUT_LOG.push_back(Out);
        }
    }





}
void Network::update_main(vector<OutEvent>& MAIN_LOG,vector<OutEvent>& outEv ){
    unsigned  int size2=outEv.size();
    for(unsigned int j=0;j<size2;j++)
    {
        unsigned  int size=MAIN_LOG.size();
        for(unsigned int i=0;i<size;i++) {
            if (outEv[j].get_otime() < MAIN_LOG[i].get_otime()){
                MAIN_LOG.insert(MAIN_LOG.begin() + i, outEv[j]);
                break;
            }
        }
        unsigned int size3=MAIN_LOG.size();
        if(size3==size) {
            MAIN_LOG.push_back(outEv[j]);


        }


    }
}
void Network::display_eventlog(const vector<Event>& EVENT_LOG){
    unsigned int size=EVENT_LOG.size();

    for(unsigned int i=0;i<size;i++){


        cout<<"Neuron number "<< EVENT_LOG[i].get_id()<<" has produced AP at time "<< EVENT_LOG[i].get_time()<< " ms"<<endl;
    }

}
void Network::Initialize_Network(int Neuron,int iNeuron,int oNeuron,int type,int layer, bool regular, bool interfeed, bool intrafeed, double prob,bool gnet,double Xlim,double Ylim,int Cust,vector<vector<double>> & LayMAP) {



    vector<vector<int>> CnMAP(Neuron,vector<int>(Neuron,0));
    ConnMAP=CnMAP;

    vector<vector<double>> TMAP(Neuron,vector<double>(Neuron,0));
    TsMAP=TMAP;
    Randomize(Neuron,iNeuron,oNeuron,ConnMAP,type,layer,  regular, interfeed, intrafeed,  prob,gnet,Xlim,Ylim,Cust,LayMAP,LayVEC);
    generate_Neuron(ConnMAP,TsMAP,CordVEC,Neuron,NerVEC,layer,LayVEC);


}
void Network::display_outlog(const vector<OutEvent>& OUT_LOG){
    unsigned int size=OUT_LOG.size();

    for(unsigned int i=0;i<size;i++){


        cout<<"Message delivered from Neuron number "<< OUT_LOG[i].get_inID()<<" to Neuron number "<< OUT_LOG[i].get_outID()<<" at time "<<OUT_LOG[i].get_otime() <<" ms"<<endl;
    }

}


void Network::Start_Network(int Neuron, vector<vector<double>>& LUT1, int Row) {

	

		if (MAIN_LOG[0].get_outID() == 0)
		{
			cout << "MMMNeuron number " << MAIN_LOG[0].get_inID() << " produced AP at time " << MAIN_LOG[0].get_otime() << "ms" << endl;
			int a = MAIN_LOG[0].get_inID();
			vector<int> temp = ConnMAP[a - 1];
			vector<int> temp2 = {};
			vector<double> tempts = {};
			for (int j = 0; j<Neuron; j++)
			{
				if (temp[j] == 1) {
					temp2.push_back(j + 1);
					tempts.push_back(TsMAP[a - 1][j]);
				}
			}

			Event tempEV(MAIN_LOG[0].get_otime(), MAIN_LOG[0].get_inID(), 0);
			update_out(OUTPUT_LOG, tempEV, temp2, tempts);
			update_main(MAIN_LOG, OUTPUT_LOG);

			NerVEC[a - 1].update_colltime(MAIN_LOG[0]);

			OUTPUT_LOG = {};

			MAIN_LOG.erase(MAIN_LOG.begin());


		}
		else {
			cout << "MMMMessage delivered from Neuron number " << MAIN_LOG[0].get_inID() << " to Neuron number " << MAIN_LOG[0].get_outID() << " received AP at time " << MAIN_LOG[0].get_otime() << endl;
			int a = MAIN_LOG[0].get_outID();
			int b = MAIN_LOG[0].get_inID();
			int k = NerVEC[b - 1].synapse.size();
			int c = 0;
			for (int i = 0; i<k; i++) {
				if (NerVEC[b - 1].synapse[i].out_ID == a) {
					c = i;
				}

			}
			int oo = NerVEC[b - 1].Spike_num;
			double Qcharge = NerVEC[b - 1].synapse[c].interpolate(LUT1, Row);
			double   Qww = Qcharge * NerVEC[b - 1].synapse[c].weight;
			cout << "The amount of voltage transferred is = " << Qww << endl;
			NerVEC[a - 1].update_volt(MAIN_LOG[0], Qww,oo);
			if (NerVEC[a - 1].status == 0) {
				cout << "The Neuron number " << MAIN_LOG[0].get_outID() << "not excited with this signal at time  " << MAIN_LOG[0].get_otime() << endl;
				MAIN_LOG.erase(MAIN_LOG.begin());
			}
			else if (NerVEC[a - 1].status == 1) {
				cout << "The Neuron number " << MAIN_LOG[0].get_outID() << " produced AP at time " << MAIN_LOG[0].get_otime() << "ms" << endl;
				MAIN_LOG[0].outID = 0;
				MAIN_LOG[0].inID = a;

			}

		}



	
}