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

    /**
     * Konstruktor tworzący obiekt klasy pociąg Pasażerski
     * @param numer numer pociągu
     * @param relacja trasa pociągu
     * @param peron numer peronu
     * @param status status
     * @param g_przy godzina wjazdu na stacje
     * @param m_przy minuta wjazdu na stacje
     * @param g_odj godzina odjazdu ze stacji
     * @param m_odj minuta odjazdu ze stacji
     */
    Pasazerski(const string& numer, const string& relacja, int peron, const string& status, short g_przy, short m_przy, short g_odj, short m_odj);

    /**
     * Funkcja foramatująca i drukująca czas wjazdu na stację
     */
    void przyjazdCzas();

    /**
     * Funkcja formatująca i drukująca czas odjazdu ze stacji
     */
    void odjazdCzas();

    /**
     * Funkcja drukująca informację o pociągu
     */
    void printTrain();
};
#endif //JIPP2_PASAZERSKI_H
