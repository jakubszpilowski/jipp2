//
// Created by Lenovo on 02.11.2021.
//

#include "Student.h"

void Student::setStudent(string n, string l, int al, int q, int a) {
    name = n;
    lastname = l;
    album = al;
    questions = q;
    answers = a;
}

void Student::showStudent() {
    cout << "Name: " << name << endl;
    cout << "Lastname: " << lastname << endl;
    cout << "Album number: " << album << endl;
    cout << "Correct answers: " << (double)answers / questions * 100 << "%" << endl;
}