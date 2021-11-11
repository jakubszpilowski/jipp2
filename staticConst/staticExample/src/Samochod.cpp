//
// Created by Lenovo on 11.11.2021.
//
#include "Samochod.h"

Samochod::Samochod(int nr, string marka, string model, string typ, int ilosc_miejsc, string wersja_oprogramowania):
    nr_rejestracyjny(nr), marka(marka), model(model), typ(typ), ilosc_miejsc(ilosc_miejsc), zainstalowana_wersja_oprogramowania(wersja_oprogramowania){
    miejsca = new string[ilosc_miejsc];

    for(int i = 0; i < ilosc_miejsc; ++i)
        miejsca[i] = "puste";
}

Samochod::Samochod(Samochod &s) {
    marka = s.marka;
    model = s.model;
    typ = s.typ;
    nr_rejestracyjny = s.nr_rejestracyjny;
    ilosc_miejsc = s.ilosc_miejsc;

    miejsca = new string[ilosc_miejsc];
    for(int i = 0; i < ilosc_miejsc; ++i)
        miejsca[i] = s.miejsca[i];
}

void Samochod::printInfo() const {
    cout << endl;
    cout << Samochod::getName() << " " << Samochod::getModel() << " " << Samochod::getType() << endl;
    cout << "Nr rejestracyjny: " << Samochod::getNumber() << endl;
    cout << "Ilosc miejsc: " << ilosc_miejsc << endl;
    cout << "Zainstalowana wersja oprogramowania: " << Samochod::getVersion() << endl;
    cout << "Miejsce\tpasazer" << endl;
    for(int i = 0; i < ilosc_miejsc; ++i)
        cout << i << "\t" << miejsca[i] << endl;
}

string Samochod::getName() const {
    return marka;
}

string Samochod::getModel() const {
    return model;
}

string Samochod::getType() const {
    return typ;
}

int Samochod::getNumber() const {
    return nr_rejestracyjny;
}

string Samochod::getVersion() const {
    return zainstalowana_wersja_oprogramowania;
}

void Samochod::updateVersion() {
    zainstalowana_wersja_oprogramowania = najnowsza_wesja_oprogramownia;
}

void Samochod::setName(string n) {
    marka = n;
}

void Samochod::setNumber(int number) {
    nr_rejestracyjny = number;
}

void Samochod::setPasenger(int nr, string imie) {
    miejsca[nr] = imie;
}

void Samochod::opublikuj_nowe_oprogramowanie(string v) {
    najnowsza_wesja_oprogramownia = v;
}



