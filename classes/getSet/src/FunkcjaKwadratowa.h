//
// Created by Lenovo on 03.11.2021.
//

#ifndef JIPP2_FUNKCJAKWADRATOWA_H
#define JIPP2_FUNKCJAKWADRATOWA_H
#include <iostream>

using namespace std;

class FunkcjaKwadratowa {
private:
    int a;
    int b;
    int c;

public:
    void setA(int a);
    void setB(int b);
    void setC(int c);
    int getA();
    int getB();
    int getC();
    void printFunc();
};


#endif //JIPP2_FUNKCJAKWADRATOWA_H
