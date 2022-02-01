//
// Created by Lenovo on 01.02.2022.
//
#include "Pasazerski.h"

Pasazerski::Pasazerski(const string& numer, const string& relacja, int peron, const string& status, short godz_przyjazu, short minuta_przyjazu,short godzina_odjazdu, short minuta_odjazu):
        Train('P', numer, relacja, peron, status){
    przyjazd.godzina = godz_przyjazu;
    przyjazd.minuta = minuta_przyjazu;
    odjazd.godzina = godzina_odjazdu;
    odjazd.minuta = minuta_odjazu;
}

void Pasazerski::przyjazdCzas() {
    if(przyjazd.godzina < 10 && przyjazd.minuta)
        cout << "0" << przyjazd.godzina << ":0" << przyjazd.minuta << endl;
    else if(przyjazd.godzina < 10 && przyjazd.minuta > 10)
        cout << "0" << przyjazd.godzina << ":" << przyjazd.minuta << endl;
    else if(przyjazd.godzina > 10 && przyjazd.minuta < 10)
        cout << przyjazd.godzina << ":0" << przyjazd.minuta << endl;
    else
        cout << przyjazd.godzina << ":" << przyjazd.minuta << endl;
}

void Pasazerski::odjazdCzas() {
    if(odjazd.godzina < 10 && odjazd.minuta)
        cout << "0" << odjazd.godzina << ":0" << odjazd.minuta << endl;
    else if(odjazd.godzina < 10 && odjazd.minuta > 10)
        cout << "0" << odjazd.godzina << ":" << odjazd.minuta << endl;
    else if(odjazd.godzina > 10 && odjazd.minuta < 10)
        cout << odjazd.godzina << ":0" << odjazd.minuta << endl;
    else
        cout << odjazd.godzina << ":" << odjazd.minuta << endl;
}

void Pasazerski::printTrain() {
    cout << "\n*Typ: Pociag pasazerski" << endl;
    cout << "\tNumer: " << this->numer << endl;
    cout << "\tPeron: " << this->peron << endl;
    cout << "\tRelacja: " << this->relacja << endl;
    cout << "\tGodzina przyjazdu: ";
    przyjazdCzas();
    cout << "\tGodzina odjazdu: ";
    odjazdCzas();
    cout << "\tStatus: " << this->status << endl;
}