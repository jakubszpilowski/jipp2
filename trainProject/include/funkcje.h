//
// Created by Lenovo on 31.01.2022.
//
#ifndef JIPP2_FUNKCJE_H
#define JIPP2_FUNKCJE_H
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;

/**
 * Strukura reprezentująca czas
 */
struct czas{
    short godzina;
    short minuta;
};

/**
 * Funkcja wyswietlajaca menu
 */
void menu();

/**
 * Funkcja pobierajaca na poczatku z pliku rozklad
 * @param fname sciezka do pliku
 */
void pobierzRozklad(string fname);

/**
 * Funkcja wyswietlajaca aktualny rozklad
 */
void rozklad(struct czas aktualny);

/**
 * Funkcja zmieniajaca aktualny czas na stacji, dla symulowania ruchu pociągów
 */
void aktualizujCzas(struct czas* akt);

/**
 * Funkcja tworzaca pociąg
 */
void dodajPociag();

#endif //JIPP2_FUNKCJE_H
