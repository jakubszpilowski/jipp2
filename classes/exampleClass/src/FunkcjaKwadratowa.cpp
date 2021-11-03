//
// Created by Lenovo on 02.11.2021.
//

#include "FunkcjaKwadratowa.h"

void FunkcjaKwadratowa::showFunc() {
    cout << "f(x) = " << a << "x^2 + " << b << "x + " << c << endl;
}

void FunkcjaKwadratowa::defineFunc(int x, int y, int z) {
    a = x;
    b = y;
    c = z;
}