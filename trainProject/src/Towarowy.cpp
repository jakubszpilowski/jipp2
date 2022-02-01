//
// Created by Lenovo on 01.02.2022.
//
#include "Towarowy.h"

Towarowy::Towarowy(const string& numer, const string& relacja, int peron, const string& status, short godz, short minuta):
        Train('T', numer, relacja, peron, status) {
    przejazd.godzina = godz;
    przejazd.minuta = minuta;
}

void Towarowy::printTime() {
    if(przejazd.godzina < 10 && przejazd.minuta)
        cout << "0" << przejazd.godzina << ":0" << przejazd.minuta << endl;
    else if(przejazd.godzina < 10 && przejazd.minuta > 10)
        cout << "0" << przejazd.godzina << ":" << przejazd.minuta << endl;
    else if(przejazd.godzina > 10 && przejazd.minuta < 10)
        cout << przejazd.godzina << ":0" << przejazd.minuta << endl;
    else
        cout << przejazd.godzina << ":" << przejazd.minuta << endl;
}

void Towarowy::printTrain() {
    cout << "Typ: Pociag towarowy" << endl;
    cout << "Numer: " << this->numer << endl;
    cout << "Peron: " << this->peron << endl;
    cout << "Relacja: " << this->relacja << endl;
    printTime();
    cout << "Status: " << this->status << endl;
}
