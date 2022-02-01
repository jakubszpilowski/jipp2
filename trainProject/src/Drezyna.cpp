//
// Created by Lenovo on 01.02.2022.
//
#include "Drezyna.h"

Drezyna::Drezyna(string numer, int peron, const string& status, short godz, short minuta):
        Train('D', numer, "Przejazd techniczny", peron, status){
    przejazd.godzina = godz;
    przejazd.minuta = minuta;
}

void Drezyna::printTime() {
    if(przejazd.godzina < 10 && przejazd.minuta < 10)
        cout << "0" << przejazd.godzina << ":0" << przejazd.minuta << endl;
    else if(przejazd.godzina < 10 && przejazd.minuta > 10)
        cout << "0" << przejazd.godzina << ":" << przejazd.minuta << endl;
    else if(przejazd.godzina > 10 && przejazd.minuta < 10)
        cout << przejazd.godzina << ":0" << przejazd.minuta << endl;
    else
        cout << przejazd.godzina << ":" << przejazd.minuta << endl;
}

void Drezyna::printTrain() {
    cout << "\n*Typ: Pojazd techniczny" << endl;
    cout << "\tNumer: " << this->numer << endl;
    cout << "\tPeron: " << this->peron << endl;
    cout << "\tPrzejazd techniczny" << endl;
    cout << "\tGodzina przejazdu: ";
    printTime();
    cout << "\tStatus: " << this->status << endl;
}
