#include "MyForm1.h"
#include "NEURON.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(cli::array<String^>^ args)
{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Interface::MyForm1 form;
	Application::Run(%form);
	return 0;
}

void Interface::MyForm1::Start_Net(int Neuron, vector<vector<double>>& LUT1, int Row, Network N,double SimTime)
{
		// MAIN CODE
		while (!N.MAIN_LOG.empty() && N.MAIN_LOG[0].get_otime() < SimTime) {
			if (N.MAIN_LOG[0].get_outID() == 0)
			{
				this->EventLog->Items->Add("Neuron number " + Convert::ToString(N.MAIN_LOG[0].get_inID()) + " produced AP at time " + Convert::ToString(N.MAIN_LOG[0].get_otime()) + "s");
				int a = N.MAIN_LOG[0].get_inID();
				int no=-1;
				if (N.MAIN_LOG[0].Inp_check == 1)
				{
					N.NerVEC[a - 1].Spike_num += 1;
					vector<vector<double>> Emp;
					Emp = { {} };
					Spike SX(Emp,0, N.NerVEC[a - 1].Spike_num);
					N.NerVEC[a - 1].Spike_vector.push_back(SX);
					
				}
				no = N.NerVEC[a - 1].Spike_num;
				vector<int> temp = N.ConnMAP[a - 1];
				vector<int> temp2 = {};
				vector<double> tempts = {};
				for (int j = 0; j < Neuron; j++)
				{
					if (temp[j] == 1) {
						temp2.push_back(j + 1);
						tempts.push_back(N.TsMAP[a - 1][j]);
					}
				}

				Event tempEV(N.MAIN_LOG[0].get_otime(), N.MAIN_LOG[0].get_inID(), 0);
				update_O(N.OUTPUT_LOG, tempEV, temp2, tempts,no);
				update_M(N.MAIN_LOG, N.OUTPUT_LOG);
				N.NerVEC[a - 1].update_colltime(N.MAIN_LOG[0]);
				N.OUTPUT_LOG = {};

				N.MAIN_LOG.erase(N.MAIN_LOG.begin());


			}

			else {
				cout << "MMMMessage delivered from Neuron number " << N.MAIN_LOG[0].get_inID() << " to Neuron number " << N.MAIN_LOG[0].get_outID() << " received AP at time " << N.MAIN_LOG[0].get_otime() << endl;
				//this->EventLog->Items->Add("Message delivered from Neuron number " + Convert::ToString(N.MAIN_LOG[0].get_inID()) + " to Neuron number " + Convert::ToString(N.MAIN_LOG[0].get_outID()) + " received AP at time" + Convert::ToString(N.MAIN_LOG[0].get_otime()) + "ms");
				int a = N.MAIN_LOG[0].get_outID();
				int b = N.MAIN_LOG[0].get_inID();
				int k = N.NerVEC[b - 1].synapse.size();
				int c = 0;
				for (int i = 0; i < k; i++) {
					if (N.NerVEC[b - 1].synapse[i].out_ID == a) {
						c = i;
					}

				}
				int oo = N.NerVEC[b - 1].Spike_num;
				if (N.MAIN_LOG[0].Inp_ID > -1)
					oo = N.MAIN_LOG[0].Inp_ID;
				
				
				double Qcharge = N.NerVEC[b - 1].synapse[c].interpolate(LUT1, Row);
				double   Qww = Qcharge * N.NerVEC[b - 1].synapse[c].weight;
				cout << "The amount of voltage transferred is = " << Qww << endl;

				N.NerVEC[a - 1].update_volt(N.MAIN_LOG[0], Qww,oo);
				if (N.NerVEC[a - 1].status == 0) {
					cout << "The Neuron number " << N.MAIN_LOG[0].get_outID() << "not excited with this signal at time  " << N.MAIN_LOG[0].get_otime() << endl;
					//this->EventLog->Items->Add("Neuron number " + Convert::ToString(N.MAIN_LOG[0].get_outID()) + " not excited at time " + Convert::ToString(N.MAIN_LOG[0].get_otime()) + " ms");
					N.MAIN_LOG.erase(N.MAIN_LOG.begin());
				}
				else if (N.NerVEC[a - 1].status == 1) {
					cout << "The Neuron number " << N.MAIN_LOG[0].get_outID() << " produced AP at time " << N.MAIN_LOG[0].get_otime() << "ms" << endl;
					N.MAIN_LOG[0].outID = 0;
					N.MAIN_LOG[0].inID = a;

				}

			}
		}
		// END OF MAIN CODE

		Neuron_Spike = new vector<Spike>[Neuron];
		for (int sf = 0; sf < Neuron; sf++)
			Neuron_Spike[sf].resize(1);


		for (int i = 0; i < Neuron; i++)
		{
			
			Spike Sp(N.NerVEC[i].SpikeCont, N.NerVEC[i].ax,(i+1),0);
			Neuron_Spike[i][0] = Sp;

			
		}
		int o1 = N.NerVEC[5].Spike_num;
		int o2= N.NerVEC[6].Spike_num;
		int outsize = o1+o2;
		int insize = 4;
		vector<int>* Inp_Spike;
		vector<double>* Out_Spike;
		Inp_Spike = new vector<int>[insize];
		Out_Spike = new vector<double>[outsize];
	
		for (int sf = 0; sf < outsize; sf++) {
			Out_Spike[sf].resize(3);
		
		}
		for (int sf = 0; sf < o1; sf++) {
			Out_Spike[sf][0] = 6;
			Out_Spike[sf][1] = sf+1;

		}
		for (int sf = o1; sf < outsize; sf++) {
			Out_Spike[sf][0] = 7;
			Out_Spike[sf][1] = sf + 1-o1;

		}
		for (int sf = 0; sf < insize; sf++) {
			Inp_Spike[sf].resize(2);
		}
		Inp_Spike[0][0] = 1;
		Inp_Spike[0][1] = 1;
		Inp_Spike[2][0] = 2;
		Inp_Spike[2][1] = 1;
		Inp_Spike[1][0] = 1;
		Inp_Spike[1][1] = 2;
		Inp_Spike[3][0] = 2;
		Inp_Spike[3][1] = 2;

	
		vector<vector<double>> Result_vec;

		vector<vector<double>> TempContr;
		vector<vector<double>> TempContr2;
		int say = 0;
		// THIS PART IS FOR BACKTRACING FOR CAPACITY CALCULATION
		double result = 0;
		for (int i = 0; i < outsize; i++)
		{
			int n1 = Out_Spike[i][0];
			int s1 = Out_Spike[i][1];
		
			int indx = 0;
			int indx2 = 0;
			for (int k = 0; k < N.NerVEC[n1-1 ].Spike_vector[s1-1 ].dim2; k++)
			{

				TempContr.push_back(vector<double>());
				TempContr2.push_back(vector<double>());
				for (int l = 0; l < 4; l++)
				{
					TempContr[indx2].push_back(N.NerVEC[n1-1 ].Spike_vector[s1-1 ].Spike_vec[k][l]);
					TempContr2[indx].push_back(N.NerVEC[n1-1].Spike_vector[s1-1 ].Spike_vec[k][l]);
					
				}
				indx2++;
				indx++;
			}

			while (!TempContr2.empty())
			{
				int nernum = TempContr2[0][0];
				int spnum = TempContr2[0][1];
				double contr = TempContr2[0][2];
				
				int check = 0;
				for (int p = 0; p < insize; p++) {
					if (Inp_Spike[p][0] == nernum && Inp_Spike[p][1] == spnum)
					{
						Result_vec.push_back(vector<double>());
						Result_vec[say].push_back(nernum);
						Result_vec[say].push_back(spnum);
						Result_vec[say].push_back(contr);
						Result_vec[say].push_back(n1);
						Result_vec[say].push_back(s1);


						result = result + contr;
						check = 1;
						say++;

					}
				
				}
				if (!N.NerVEC[nernum - 1].Spike_vector.empty() && check == 0) {
					
					for (int u = 0; u < N.NerVEC[nernum - 1].Spike_vector[spnum - 1].dim2; u++)
					{

						TempContr2.push_back(vector<double>());
						TempContr.push_back(vector<double>());
						TempContr2[indx].push_back(N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][0]);
						TempContr2[indx].push_back(N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][1]);
						TempContr2[indx].push_back((N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][2])*contr);


						TempContr[indx2].push_back(N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][0]);
						TempContr[indx2].push_back(N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][1]);
						TempContr[indx2].push_back((N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][2])*contr);
						indx++;
						indx2++;

					}
				
					}

				TempContr2.erase(TempContr2.begin());
				indx = indx - 1;
			}
			TempContr2.clear();
			cout << "Final   " << result << endl;
		//	N.NerVEC[i].Spike_vector[j].calc_contr(TempContr, indx2);
			TempContr.clear();
			indx = 0;
			indx2 = 0;
			Out_Spike[i][2] = result;
			result = 0;


		}
		// END FOR BACK TRACING
		// PRINTING THE CONTRIBUTION ARRAY
			for (int j = 0; j < outsize; j++)
			{
				for (int k = 0; k < 3; k++) {
					cout <<Out_Spike[j][k] << " ";
				}
				cout << endl;
			}
			cout << "----------------------"<<endl;

		// END FOR PRINTING	
		
			vector<vector<double>> Res_vec2;
			int ind = 0;
			for (int j = 0; j < say; j++)
			{

				for (int k = 0; k < j; k++) {
					if (Result_vec[j][0] == Result_vec[k][0] && Result_vec[j][1] == Result_vec[k][1] && Result_vec[j][3] == Result_vec[k][3] && Result_vec[j][4] == Result_vec[k][4] && k!=j)
					{
						Res_vec2.push_back(vector<double>());
						Res_vec2[ind].push_back(Result_vec[j][0]);
						Res_vec2[ind].push_back(Result_vec[j][1]);
						Res_vec2[ind].push_back(Result_vec[j][2]+Result_vec[k][2]);
						Res_vec2[ind].push_back(Result_vec[j][3]);
						Res_vec2[ind].push_back(Result_vec[j][4]);
						Result_vec[k][2] += Result_vec[j][2];
						ind++;
						Result_vec.erase(Result_vec.begin() +j-1);
						say = say - 1;
						j = j - 1;
					}
				
				}
			}
			for (int j = 0; j < say; j++)
			{
				for (int k = 0; k < 5; k++) {
					cout << Result_vec[j][k] << " ";
				}
				cout << endl;
			}
			StreamWriter^ outfile = gcnew StreamWriter("Output_7NerNet_IndContr.txt");
			for (int j = 0; j < say; j++)
			{
				for (int k = 0; k < 5; k++) {
					String^ ss = Convert::ToString(Result_vec[j][k]);
					ss = ss->Replace(",", ".");
					outfile->Write(ss + "  " );
				}
				outfile->Write("\r\n");
			}		
			outfile->Close();
			StreamWriter^ outfile2 = gcnew StreamWriter("Output_7NerNet_OverallContr.txt");
			
			for (int j = 0; j <outsize; j++)
			{
				for (int k = 0; k < 3; k++) {
					String^ gg = Convert::ToString(Out_Spike[j][k]);
					gg = gg->Replace(",", ".");
					outfile2->Write(gg + "  ");
				}
				outfile2->Write("\r\n");
			}
			outfile2->Close();

}

