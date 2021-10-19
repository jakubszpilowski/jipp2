//
// Created by Lenovo on 19.10.2021.
//
#include "funcs.h"
#include <iostream>

int main(){
    int a, b, h;
    double c, d;
    a = 5, b = 12, h = 6;
    c = 12, d = 13.8;

    cout << "Rectangle " << area(a, b) << endl;
    cout << "Triangle " << area(c, d) << endl;
    cout << "Trapezoid " << area(a, b, h) << endl;
    cout << "Square " << area(a) << endl;

    return 0;
}
