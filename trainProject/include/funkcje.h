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
#include <string.h>
#include <iomanip>
#include <limits>
#include "Train.h"
#include "Stacja.h"
#include "Pasazerski.h"
#include "Drezyna.h"
#include "Towarowy.h"

using namespace std;

/**
 * Funkcja wyswietlajaca menu
 */
void menu();

/**
 * Funkcja wyświeltająca dokumentacje
 */
void dokumentacja();

/**
 * Funkcja dodająca pociąg na stację
 * @param s stacja
 */
void dodajPociag(Stacja *s);

#endif //JIPP2_FUNKCJE_H
