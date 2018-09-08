//
// Created by Nafi Ahmet Turgut on 22.02.2018.
//

#ifndef CORDINATE_H
#define CORDINATE_H


class CORDINATE {
public:
    double X_axis;
    double Y_axis;
    CORDINATE();
    CORDINATE(double,double);

    double distance_calc(CORDINATE);
private:

};


#endif //CORDINATE_H
