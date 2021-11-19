//
// Created by Lenovo on 15.11.2021.
//
#include "Vector.h"
#include <iostream>

using namespace std;

int main(){
    Vector v1(2, 4), v2(4, 5);
    v1.print();
    v2.print();

    Vector v3 = v1 + v2;
    v3.print();

    Vector v4 = v1 - v2;
    v4.print();
    Vector v5 = -v1;
    v5.print();

    Vector v6 = v1 * 5;
    v6.print();

    double scalar = v1.operator*(v2);
    cout << "Iloczyn skalarny v1 i v2 = " << scalar << endl;

    cout << v1.operator==(v2) << endl;

    cout << "Dlugosc v1: " << v1.length() << endl;

    return 0;
}