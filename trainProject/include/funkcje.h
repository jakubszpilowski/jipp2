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
template <typename T>
struct czas{
    T godzina;
    T minuta;
};

typedef czas<short> czas_aktualny;

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
 * @param aktualny strutura przechowująca czas
 */
void rozklad(czas_aktualny aktualny);

/**
 * Funkcja wyświelająca aktualny czas na stacji
 * @param aktualny struktura przechowująca czas
 */
void aktualnyCzas(czas_aktualny aktualny);

/**
 * Funkcja zmieniajaca aktualny czas na stacji, dla symulowania ruchu pociągów
 * @param akt wskaźnik na strukturę czasu
 */
void aktualizujCzas(czas_aktualny * akt);


#endif //JIPP2_FUNKCJE_H
