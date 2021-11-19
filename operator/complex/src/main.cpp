//
// Created by Lenovo on 15.11.2021.
//
#include "Complex.h"
#include <iostream>

using namespace std;

int main(){
    Complex z1(2, 2), z2(3, 3);
    z1.print();
    z2.print();

    Complex z3 = z1 + z2;
    z3.print();

    Complex z4 = z1 - z2;
    z4.print();

    Complex z5 = z1 * z2;
    z5.print();

    Complex z6 = ! z1;
    z6.print();

    Complex z7, z8 = z1 / z7;
    z8.print();

    cout << "Modul z1 = " << z1.operator*() << endl;
    cout << "z1 i z2: " << z1.operator==(z2) << endl;

    return 0;
}
