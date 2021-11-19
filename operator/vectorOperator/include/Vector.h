//
// Created by Lenovo on 15.11.2021.
//

#ifndef JIPP2_VECTOR_H
#define JIPP2_VECTOR_H
#include <iostream>
#include <cmath>

using namespace std;

class Vector{
private:
    double x;
    double y;

public:
    Vector();
    Vector(double x, double y);

    double length() const;
    void print() const;

    Vector operator+(const Vector &rhs) const;
    Vector operator-(const Vector &rhs) const;
    double operator*(const Vector &rhs) const;
    Vector operator-() const;
    Vector operator*(const double &rhs) const;
    bool operator==(const Vector &rhs) const;
};

#endif //JIPP2_VECTOR_H
