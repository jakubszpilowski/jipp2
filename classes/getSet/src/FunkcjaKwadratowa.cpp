//
// Created by Lenovo on 03.11.2021.
//

#include "FunkcjaKwadratowa.h"

void FunkcjaKwadratowa::setA(int a) {
    this->a = a;
}

void FunkcjaKwadratowa::setB(int b) {
    this->b = b;
}

void FunkcjaKwadratowa::setC(int c) {
    this->c = c;
}

int FunkcjaKwadratowa::getA() {
    return a;
}

int FunkcjaKwadratowa::getB() {
    return b;
}

int FunkcjaKwadratowa::getC() {
    return c;
}

void FunkcjaKwadratowa::printFunc() {
    cout << "f(x) = " << FunkcjaKwadratowa::getA() << "x^2 + " << FunkcjaKwadratowa::getB() << "x + " << FunkcjaKwadratowa::getC() << endl;
}