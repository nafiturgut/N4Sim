//
// Created by Nafi Ahmet Turgut on 28.12.2017.
//
#include "AXON.h"
#include "SYNAPSE.h"
#include <vector>
#include "NEURON.h"
#include <cmath>
#include "CORDINATE.h"
#include "OutEvent.h"
#include "Spike.h"

NEURON::NEURON() {



}
 NEURON::NEURON(vector<int> Convec, vector<CORDINATE> Cordvec, vector<double> Tsvec,int idno) {
    int size=Convec.size();
    ID=idno;
     int N=0;
    for(int i=0;i<size;i++)
    {

            if (Convec[i] == 1) {
				// Defining AXON between specified neuron to its connections
                AXON newAX(ID, i + 1);
				// Defining ONE SYNAPSE between specified neuron to its connections
                SYNAPSE newSy(ID,i + 1);
                N=N+1;
                newSy.SYNO=N;
				// Saving the distance between this neuron with its connections
                double d = Cordvec[ID-1].distance_calc(Cordvec[i]);
                newAX.set_length(d);
				// Adding AXON to AXON vector of Neuron
                axon.push_back(newAX);
				// Adding SYNAPSE to SYNAPSE vector of Neuron

                synapse.push_back(newSy);
				// Calculating the transmission time of Axon and adding to time vector
                Tsvec[i]= newAX.calculate_delay(0);

            } else {
                Tsvec[i]=0;
            }

      //  cout<<"SS  "<<Tsvec[i];

    }
   // cout<<endl;
TimeVEC=Tsvec;
}

 void NEURON::update_colltime(OutEvent OE) {
	 collision_time = OE.get_otime();
	 ap_vec.push_back(collision_time);
 }

void NEURON::update_volt(OutEvent OE,double QW,int InSp_num) {


    if(OE.get_otime()-collision_time>0 ) {
		//default 0.00265
		//cout << "Int Step0 " << indx << endl;
        Volt = (Volt+70)*exp(-(OE.get_otime()-prevtime)/(decay_const))-70+QW;
        status=0;
		double diff = QW;
		VoltCont.push_back(vector<double>());
		VoltCont[indx].push_back(OE.get_inID());
		VoltCont[indx].push_back(InSp_num);
		VoltCont[indx].push_back(diff);
		VoltCont[indx].push_back(OE.get_otime());

		//cout << "Neuron Step0 "<<indx << endl;
		if (Volt >= -70 + neuron_specific_voltage)
		{
			vector<vector<double>> temp1;
			status = 1;
			int Control = 0;
			double tempdiff = Volt + 70;
			collision_time = OE.get_otime();
			Volt = -70;
			int Select = -1;
			int ass = ax;
			 
			double sum = 0;
			for (int i = 0; i < indx + 1; i++)
			{

				double tc = -VoltCont[i][3] + collision_time;
				double contr = VoltCont[i][2];
				
				 contr = exp(-tc /1) * contr;

				for (int j = 0; j < ax; j++)
				{
					if (VoltCont[i][0] == SpikeCont[j][0] && (Spike_num+1) == SpikeCont[j][3] && VoltCont[i][1] == SpikeCont[j][1])
					{
						Control = 1;
						Select = j;
					}
				}
				if (Control == 0) {
					SpikeCont.push_back(vector<double>());
					SpikeCont[ax].push_back(VoltCont[i][0]);
					SpikeCont[ax].push_back(VoltCont[i][1]);

					SpikeCont[ax].push_back(contr);
					SpikeCont[ax].push_back(Spike_num+1);

					bx = bx + 1;
					ax = ax + 1;

				}
				else if (Control == 1)
				{
					SpikeCont[Select][2] = SpikeCont[Select][2] + (contr);
					Control = 0;
					Select = -1;
				}

			}
			for (int b = ass; b < ax; b++)
			{
				sum += SpikeCont[b][2];
			}
			for (int b =ass; b < ax; b++)
			{
				SpikeCont[b][2] = SpikeCont[b][2] / sum;
				
				cout << SpikeCont[b][0] << " " << SpikeCont[b][1] << " " << SpikeCont[b][2] <<" "<< SpikeCont[b][3] << endl;
			}
			for (int b = ass; b < ax; b++)
			{
				temp1.push_back(vector<double>());
				for (int c = 0; c < 4; c++)
				{
					temp1[b - ass].push_back(SpikeCont[b][c]);
				}
			}

				VoltCont.clear();
				indx = 0;
				Spike_num += 1;
				Spike Spikex(temp1, (ax - ass),Spike_num );
				Spikex.Spike_time = collision_time;
				temp1.clear();
				Spike_vector.push_back(Spikex);
				
			
		}
    }
    else if(status==1){
        status=0;
        Volt=-70;
    }

	if(status==0&& Volt!=-70)
	indx = indx + 1;

	prevVolt = Volt;
    prevtime=OE.get_otime();
}