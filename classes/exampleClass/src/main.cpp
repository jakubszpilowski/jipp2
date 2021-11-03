//
// Created by Lenovo on 02.11.2021.
//
#include "Prostokat.h"
#include "Kula.h"
#include "FunkcjaKwadratowa.h"
#include "Student.h"
#include <iostream>

using namespace std;

int main(){
    Prostokat rect;
    cout << "\nZadanie 1" << endl;
    cout << "Pole powierzchni prostopadloscianu = " << rect.area() << endl;

    cout << "\nZadanie 2" << endl;
    Kula k;
    cout << "Objetosc kuli = " << k.volume() << endl;

    cout << "\nZadanie 3" << endl;
    int a,b,c;
    FunkcjaKwadratowa f;
    cout << "Podaj trzy liczby " << endl;
    cin >> a >> b >> c;
    f.defineFunc(a, b, c);
    f.showFunc();

    cout << "\nZadanie 4" << endl;
    Student student;
    string n, l;
    cout << "Podaj dane: imie, nazwisko, nr albumu, liczbe pytan oraz liczbe poprawnych odpowiedzi " << endl;
    cin >> n >> l >> a >> b >> c;
    student.setStudent(n, l, a, b, c);
    student.showStudent();

    return 0;
}
