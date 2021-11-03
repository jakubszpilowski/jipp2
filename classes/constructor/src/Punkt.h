//
// Created by Lenovo on 03.11.2021.
//

#ifndef JIPP2_PUNKT_H
#define JIPP2_PUNKT_H
#include <iostream>
#include <cmath>

using namespace std;

class Punkt {
public:
    int x;
    int y;
    Punkt(int x,int y);
    int getX();
    int getY();
    double odleglosc(Punkt p);
};


#endif //JIPP2_PUNKT_H
