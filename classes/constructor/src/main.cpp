//
// Created by Lenovo on 03.11.2021.
//
#include <iostream>
#include "Punkt.h"
#include "Figura.h"

using namespace std;

int main(){
    int x1, x2, y1, y2;
    cout << "\nZadanie 1\nPodaj wspolrzedne dwoch pkt\nPunkt 1:";
    cin >> x1 >> y1;
    cout << "Punkt 2:";
    cin >> x2 >> y2;
    Punkt p1(x1, y1), p2(x2, y2);

    cout << "Odleglosc punktu p2 od p1 wynosi " << p1.odleglosc(p2);

    cout << "\nZadanie 2\nPodaj liczbe wierzcholkow:" << endl;
    cin >> x1;
    int **t;
    t = new int*[x1];
    for(int i = 0; i < x1; ++i)
        t[i] = new int[2];

    Figura f(x1, t);
    f.showTab();

    for(int i = 0; i < x1; ++i)
        delete[] t[i];
    delete[] t;

    return 0;
}
