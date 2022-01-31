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

/**
 * Klasa nadrzędna reprezentująca pociąg
 */
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
    void setStatus(int i);
    string getStatus() const;
};

/**
 * Klasa dziedzicząca po klasie Train
 */
class Pasazerski: public Train{
private:
    czas_aktualny przyjazd;
    czas_aktualny odjazd;

public:
    Pasazerski(string, string, int, string, short, short, short, short);
    void printTime();
    void printTrain();
};


/**
 * Klasa dziedzicząca po klasie Train
 */
class Towarowy: public Train{
private:
    czas_aktualny przejazd;

public:
    Towarowy(string, int, string, short, short);
    void printTime();
    void printTrain();
};


/**
 * Klasa dziedzicząca po klasie pociąg
 */
class Drezyna: public Train{
private:
    czas_aktualny przejazd;

public:
    Drezyna(int, string, short, short);
    void printTime();
    void printTrain();
};

#endif //JIPP2_TRAIN_H
