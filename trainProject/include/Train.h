//
// Created by Lenovo on 28.12.2021.
//
#ifndef JIPP2_TRAIN_H
#define JIPP2_TRAIN_H
#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

using namespace std;

/**
 * Strukura reprezentująca czas
 */
template <typename T>
struct czas{
    T godzina;
    T minuta;
};

typedef czas<short> czas_aktualny;


/**
 * Klasa nadrzędna reprezentująca pociąg
 */
class Train{
protected:
    char typ;
    string numer;
    string relacja;
    int peron;
    string status;

public:
    Train(char, const string&, const string&, int, const string&);
    Train();
    void setStatus(string nowyStatus);
    string getStatus() const;
    string pobierzNumer() const;
    virtual void printTrain() = 0;
};

#endif //JIPP2_TRAIN_H
