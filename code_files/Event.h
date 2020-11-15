//
// Created by Nafi Ahmet Turgut on 9.02.2018.
//
#include <iostream>



#ifndef EVENT_H
#define EVENT_H


class Event {
public:
    // Default Constructor
    Event();
    // Overload Constructor
    Event(double ,int,int );
    // Event ID and time
    int ID;
    double time;
    int control;

    int get_id() const;
    double get_time() const;
    int get_cont() const;
};


#endif //UNTITLED_EVENT_H
