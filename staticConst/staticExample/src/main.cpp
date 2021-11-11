//
// Created by Lenovo on 11.11.2021.
//
#include "Samochod.h"
#include <iostream>

string Samochod::najnowsza_wesja_oprogramownia = "v1.2";

int main(){
    Samochod samochod(1332, "Ford", "Focus", "Sedan", 5, "v1.0");
    cout << "Informacje o pojezdzie" << endl;
    samochod.printInfo();

    samochod.setPasenger(0, "Piotr");
    samochod.setPasenger(1, "Michal");

    cout << "Samochod po zmianie pasazerow" << endl;
    samochod.printInfo();

    samochod.updateVersion();
    cout << "Samochod po aktualizacji oprogramowania, aktualna wersja: " << samochod.getVersion() << endl;

    Samochod::opublikuj_nowe_oprogramowanie("v1.5");
    samochod.updateVersion();
    cout << "Aktualizacja najnowszego oprogramowania, wersja: " << samochod.getVersion() << endl;

    return 0;
}