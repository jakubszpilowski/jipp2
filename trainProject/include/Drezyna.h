//
// Created by Lenovo on 01.02.2022.
//

#ifndef JIPP2_DREZYNA_H
#define JIPP2_DREZYNA_H
#include "Train.h"

/**
 * Klasa dziedzicząca po klasie pociąg
 */
class Drezyna : public Train{
protected:
    czas_aktualny przejazd;

public:
    /**
     * Konstruktor tworzący obiekt Drezyna
     * @param numer numer pociągu
     * @param peron numer peronu
     * @param status status
     * @param godzina godzina przejazdu przez stację
     * @param minuta minuta przejazdu przez stację
     */
    Drezyna(string numer, int peron, const string& status, short godzina, short minuta);

    /**
     * Funkcja drukująca (zformatowany) czas przejazdu przez stacje
     */
    void printTime();

    /**
     * Funkcja drukująca informację na temat pociągu
     */
    void printTrain();
};

#endif //JIPP2_DREZYNA_H
