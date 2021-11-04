//
// Created by Lenovo on 04.11.2021.
//

#include "KlasaCl.h"

KlasaCl::KlasaCl(int n, int *t):n(n), t(t) {
    cout << "Konstruktor wywolany" << endl;
}

KlasaCl::~KlasaCl() {
    cout << "Wywolano destruktor\nZwalniam pamiec" << endl;

    delete[] t;

    cout << "Zwolniono pamiec" << endl;
}

void KlasaCl::pauseProgram() {
    system("PAUSE");
}

int KlasaCl::getSize() {
    return n * sizeof(t);
}