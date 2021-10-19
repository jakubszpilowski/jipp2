//
// Created by Lenovo on 19.10.2021.
//
#include "ptrs.h"

int main(){
    cout << "Zadanie 1" << endl;
    int a, b;
    cout << "Podaj dwie liczby " << endl;
    cin >> a >> b;
    int *w, *u;
    w = &a;
    u = &b;
    cout << "Srednia arytmetyczna " << a << " i " << b << " = " << average(w, u) << endl;

    cout << "\nZadanie 2" << endl;
    int t[10] = {12, -15, 2, 1, -55, 0, 124, 144, 155, -265};
    showArr(t, 10);

    cout << "\nZadanie 3" << endl;
    int x = 14, y = 19, z = 21;
    sort(&z, &x, &y);

    cout << "\nZadanie 4" << endl;
    w = declare(15, w);
    cout << "Zmienna po zmianie wartosci " << a << endl;

    return 0;
}