void Interface::MyForm1::update_M(vector<OutEvent>& MAIN_LOG, vector<OutEvent>& outEv)
{
	unsigned  int size2 = outEv.size();
	for (unsigned int j = 0; j<size2; j++)
	{
		unsigned  int size = MAIN_LOG.size();
		for (unsigned int i = 0; i<size; i++) {
			if (outEv[j].get_otime() < MAIN_LOG[i].get_otime()) {
				MAIN_LOG.insert(MAIN_LOG.begin() + i, outEv[j]);
				break;
			}
		}
		unsigned int size3 = MAIN_LOG.size();
		if (size3 == size) {
			MAIN_LOG.push_back(outEv[j]);


		}


	}
}

void Interface::MyForm1::update_O(vector<OutEvent>& OUTPUT_LOG, Event newEv, vector<int> mat, vector<double> ts,int num_Inp)
{
	int siz = mat.size();

	for (unsigned i = 0; i<siz; i++) {
		OutEvent Out(ts[i] + newEv.get_time(), newEv.get_id(), mat[i]);
		if (num_Inp > 0)
			Out.Inp_ID = num_Inp;

		if (OUTPUT_LOG.empty()) {
			OUTPUT_LOG.push_back(Out);
		}

		else {
			unsigned int size2 = OUTPUT_LOG.size();
			for (unsigned int j = 0; j<size2; j++) {
				if (Out.get_otime()<OUTPUT_LOG[j].get_otime()) {
					OUTPUT_LOG.insert(OUTPUT_LOG.begin() + j, Out);
					break;
				}
			}
			unsigned int size3 = OUTPUT_LOG.size();
			if (size3 == size2)
				OUTPUT_LOG.push_back(Out);
		}
	}

}

