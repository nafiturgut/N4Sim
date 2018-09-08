#include "Spike.h"
#include <iostream>



Spike::Spike()
{
}

Spike::Spike(vector<vector<double>>& S_Vec, int size, int S_ID)
{
	// THIS PART IS FOR ASSIGNING SPIKES TO NEURON
	dim2 = size;
	Spike_ID = S_ID;
	Spike_vec = new vector<double>[dim2];
	for (int k = 0; k < dim2; k++)
		Spike_vec[k].resize(4);

	for (int i = 0; i < dim2; i++) {
		for (int j = 0; j < 4; j++)
		{
			Spike_vec[i][j] = S_Vec[i][j];
		}
	}
}

Spike::Spike(vector<vector<double>>& S_Vec,int size,int ID,int S_ID)
{
	// THIS PART IS FOR PRINTING ALL SPIKES OF NEURON
	
	dim = size;
	Neuron_ID = ID;
	Spike_vec = new vector<double>[size];
	for (int k = 0; k < size; k++)
		Spike_vec[k].resize(4);

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < 4; j++)
		{
			Spike_vec[i][j] = S_Vec[i][j];
		}
	}
}

void Spike::calc_contr(vector<vector<double>>& Contr_Array,int index)
{
	Spike_contr_size = index;
	Spike_Contribution = new vector<double>[index];
	for (int k = 0; k < index; k++)
		Spike_Contribution[k].resize(3);

	for (int i = 0; i < index; i++)
	{
		for (int j = 0; j < 3; j++)
		{
		Spike_Contribution[i][j] = Contr_Array[i][j];
		}

	}

}
