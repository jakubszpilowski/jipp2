//
// Created by Lenovo on 15.11.2021.
//
#ifndef JIPP2_COMPLEX_H
#define JIPP2_COMPLEX_H
#include <iostream>
#include <cmath>

using namespace std;

class Complex{
private:
    double x;
    double y;

public:
    Complex(double x, double y);
    Complex();

    void print() const;
    Complex operator+(const Complex &rhs) const;
    Complex operator-(const Complex &rhs) const;
    Complex operator*(const Complex &rhs) const;
    Complex operator/(const Complex &rhs) const;
    bool operator==(const Complex &rhs) const;
    Complex operator!() const;
    double operator*() const;
};

#endif //JIPP2_COMPLEX_H
