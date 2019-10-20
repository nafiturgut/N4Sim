//
// Created by Nafi Ahmet Turgut on 30.12.2017.
//
#include <stdlib.h>
#include "SYNAPSE.h"
#include <time.h>
#include <vector>





SYNAPSE::SYNAPSE(){

}
SYNAPSE::SYNAPSE(int in, int out) {
    in_ID=in;
    out_ID=out;
	// Random distributed AMPA receptor number ---> Mean=150, uniform
	AMPAR = rand() % 21 + 140;
	ampa_values.push_back(AMPAR);
	// Random distributed GLUT receptor number ---> Mean=5000, uniform
	GLUT = rand() % 401 + 4800;
	glut_values.push_back(GLUT),
	// Vesicle Number

	// No effect vesc if vesc too large
	vesc = 10000000;
    //vesc= rand() %1 + vesc;
	// Reactance random distributed
    weight=th_reac *1e+10;
	
	
   
}
void SYNAPSE::plasticity(int a, int g) {
	ampa_values.push_back(a);
	glut_values.push_back(g);
	ampa_size++;
	glut_size++;

}
void SYNAPSE::update_vesc_release()
{
	double p = rand() % 100;
	p = p / 100;
	// no effect if p=1
	 p = 1;
	
	double base_release_parameter = 0.5;
	double ratio = pow(base_release_parameter, vesc);
	if (ratio < p)
	{
		vesicle_onoff = 1;
	}
	else
		vesicle_onoff = 0;
	cout << "Vesicle failure " << ratio << " randomratio " << ratio << " Fail " << vesicle_onoff << endl;

}
void SYNAPSE::update_vesc_generate(double time)
{

	double time_const = 0.004; // s  generation time threshold
	while (time > vesc_time) {
		vesc = vesc + 1;
		cout << "Update Vesicle :" << 1 << endl;
		double r = rand() % 100;
		r = r / 100;
		vesc_time = vesc_time + (time_const * log(1 /(1 - r)) );

	}
	
}

double SYNAPSE::interpolate( vector<vector<double>> LUTT,int Row) {


    double x[3]={AMPAR,GLUT,temp};
    double max[3]={400,10000,1000};
    double min[3]={0};

    for(int j=0;j<3;j++) {
    for(int i=0;i<Row;i++)
    {
            if (x[j] >= LUTT[i][j] && LUTT[i][j] > min[j]) {
                min[j] = LUTT[i][j];
            }
            else if (x[j] <= LUTT[i][j] && LUTT[i][j] < max[j]) {
                max[j]=LUTT[i][j];
            }
        }
    }
        int i0=-1,i1=-2,j1=-3,j0=-3,z0=-3,z1=-4,t0=-5,t1=-3;
    for(int i=0;i<Row;i++)
    {
        if(LUTT[i][0]==min[0]&&LUTT[i][1]==min[1]&& LUTT[i][2]==min[2])
        {
            i0=i;
        }
        if(LUTT[i][0]==max[0]&&LUTT[i][1]==min[1]&& LUTT[i][2]==min[2])
        {
            i1=i;
        }
        if(LUTT[i][0]==min[0]&&LUTT[i][1]==max[1]&& LUTT[i][2]==min[2])
        {
            j0=i;
        }
        if(LUTT[i][0]==max[0]&&LUTT[i][1]==max[1]&& LUTT[i][2]==min[2])
        {
            j1=i;
        }
        if(LUTT[i][0]==min[0]&&LUTT[i][1]==min[1]&& LUTT[i][2]==max[2])
        {
            z0=i;
        }
        if(LUTT[i][0]==max[0]&&LUTT[i][1]==min[1]&& LUTT[i][2]==max[2])
        {
            z1=i;
        }
        if(LUTT[i][0]==min[0]&&LUTT[i][1]==max[1]&& LUTT[i][2]==max[2])
        {
            t0=i;
        }
        if(LUTT[i][0]==max[0]&&LUTT[i][1]==max[1]&& LUTT[i][2]==max[2])
        {
            t1=i;
        }
    }
    for (int k=0;k<3;k++)
    {
        if(max[k]-min[k]==0)
            max[k]=max[k]+1;
    }
    double fxy0z0,fxy1z0,fxyz0,fxyz,fxyz1,fxy0z1,fxy1z1;

    fxy0z0=LUTT[i0][3]+(x[0]-min[0])*(LUTT[i1][3]-LUTT[i0][3])/(max[0]-min[0]);

    fxy1z0=LUTT[j0][3]+(x[0]-min[0])*(LUTT[j1][3]-LUTT[j0][3])/(max[0]-min[0]);

    fxyz0=fxy0z0 + (x[1]-min[1])*(fxy1z0-fxy0z0)/(max[1]-min[1]);

    fxy0z1=LUTT[z0][3]+(x[0]-min[0])*(LUTT[z1][3]-LUTT[z0][3])/(max[0]-min[0]);

    fxy1z1=LUTT[t0][3]+(x[0]-min[0])*(LUTT[t1][3]-LUTT[t0][3])/(max[0]-min[0]);

    fxyz1= fxy0z1 + (x[1]-min[1])*(fxy1z1-fxy0z1)/(max[1]-min[1]);

	fxyz = fxyz0; // + (x[2]-min[2])*(fxyz1-fxyz0)/(max[2]-min[2]); if z value is not zero

    return fxyz;
}