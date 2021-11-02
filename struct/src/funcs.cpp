//
// Created by Lenovo on 25.10.2021.
//

#include "funcs.h"

void ustawSamochod(samochod a[]){
    a[0].marka = "Audi";
    a[0].model = "A4";
    a[0].rok = 2006;
    a[0].kolor = "czarny";
    a[0].drzwi = 5;

    a[1].marka = "BMW";
    a[1].model = "X8";
    a[1].rok = 2011;
    a[1].kolor = "srebrny";
    a[1].drzwi = 3;

    a[2].marka = "Renault";
    a[2].model = "Clio";
    a[2].rok = 2004;
    a[2].kolor = "niebieski";
    a[2].drzwi = 3;

    a[3].marka = "Ford";
    a[3].model = "Focus";
    a[3].rok = 2007;
    a[3].kolor = "czerwony";
    a[3].drzwi = 5;

    a[4].marka = "Ford";
    a[4].model = "Fiesta";
    a[4].rok = 2001;
    a[4].kolor = "zielony";
    a[4].drzwi = 3;
}

void pokazTablice(samochod a[], int n, int opcja){
    if(opcja == 0)
        for(int i = 0; i < n; ++i)
            cout << a[i].marka << " " << a[i].model << " " << a[i].rok << " " << a[i].kolor << endl;
    else
        for(int i = 0; i < n; ++i)
            cout << a[i].marka << " " << a[i].model << " " << a[i].rok << " " << a[i].kolor << " "  << a[i].drzwi << "-drzwiowy" << endl;
}

int rokProdukcji(samochod a[], int n){
    int index = 0;
    for(int i = 1; i < n; ++i){
        if(a[index].rok > a[i].rok)
            index = i;
    }
    return index;
}

int markaSamochodu(samochod a[], int n, string marka){
    int s = 0;
    for(int i = 0; i < n; ++i)
        if(a[i].marka == marka)
            s++;
    return s;
}