void Interface::MyForm1::MarshalString(String ^ s, string & os)
{
	using namespace Runtime::InteropServices;
	const char* chars =	(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

void Interface::MyForm1::Connection_ADD(vector<int>* Conn,vector<int>* Lay,int TotalN,int LayerN)
{
	srand(time(NULL));
	double xd = NerCORD[TotalN-1][0] - NerCORD[0][0];
	double yd = NerCORD[TotalN - 1][1] - NerCORD[0][1];
	double fx = pow(xd, 2) + pow(yd, 2);
	double dist = sqrt(fx);
	dist = dist * 0.75;
	for (int i = 0; i < LayerN; i++)
	{
		for (int j = 0; j < LayerN; j++)
		{
			if (regular == 1 && j - i >= 2)
				Lay[i][j] = 0;
			else if (j-i>=0)
				Lay[i][j] = 1;
			else if (regular == 0 && j>=i )
				Lay[i][j] = 1;
			if (interfeed == 1 && i>j)
				Lay[i][j] = 1;
			else if(interfeed==0 && i>j)
				Lay[i][j] = 0;



		}
	}
	if (TypeN == 0)
	{
		for (int i = 0; i < TotalN; i++) {
			for (int j = 0; j < TotalN; j++)
			{
				if (i != j) {
					double p = rand() % 100;
					p = p / 100;
					if (p < Prob)
						Conn[i][j] = 1;
					else
						Conn[i][j] = 0;
				}
				else
					Conn[i][j] = 0;
			}
		}
	}
	else if (TypeN == 1) {
		for (int i = 0; i < TotalN; i++) {
			for (int j = 0; j < TotalN; j++)
			{
				if (i != j) {
					double p = rand() % 100;
					p = p / 100;
					double xdd = NerCORD[i][0] - NerCORD[j][0];
					double ydd = NerCORD[i][1] - NerCORD[j][1];
					double fxx = pow(xdd, 2) + pow(ydd, 2);
					double cdddd = sqrt(fxx);
					double px = 1 - ((cdddd) / dist);
					if (p < px)
						Conn[i][j] = 1;
					else
						Conn[i][j] = 0;
				}
				else
					Conn[i][j] = 0;
			}
		}
	}
	int bb = 0;
	if (regular == 1)
	{
		for (int k = 0; k < LayerN - 2; k++) {
			int t = LayTemp2[k][4];
			int t2 = LayTemp2[k + 1][4];

			for (int i = bb; i < bb + t; i++) {
				for (int j = bb + t2 + t; j < TotalN; j++)
				{

					Conn[i][j] = 0;

				}
			}
			bb = bb + t;
		}
	}
	bb = 0;
	if (interfeed == 0)
	{
		for (int k = 0; k < LayerN - 1; k++) {
			int t = LayTemp2[k][4];

			for (int j = bb; j < bb + t; j++) {

				for (int i = bb + t; i < TotalN; i++) {

					Conn[i][j] = 0;

				}
			}
			bb = bb + t;

		}
	}
	bb = 0;
	if (intrafeed == 0)
	{
		for (int k = 0; k < LayerN; k++) {
			int t = LayTemp2[k][4];

			for (int i = bb; i < bb + t; i++) {
				for (int j = bb; j < i; j++)
				{

					Conn[i][j] = 0;

				}
			}
			bb = bb + t;

		}
	}
}

void Interface::MyForm1::LayerNeuron_ADD(vector<double>* NerCord, vector<double>* Lay,int Nlay,int Cont,double Xlimit,double Ylimit )
{
	srand(time(NULL));
	int tt = 0;
	for (int hby = 0; hby < Nlay; hby++) {
		std::string str10;
		std::string str11;
		std::string str12;
		std::string str13;
		double x11;
		double y11;
		double x21;
		double y21;
		int NX;
		std::string str1;
		std::string str2;
		std::string str3;
		std::string str4;
		std::string str5;
		std::string str6;
		std::string str7;
		LayerList->SetSelected(hby, true);
		String^strr = LayerList->SelectedItems[0]->ToString();
		String^ strk = strr->Replace(",", ".");
		std::string str;
		MarshalString(strk, str);
		std::stringstream ss(str);
		ss >> str1 >> str2 >> x11 >> str3 >> y11 >> str12 >> str13 >> x21 >> str3 >> y21 >> str5 >> str6 >> str7 >> NX;
		Lay[hby][0] = x11;
		Lay[hby][1] = y11;
		Lay[hby][2] = x21;
		Lay[hby][3] = y21;
		Lay[hby][4] = NX;
		if (Cont == 1) {
		
			for (int vc = tt; vc < tt + NX; vc++)
			{
				double xtemp;
				double ytemp;
				double xdiff = x21 - x11;
				double ydiff = y21 - y11;
				if (xdiff > 1e-3) {
					int xr = xdiff * pow(10, 5);
					xtemp = rand() % xr;
					double xyy = x11 * pow(10, 5);
					xtemp += xyy;
					xtemp = xtemp / pow(10, 5);

					xtemp = xtemp * Xlimit;

				}
				else if (xdiff > 1e-6)
				{
					int xr = xdiff * pow(10, 7);
					xtemp = rand() % xr;
					double xyy = x11 * pow(10, 7);
					xtemp += xyy;
					xtemp = xtemp / pow(10, 7);
					xtemp = xtemp * Xlimit;

				}
				if (ydiff > 1e-3) {
					int yr = ydiff * pow(10, 5);
					ytemp = rand() % yr;
					double yyy = y11 * pow(10, 5);
					ytemp += yyy;
					ytemp = ytemp / pow(10, 5);
					ytemp = ytemp * Ylimit;
				}
				else if (ydiff > 1e-6) {
					int yr = ydiff * pow(10, 7);
					ytemp = rand() % yr;
					double yyy = y11 * pow(10, 7);
					ytemp += yyy;
					ytemp = ytemp / pow(10, 7);
					ytemp = ytemp * Ylimit;

				}
				NerCord[vc][0] = xtemp;
				NerCord[vc][1] = ytemp;
			}
			tt += NX;
		}
	}

}

void Interface::MyForm1::Connection_CHANGE(vector<int>* Conn, vector<int>* Lay, vector<double>* LayVec, int Total, int Layer,int Count,vector<int>* Change)
{
	srand(time(NULL));
	int fi = 0;
	int se = 0;
	int x = 0;
	int y = 0;
	for (int n = 0; n < Count; n++)
	{
		x = Change[n][0]-1;
		y = Change[n][1]-1;
		if (Change[n][2] == 0)
		{
			for (int k = 0; k < x; k++)
			{
				fi += LayVec[k][4];
			}
			for (int k = 0; k < y; k++)
			{
				se += LayVec[k][4];
			}
			for (int c = fi; c < fi + LayVec[x][4]; c++)
				for (int d = se; d < se + LayVec[y][4]; d++)
					Conn[c][d] = 0;
		}
		if (Change[n][2] == 1)
		{
			for (int k = 0; k < x; k++)
			{
				fi += LayVec[k][4];
			}
			for (int k = 0; k < y; k++)
			{
				se += LayVec[k][4];
			}
			if (TypeN == 0) {
				for (int c = fi; c < fi + LayVec[x][4]; c++) {
					for (int d = se; d < se + LayVec[y][4]; d++) {
						if (c != d) {


							double p = rand() % 100;
							p = p / 100;
							if (p < Prob)
								Conn[c][d] = 1;
							else
								Conn[c][d] = 0;
						}
						else
							Conn[c][d] = 0;
					}

				}
			
			}
			else if (TypeN == 1) {
				double xd = NerCORD[TotalN - 1][0] - NerCORD[0][0];
				double yd = NerCORD[TotalN - 1][1] - NerCORD[0][1];
				double fx = pow(xd, 2) + pow(yd, 2);
				double dist = sqrt(fx);
				dist = dist * 0.75;
				for (int c = fi; c < fi + LayVec[x][4]; c++) {
					for (int d = se; d < se + LayVec[y][4]; d++) {
						if (c != d) {
							double p = rand() % 100;
							p = p / 100;
							double xdd = NerCORD[c][0] - NerCORD[d][0];
							double ydd = NerCORD[c][1] - NerCORD[d][1];
							double fxx = pow(xdd, 2) + pow(ydd, 2);
							double cdddd = sqrt(fxx);
							double px = 1 - ((cdddd) / dist);
							if (p < px)
								Conn[c][d] = 1;
							else
								Conn[c][d] = 0;
						}
					}
				}
			}
		}
		fi = 0;
		se = 0;
	}
	
}

void Interface::MyForm1::Evaluate_Spike(int Neuron, Network N)
{
	vector<vector<double>> TempContr;
	vector<vector<double>> TempContr2;

	for (int i = 23; i < 24; i++)
	{
		for (int j = 0; j < N.NerVEC[i].Spike_vector.size(); j++)

		{
			vector<vector<double>> TempContr;
			int indx = 0;
			int indx2 = 0;
			for (int k = 0; k < N.NerVEC[i].Spike_vector[j].dim2; k++)
			{

				TempContr.push_back(vector<double>());
				TempContr2.push_back(vector<double>());
				for (int l = 0; l < 3; l++)
				{
					TempContr[indx2].push_back(N.NerVEC[i].Spike_vector[j].Spike_vec[k][l]);
					TempContr2[indx].push_back(N.NerVEC[i].Spike_vector[j].Spike_vec[k][l]);

				}
				indx2++;
				indx++;
			}
			while (!TempContr2.empty())
			{

				int nernum = TempContr2[0][0];
				int spnum = TempContr2[0][1];
				double contr = TempContr2[0][2];
				if (!N.NerVEC[nernum - 1].Spike_vector.empty()) {
					for (int u = 0; u < N.NerVEC[nernum - 1].Spike_vector[spnum - 1].dim2; u++)
					{
						int Co = 0;
						int Sel = -1;
						int Sel2 = -1;
						int Co2 = 0;
						for (int m = 0; m < indx; m++)
						{
							if (N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][0] == TempContr2[m][0] && N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][1] == TempContr2[m][1])
							{
								Co = 1;
								Sel = m;
							}
						}
						for (int m = 0; m < indx2; m++)
						{
							if (N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][0] == TempContr[m][0] && N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][1] == TempContr[m][1])
							{
								Co2 = 1;
								Sel2 = m;
							}
						}
						if (Co2 == 0 && Co == 0) {
							TempContr2.push_back(vector<double>());
							TempContr.push_back(vector<double>());
							TempContr2[indx].push_back(N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][0]);
							TempContr2[indx].push_back(N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][1]);
							TempContr2[indx].push_back((N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][2])*contr);



							TempContr[indx2].push_back(N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][0]);
							TempContr[indx2].push_back(N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][1]);
							TempContr[indx2].push_back((N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][2])*contr);

							indx++;
							indx2++;
						}
						else if (Co2 > 0 && Co == 0)
						{
							TempContr2.push_back(vector<double>());
							TempContr2[indx].push_back(N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][0]);
							TempContr2[indx].push_back(N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][1]);
							TempContr2[indx].push_back((N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][2])*contr);

							TempContr[Sel2][2] += (N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][2])*contr;
							indx++;
							Co2 = 0;
							Sel2 = -1;

						}
						else if (Co > 0 && Co2 == 0)
						{
							TempContr.push_back(vector<double>());
							TempContr[indx2].push_back(N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][0]);
							TempContr[indx2].push_back(N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][1]);
							TempContr[indx2].push_back((N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][2])*contr);
							TempContr2[Sel][2] += (N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][2])*contr;
							indx2++;
							Co = 0;
							Sel = -1;
						}
						else if (Co > 0 && Co2 > 0)
						{
							TempContr2[Sel][2] += (N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][2])*contr;
							TempContr[Sel2][2] += (N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][2])*contr;
							Co = 0;
							Sel = -1;
							Co2 = 0;
							Sel2 = -1;
						}
					}
				}

				TempContr2.erase(TempContr2.begin());
				indx = indx - 1;
			}
			TempContr2.clear();

			cout << "Neuron " << (i + 1) << " Spike  " << j << " Index " << indx2 << endl;
			N.NerVEC[i].Spike_vector[j].calc_contr(TempContr, indx2);
			cout << "Index changed " << N.NerVEC[i].Spike_vector[j].Spike_contr_size << endl;;

			TempContr.clear();
			indx = 0;
			indx2 = 0;

		}
	}
}

