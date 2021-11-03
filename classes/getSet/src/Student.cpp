//
// Created by Lenovo on 03.11.2021.
//

#include "Student.h"

void Student::setName(string imie, string nazwisko) {
    this->imie = imie;
    this->nazwisko = nazwisko;
}

void Student::setAlbum(int nr_albumu) {
    this->nr_albumu = nr_albumu;
}

void Student::setAnswers(int liczba_pytan, int liczba_odpowiedzi) {
    this->liczba_pytan = liczba_pytan;
    this->liczba_odpowiedzi = liczba_odpowiedzi;
}

string Student::getName() {
    return imie;
}

string Student::getLastName() {
    return nazwisko;
}

int Student::getAlbum() {
    return nr_albumu;
}

int Student::getQuestion() {
    return liczba_pytan;
}

int Student::getAnswers() {
    return liczba_odpowiedzi;
}

double Student::correctAnswers() {
    return (double) Student::getAnswers() / Student::getQuestion() * 100;
}

void Student::printStudent() {
    cout << Student::getName() << " " << Student::getLastName() << endl;
    cout << "Nr albumu: " << Student::getAlbum() << endl;
    cout << "Procent poprawnych odpowiedzi " << Student::correctAnswers() << "%" << endl;
}