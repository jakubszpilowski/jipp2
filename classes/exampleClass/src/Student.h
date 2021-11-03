//
// Created by Lenovo on 02.11.2021.
//

#ifndef JIPP2_STUDENT_H
#define JIPP2_STUDENT_H
#include <iostream>

using namespace std;

class Student {
private:
    string name;
    string lastname;
    int album;
    int questions;
    int answers;

public:
    void setStudent(string n, string l, int al, int q, int a);
    void showStudent();
};


#endif //JIPP2_STUDENT_H
