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

using namespace std;

/**
 * Klasa reprezentująca stację kolejową
 */
class Stacja{
protected:
    vector<Train*> pociagi;

public:
    /**
     * Konstruktor domyślny
     */
    Stacja();

    /**
     * Desktruktor
     */
    ~Stacja();

    /**
     * Metoda dodająca pociąg pasażerski
     * @param numer numer pociągu
     * @param relacja trasa
     * @param peron numer peronu
     * @param g_przy godzina wjazdu na stację
     * @param m_przy minuta wjazdu na stację
     * @param g_odj godzina wyjazdu ze stacji
     * @param m_odj minuta wyjazdu ze stacji
     * @param status status pociągu
     */
    void dodajPociag(string numer, string relacja, int peron, short g_przy, short m_przy, short g_odj, short m_odj, string status);

    /**
     * Metoda dodająca pociąg towarowy
     * @param numer numer pociągu
     * @param relacja trasa
     * @param peron nr peronu
     * @param godzina godzina przejazdu przez stacje
     * @param minuta minuta przejazdu przez stacje
     * @param status status pociągu
     */
    void dodajPociag(string numer, string relacja, int peron, short godzina, short minuta, string status);

    /**
     * Metoda dodająca pojazd techniczny
     * @param numer numer pociągu
     * @param peron nr peronu
     * @param godzina godzina przejazdu przez stację
     * @param minuta minuta przejazdu przez stacje
     * @param status status pociągu
     */
    void dodajPociag(string numer, int peron, short godzina, short minuta, string status);

    /**
     * Metoda usuwająca pociąg z rozkładu
     * @param numer numer pociągu do usunięcia
     */
    void usunPociag(string numer);

    /**
     * Metoda zmieniająca status pociągu
     * @param numer numer pociągu
     * @param nowyStatus nowy status
     */
    void edytujStatus(string numer, string nowyStatus);

    /**
     * Metoda szukając pociągu o danym numerze
     * @param numer numer szukanego pociągu
     * @return pozycje pociągu w kontenerze lub -1 jeśli nie znajdzie
     */
    int znajdzPociag(string numer);

    /**
     * Metoda znajdująca w rozkładzie pociąg o danym numerze i wyświetlająca o nim informacje
     * @param numer numer szukanego pociągu
     */
    void znajdzPoNumerze(string numer);

    /**
     * Metoda wyświetlająca wszystkie pociągi na stacji
     */
    void wyswietlPociagi();

    /**
     * Metoda pobierająca rozkład z pliku .csv
     */
    void pobierzPociagi();
};
#endif //JIPP2_STACJA_H
