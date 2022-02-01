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
    cout << "\n*Typ: Pociag towarowy" << endl;
    cout << "\tNumer: " << this->numer << endl;
    cout << "\tPeron: " << this->peron << endl;
    cout << "\tRelacja: " << this->relacja << endl;
    cout << "\tGodzina przejazdu: ";
    printTime();
    cout << "\tStatus: " << this->status << endl;
}
