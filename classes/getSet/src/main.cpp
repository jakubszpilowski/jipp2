//
// Created by Lenovo on 03.11.2021.
//
#include <iostream>
#include <cmath>
#include "Prostokat.h"
#include "Kula.h"
#include "FunkcjaKwadratowa.h"
#include "Student.h"

using namespace std;

int main(){
    Prostokat rect;
    int a, b, h, pole;
    cout << "\nZadanie 1\nPodaj dlugosc krawedzi podstawy oraz wysokosc prosopadloscianu" << endl;
    cin >> a >> b >> h;
    rect.setA(a);
    rect.setB(b);
    rect.setH(h);
    pole = 2 * rect.getA() * rect.getB() + 2 * rect.getB() * rect.getH() + 2 * rect.getA() * rect.getH();
    cout << "Pole powierzchni wynosi " << pole << endl;

    cout << "\nZadanie 2\nPodaj promien kuli" << endl;
    Kula k;
    cin >> a;
    k.setR(a);
    double obj = (double) 4 / 3 * 3.14 * pow(k.getR(), 3);
    cout << "Objetosc kuli wynosi " << obj << endl;

    cout << "\nZadanie 3\nPodaj trzy liczby" << endl;
    cin >> a >> b >> h;
    FunkcjaKwadratowa f;
    f.setA(a);
    f.setB(b);
    f.setC(h);
    f.printFunc();

    cout << "\nZadanie 4\nPodaj imie, nazwisko, numer albumu, ilosc pytan oraz ilosc odpowiedzi" << endl;
    string n, l;
    cin >> n >> l;
    cin >> a >> b >> h;
    Student student;
    student.setName(n, l);
    student.setAlbum(a);
    student.setAnswers(b, h);
    student.printStudent();

    return 0;
}
