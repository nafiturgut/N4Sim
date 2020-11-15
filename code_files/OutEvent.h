//
// Created by Nafi Ahmet Turgut on 14.02.2018.
//

#ifndef OUTEVENT_H
#define OUTEVENT_H


class OutEvent {
public:
    // Default Constructor

    OutEvent();
    // Overload Constructor
    OutEvent(double, int,int );
    // Event ID and time

    double otime;
    int inID;
    int outID;
	int Inp_check=0;
	int Inp_ID=-1;
    double get_otime() const ;
    int get_inID() const ;
    int get_outID() const ;

};


#endif //OUTEVENT_H