void Interface::MyForm1::Calculate_Neural_Activity(int Neuron, Network N, vector<int>* Inp_Spike,int insize, vector<double>* Out_Spike,int outsize)
{
	vector<vector<double>> TempContr;
	vector<vector<double>> TempContr2;
	double result=0;
	for (int i = 0; i < outsize; i++)
	{
		int n1 = Out_Spike[i][0];
		int s1= Out_Spike[i][1];
		
			vector<vector<double>> TempContr;
			int indx = 0;
			int indx2 = 0;
			for (int k = 0; k < N.NerVEC[n1-1].Spike_vector[s1-1].dim2; k++)
			{

				TempContr.push_back(vector<double>());
				TempContr2.push_back(vector<double>());
				for (int l = 0; l < 4; l++)
				{
					TempContr[indx2].push_back(N.NerVEC[n1-1].Spike_vector[s1-1].Spike_vec[k][l]);
					TempContr2[indx].push_back(N.NerVEC[n1-1].Spike_vector[s1-1].Spike_vec[k][l]);

				}
				indx2++;
				indx++;
			}
			while (!TempContr2.empty())
			{

				int nernum = TempContr2[0][0];
				int spnum = TempContr2[0][1];
				double contr = TempContr2[0][2];
				for (int p = 0; p < insize; p++) {
					if (Inp_Spike[p][0] == nernum && Inp_Spike[p][1] == spnum)
					{
						result += contr;
					}
					else if (!N.NerVEC[nernum - 1].Spike_vector.empty()) {
						for (int u = 0; u < N.NerVEC[nernum - 1].Spike_vector[spnum - 1].dim2; u++)
						{
							int Co = 0;
							int Sel = -1;
							int Sel2 = -1;
							int Co2 = 0;
							for (int m = 0; m < indx; m++)
							{
								if (N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][0] == TempContr2[m][0] && N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][1] == TempContr2[m][1])
								{
									Co = 1;
									Sel = m;
								}
							}
							for (int m = 0; m < indx2; m++)
							{
								if (N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][0] == TempContr[m][0] && N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][1] == TempContr[m][1])
								{
									Co2 = 1;
									Sel2 = m;
								}
							}
							if (Co2 == 0 && Co == 0) {
								TempContr2.push_back(vector<double>());
								TempContr.push_back(vector<double>());
								TempContr2[indx].push_back(N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][0]);
								TempContr2[indx].push_back(N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][1]);
								TempContr2[indx].push_back((N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][2])*contr);



								TempContr[indx2].push_back(N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][0]);
								TempContr[indx2].push_back(N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][1]);
								TempContr[indx2].push_back((N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][2])*contr);

								indx++;
								indx2++;
							}
							else if (Co2 > 0 && Co == 0)
							{
								TempContr2.push_back(vector<double>());
								TempContr2[indx].push_back(N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][0]);
								TempContr2[indx].push_back(N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][1]);
								TempContr2[indx].push_back((N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][2])*contr);

								TempContr[Sel2][2] += (N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][2])*contr;
								indx++;
								Co2 = 0;
								Sel2 = -1;

							}
							else if (Co > 0 && Co2 == 0)
							{
								TempContr.push_back(vector<double>());
								TempContr[indx2].push_back(N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][0]);
								TempContr[indx2].push_back(N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][1]);
								TempContr[indx2].push_back((N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][2])*contr);
								TempContr2[Sel][2] += (N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][2])*contr;
								indx2++;
								Co = 0;
								Sel = -1;
							}
							else if (Co > 0 && Co2 > 0)
							{
								TempContr2[Sel][2] += (N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][2])*contr;
								TempContr[Sel2][2] += (N.NerVEC[nernum - 1].Spike_vector[spnum - 1].Spike_vec[u][2])*contr;
								Co = 0;
								Sel = -1;
								Co2 = 0;
								Sel2 = -1;
							}
						}
					}
				}
				
				TempContr2.erase(TempContr2.begin());
				indx = indx - 1;
			}
			TempContr2.clear();

		//	cout << "Neuron " << (i + 1) << " Spike  " << j << " Index " << indx2 << endl;
		//	N.NerVEC[i].Spike_vector[j].calc_contr(TempContr, indx2);
		//	cout << "Index changed " << N.NerVEC[i].Spike_vector[j].Spike_contr_size << endl;;

			TempContr.clear();
			indx = 0;
			indx2 = 0;
			Out_Spike[i][2] = result;
			result = 0;
		

	}

	for (int j = 0; j < N.NerVEC[2].Spike_vector[0].Spike_contr_size; j++)
	{
		for (int k = 0; k < 4; k++)
			cout << N.NerVEC[2].Spike_vector[0].Spike_Contribution[j][k] << " ";

		cout << endl;
	}
}




