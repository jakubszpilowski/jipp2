//
// Created by Lenovo on 31.01.2022.
//
#include "Train.h"
#include <iostream>

using namespace std;


Train::Train(char typ, string nazwa, string relacja, int peron, string status): typ(typ), nazwa(nazwa),
    relacja(relacja), peron(peron), status(status){
}

Train::Train(){
}

void Train::setStatus(int i) {
    switch(i){
        case 1:
            status = "Jedzie";
            break;
        case 2:
            status = "Na stacji";
            break;
        case 3:
            status = "Odjechal";
            break;
        case 4:
            status = "Opoznienie";
            break;
        case 5:
            status = "Przejazd towarowy";
            break;
        default:
            status = "Nieznany";
            break;
    }
}

string Train::getStatus() const {
    return status;
}

Pasazerski::Pasazerski(string nazwa, string relacja, int peron, string status, short godz_przyjazu, short minuta_przyjazu,short godzina_odjazdu, short minuta_odjazu):
        Train('P', nazwa, relacja, peron, status){
    przyjazd.godzina = godz_przyjazu;
    przyjazd.minuta = minuta_przyjazu;
    odjazd.godzina = godzina_odjazdu;
    odjazd.minuta = minuta_odjazu;
}

void Pasazerski::printTime() {
    if(przyjazd.godzina < 10 && przyjazd.minuta)
        cout << "0" << przyjazd.godzina << ":0" << przyjazd.minuta << "\t";
    else if(przyjazd.godzina < 10 && przyjazd.minuta > 10)
        cout << "0" << przyjazd.godzina << ":" << przyjazd.minuta << "\t";
    else if(przyjazd.godzina > 10 && przyjazd.minuta < 10)
        cout << przyjazd.godzina << ":0" << przyjazd.minuta << "\t";
    else
        cout << przyjazd.godzina << ":" << przyjazd.minuta << "\t";

    if(odjazd.godzina < 10 && odjazd.minuta)
        cout << "0" << odjazd.godzina << ":0" << odjazd.minuta << "\t";
    else if(odjazd.godzina < 10 && odjazd.minuta > 10)
        cout << "0" << odjazd.godzina << ":" << odjazd.minuta << "\t";
    else if(odjazd.godzina > 10 && odjazd.minuta < 10)
        cout << odjazd.godzina << ":0" << odjazd.minuta << "\t";
    else
        cout << odjazd.godzina << ":" << odjazd.minuta << "\t";
}

void Pasazerski::printTrain() {
    cout << setw(10) << typ << "\t" << nazwa << "\t" << relacja << "\t";
    printTime();
    cout << peron << "\t";
    cout << status << endl;
}

Towarowy::Towarowy(string relacja, int peron, string status, short godz, short minuta):
    Train('T', "PKP Cargo", relacja, peron, status) {
    przejazd.godzina = godz;
    przejazd.minuta = minuta;
}

void Towarowy::printTime() {
    if(przejazd.godzina < 10 && przejazd.minuta)
        cout << "0" << przejazd.godzina << ":0" << przejazd.minuta << "\t";
    else if(przejazd.godzina < 10 && przejazd.minuta > 10)
        cout << "0" << przejazd.godzina << ":" << przejazd.minuta << "\t";
    else if(przejazd.godzina > 10 && przejazd.minuta < 10)
        cout << przejazd.godzina << ":0" << przejazd.minuta << "\t";
    else
        cout << przejazd.godzina << ":" << przejazd.minuta << "\t";
}

void Towarowy::printTrain() {
    cout << setw(10) << typ << "\t" << nazwa << "\t" << relacja << "\t";
    printTime();
    cout << "---\t" << peron << "\t" << status << endl;
}

Drezyna::Drezyna(int peron, string status, short godz, short minuta):
        Train('D', "Pojazd Techniczny", "Przejazd techniczny", peron, status){
    przejazd.godzina = godz;
    przejazd.minuta = minuta;
}

void Drezyna::printTime() {
    if(przejazd.godzina < 10 && przejazd.minuta)
        cout << "0" << przejazd.godzina << ":0" << przejazd.minuta << "\t";
    else if(przejazd.godzina < 10 && przejazd.minuta > 10)
        cout << "0" << przejazd.godzina << ":" << przejazd.minuta << "\t";
    else if(przejazd.godzina > 10 && przejazd.minuta < 10)
        cout << przejazd.godzina << ":0" << przejazd.minuta << "\t";
    else
        cout << przejazd.godzina << ":" << przejazd.minuta << "\t";
}

void Drezyna::printTrain() {
    cout << setw(10) << typ << "\t" << nazwa << "\t" << relacja << "\t";
    printTime();
    cout << "---\t" << peron << "\t" << status << endl;
}