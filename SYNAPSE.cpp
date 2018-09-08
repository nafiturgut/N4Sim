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
    AMPA=rand()%11+40;
    NMDA=rand()%11+50;
    VESC=rand()%11+60;
    weight=20.11+rand()%5;
    weight=weight/10000;
}

double SYNAPSE::interpolate( vector<vector<double>> LUTT,int Row) {


    double x[3]={AMPA,NMDA,VESC};
    double max[3]={1000,1000,1000};
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

    fxyz = fxyz0 + (x[2]-min[2])*(fxyz1-fxyz0)/(max[2]-min[2]);

    return fxyz;
}