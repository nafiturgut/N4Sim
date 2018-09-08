#include "NEURON.h"
#include "LAYER.h"
LAYER::LAYER(double x1,double y1,double x2,double y2,int N) {
	xIN = x1;
	yIN = y1;
	xOUT = x2;
	yOUT = y2;
	NumNer = N;
}
void LAYER::update_LAYER(int inID, int oID) {

	ID = inID;
	out_ID = oID;


}