//
// Created by Nafi Ahmet Turgut on 14.02.2018.
//



#include "OutEvent.h"



OutEvent::OutEvent() {}

OutEvent::OutEvent(double times, int input, int output) {
    otime=times;
    inID=input;
    outID=output;

}
double OutEvent::get_otime() const {
    return otime;
};

int OutEvent::get_inID() const {
    return inID;
}
int OutEvent::get_outID()const {
    return outID;
}
