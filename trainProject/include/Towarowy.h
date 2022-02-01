//
// Created by Lenovo on 01.02.2022.
//

#ifndef JIPP2_TOWAROWY_H
#define JIPP2_TOWAROWY_H
#include "Train.h"

/**
 * Klasa dziedzicząca po klasie Train
 */
class Towarowy : public Train{
protected:
    czas_aktualny przejazd;

public:
    /**
     * Konstruktor tworzącu obiekt klasy pociąg Towarowy
     * @param numer numer pociągu
     * @param relacja trasa pociągu
     * @param peron numer peronu
     * @param status status
     * @param godzina godzina przejazdu
     * @param minuta minuta przejazdu
     */
    Towarowy(const string& numer, const string& relacja, int peron, const string& status, short godzina, short minuta);

    /**
     * Funkcja formaztuje i drukuje czas przejazdu
     */
    void printTime();

    /**
     * Funkcja drukuje informacje o pociągu
     */
    void printTrain();
};

#endif //JIPP2_TOWAROWY_H
