//
// Created by Lenovo on 01.02.2022.
//
#ifndef JIPP2_STACJA_H
#define JIPP2_STACJA_H
#include <vector>
#include "Train.h"
#include "Pasazerski.h"
#include "Towarowy.h"
#include "Drezyna.h"
#include <string>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "funkcje.h"

using namespace std;

class Stacja{
protected:
    vector<Train*> pociagi;

public:
    Stacja();
    ~Stacja();

    void dodajPociag(string numer, string relacja, int peron, czas_aktualny przyjazd, czas_aktualny odjazd, string status);
    void dodajPociag(string numer, string relacja, int peron, czas_aktualny przejazd, string status);
    void dodajPociag(string numer, int peron, czas_aktualny przejazy, string status);

    void usunPociag(string numer);

    void edytujStatus(string numer, string nowyStatus);

    int znajdzPociag(string numer);
    void znajdzPoNumerze(string numer);
    void wyswietlPociagi();

    void pobierzPociagi();
};
#endif //JIPP2_STACJA_H
