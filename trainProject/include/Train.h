//
// Created by Lenovo on 28.12.2021.
//
#ifndef JIPP2_TRAIN_H
#define JIPP2_TRAIN_H
#include <iostream>
#include <string>
#include <cstring>
#include "funkcje.h"

using namespace std;

//template<typename S>
class Train{
protected:
    char typ;
    string nazwa;
    string relacja;
    int peron;
    string status;

public:
    Train();
    Train(char, string, string, int, string);
    virtual void printTrain() = 0;
    string getStatus() const;
};

class Pasazerski: public Train{
private:
    czas_aktualny przyjazd;
    czas_aktualny odjazd;

public:
    Pasazerski(short godz_przyjazu, short minuta_przyjazu, short godzina_odjazdu, short minuta_odjazu);
    void printTrain();
};

class Towarowy: public Train{
private:
    czas_aktualny przejazd;

public:
    Towarowy(short godz, short minuta);
    void printTrain();
};

class Drezyna: public Train{
private:
    czas_aktualny przejazd;

public:
    Drezyna(short godz, short minuta);
    void printTrain();
};

#endif //JIPP2_TRAIN_H
