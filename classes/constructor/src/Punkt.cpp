//
// Created by Lenovo on 03.11.2021.
//

#include "Punkt.h"

Punkt::Punkt(int x, int y)
    :x(x), y(y){
    cout << "Wywolano konstruktor" << endl;
}

int Punkt::getX(){
    return x;
}

int Punkt::getY() {
    return y;
}

double Punkt::odleglosc(Punkt p) {
    return sqrt(pow(p.getX() - x, 2) + pow(p.getY() - y,2));
}