//
// Created by Lenovo on 01.02.2022.
//

#ifndef JIPP2_PASAZERSKI_H
#define JIPP2_PASAZERSKI_H
#include "Train.h"

/**
 * Klasa dziedzicząca po klasie Train
 */
class Pasazerski : public Train{
protected:
    czas_aktualny przyjazd;
    czas_aktualny odjazd;

public:
    Pasazerski(const string&, const string&, int, const string&, short, short, short, short);
    void przyjazdCzas();
    void odjazdCzas();
    void printTrain();
};
#endif //JIPP2_PASAZERSKI_H
