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

    //Dodawanie
    Vector v3 = v1 + v2;
    v3.print();

    //Odejmowanie
    Vector v4 = v1 - v2;
    v4.print();

    //Wektor przeciwny
    Vector v5 = -v1;
    v5.print();

    //Wektor * skalar
    Vector v6 = v1 * 5;
    v6.print();

    //Iloczyn skalarny
    double scalar = v1.operator*(v2);
    cout << "Iloczyn skalarny v1 i v2 = " << scalar << endl;

    //Porównanie wektorów
    cout << v1.operator==(v2) << endl;

    //Długość wektora
    cout << "Dlugosc v1: " << v1.length() << endl;

    //Skalar * wektor
    Vector v9 = 5 * v1;
    cout << v6.operator==(v9) << endl;

    //Operator <<
    cout << v1 << endl;

    return 0;
}