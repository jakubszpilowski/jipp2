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
    /**
     * Konstruktor klasy nadrzędnej reprezentującej pociąg
     * @param typ typ pojazdu - P, T lub D
     * @param numer numer pociągu
     * @param relacja trasa
     * @param peron numer peronu
     * @param status status
     */
    Train(char typ, const string& numer, const string& relacja, int peron, const string& status);

    /**
     * Konstruktor domyślny
     */
    Train();

    /**
     * Funkcja zmieniająca status pociągu
     * @param nowyStatus status jaki przyjmie pociąg po zmianie
     */
    void setStatus(string nowyStatus);

    /**
     * Funkcja do sprawdzenia statusu
     * @return status
     */
    string getStatus() const;

    /**
     * Funkcja zwracająca numer pociągu
     * @return numer pociągu
     */
    string pobierzNumer() const;

    /**
     * Metoda virtualna do wyświetlania informacji o pociągu
     */
    virtual void printTrain() = 0;
};

#endif //JIPP2_TRAIN_H
