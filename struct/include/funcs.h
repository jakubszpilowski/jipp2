//
// Created by Lenovo on 25.10.2021.
//

#ifndef JIPP2_FUNCS_H
#define JIPP2_FUNCS_H
#include <iostream>

using namespace std;

struct samochod{
    string marka;
    string model;
    int rok;
    string kolor;
    int drzwi;
};


void ustawSamochod(samochod a[]);
void pokazTablice(samochod a[], int n, int opcja);
int rokProdukcji(samochod a[], int n);
int markaSamochodu(samochod a[], int n, string marka);

#endif //JIPP2_FUNCS_H
