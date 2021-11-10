//
// Created by Lenovo on 08.11.2021.
//

#ifndef JIPP2_POJAZD_H
#define JIPP2_POJAZD_H

#include <iostream>
using namespace std;

class Pojazd{
private:
    int nr_rejestracyjny;
    string nazwa;
    int ilosc_miejsc;
    string *miejsca;
    string marka;
    string typ;

public:
    Pojazd(int nr_rejestracyjny, string nazwa, int ilosc_miejsc, string marka, string typ);
    void printInfo();
    void setInfo(int nr, string imie);
    Pojazd(Pojazd &pojazd);
    string getName();
    int getNumber();
    string getModel();
    string getType();
    void setName(string nazwa);
    void setNumber(int number);
};

#endif //JIPP2_POJAZD_H
