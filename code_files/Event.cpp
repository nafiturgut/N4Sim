//
// Created by Nafi Ahmet Turgut on 9.02.2018.
//
#include <cmath>
#include "Event.h"


Event::Event() {}

Event::Event(double  times, int id,int id2) {
    control=id2;
    ID=id;
    time=times;

}

int Event::get_id() const {
    return ID;
}

double Event:: get_time() const {
    return time;
}
int Event::get_cont( )const {
    return control;

}