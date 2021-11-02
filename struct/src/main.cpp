//
// Created by Lenovo on 25.10.2021.
//
#include <iostream>
#include "funcs.h"

using namespace std;

int main(){
    cout << "Zadanie 1 " << endl;
    samochod a[5];

    ustawSamochod(a);
    pokazTablice(a, 5, 0);

    cout << "\nZadanie 2" << endl;
    pokazTablice(a, 5, 1);

    cout << "\nZadanie 3" << endl;
    string marka = "Ford";
    cout << "Samochodow marki " << marka << " jest " << markaSamochodu(a, 5, marka) << endl;

    cout << "\nZadanie 4" << endl;
    int id = rokProdukcji(a, 5);
    cout << "Najnizszy rok produkcji ma " << a[id].marka << " " << a[id].rok << endl;

    return 0;
}
