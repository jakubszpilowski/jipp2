//
// Created by Lenovo on 13.10.2021.
//

#include <iostream>
#include "calc.h"

using namespace std;

int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

double volume(int a, int b, int h){
    return (a + b) / 2 * h * h;
}

void help(){
    cout << "\nSimple Calculator" << endl << "Wpisz: 'simpleCalc [nazwa dzialania]' aby korzystac\n" << endl;
    cout << "Mozliwe dzialania:" << endl << "* add [a] [b]" << endl;
    cout << "\tdodawanie dwoch liczb calkowitych [a] i [b] " << endl;
    cout << "* subtract [a] [b]\n\todejmowanie dwoch liczb calkowitych [a] i [b]" << endl;
    cout << "* volume [a] [b] [h] \n\t"
            "oblicznie objetosci graniastoslupa prostego o podstawie trapezu [a] i [b] "
            "to krawedzie podstawy a [h] jest wysokościa trapezu oraz graniastoslupa" << endl;
    cout << "* help \n\twyswietla dokumentacje" << endl;
}

void err(){
    cout << "\nNieprawidlowe dane na wejsciu, przeczytaj ponizsza instrukcje i zresetuj program" << endl;
    help();
}
