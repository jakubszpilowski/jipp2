//
// Created by Lenovo on 08.11.2021.
//
#include "Pojazd.h"


Pojazd::Pojazd(int nr_rejestracyjny, string nazwa, int ilosc_miejsc, string marka, string typ):nr_rejestracyjny(nr_rejestracyjny),
    nazwa(nazwa), ilosc_miejsc(ilosc_miejsc), marka(marka), typ(typ){
    miejsca = new string[ilosc_miejsc];
    for(int i = 0; i < ilosc_miejsc; ++i)
        miejsca[i] = "puste";
}

void Pojazd::printInfo() {
    cout << endl;
    cout << Pojazd::getName() << " " << Pojazd::getModel() << " " << Pojazd::getType() << endl;
    cout << "Nr rejestracyjny: " << Pojazd::getNumber() << endl;
    cout << "Ilosc miejsc: " << ilosc_miejsc << endl;
    cout << "Miejsce\tpasazer" << endl;
    for(int i = 0; i < ilosc_miejsc; ++i)
        cout << i << "\t" << miejsca[i] << endl;
}

void Pojazd::setInfo(int nr, string imie) {
    miejsca[nr] = imie;
}

Pojazd::Pojazd(Pojazd &pojazd) {
    nazwa = pojazd.nazwa;
    marka = pojazd.marka;
    typ = pojazd.typ;
    nr_rejestracyjny = pojazd.nr_rejestracyjny;
    ilosc_miejsc = pojazd.ilosc_miejsc;
    miejsca = new string[ilosc_miejsc];

    for(int i = 0; i < ilosc_miejsc; ++i)
        *(miejsca + i) = *(pojazd.miejsca + i);
}

string Pojazd::getName() {
    return nazwa;
}

int Pojazd::getNumber() {
    return nr_rejestracyjny;
}

string Pojazd::getModel() {
    return marka;
}

string Pojazd::getType() {
    return typ;
}

void Pojazd::setName(string name) {
    this->nazwa = name;
}

void Pojazd::setNumber(int number) {
    nr_rejestracyjny = number;
}


