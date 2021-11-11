//
// Created by Lenovo on 11.11.2021.
//

#ifndef JIPP2_SAMOCHOD_H
#define JIPP2_SAMOCHOD_H
#include <iostream>

using namespace std;

class Samochod{
private:
    int nr_rejestracyjny;
    string marka;
    string model;
    string typ;
    int ilosc_miejsc;
    string *miejsca;
    string zainstalowana_wersja_oprogramowania;
    static string najnowsza_wesja_oprogramownia;

public:
    Samochod(int nr, string marka, string model, string typ, int ilosc_miejsc, string wersja_oprogramowania);
    void printInfo() const;
    void setPasenger(int nr, string imie);
    Samochod(Samochod &s);
    string getName() const;
    int getNumber() const;
    string getModel() const;
    string getType() const;
    void setName(string n);
    void setNumber(int number);
    string getVersion() const;
    void updateVersion();
    static void opublikuj_nowe_oprogramowanie(string v);
};

#endif //JIPP2_SAMOCHOD_H
