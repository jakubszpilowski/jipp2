//
// Created by Lenovo on 03.11.2021.
//

#ifndef JIPP2_STUDENT_H
#define JIPP2_STUDENT_H
#include <iostream>

using namespace std;

class Student {
private:
    string imie;
    string nazwisko;
    int nr_albumu;
    int liczba_pytan;
    int liczba_odpowiedzi;

public:
    void setName(string imie, string nazwisko);
    void setAlbum(int nr_albumu);
    void setAnswers(int liczba_pytan, int liczba_odpowiedzi);
    string getName();
    string getLastName();
    int getAlbum();
    int getQuestion();
    int getAnswers();
    void printStudent();
    double correctAnswers();
};


#endif //JIPP2_STUDENT_H
