//
// Created by Lenovo on 15.11.2021.
//
#include "Vector.h"


Vector::Vector() {
    x = 0;
    y = 0;
}

Vector::Vector(double x, double y): x(x), y(y){
}

double Vector::length() const {
    return sqrt(x * x + y * y);
}

void Vector::print() const {
    cout << "[" << x << ", " << y << "]" << endl;
}

Vector Vector::operator+(const Vector &rhs) const {
    return {x + rhs.x, y + rhs.y};
}

Vector Vector::operator-(const Vector &rhs) const {
    return {x - rhs.x, y - rhs.y};
}

double Vector::operator*(const Vector &rhs) const {
    return x * rhs.x + y * rhs.y;
}

Vector Vector::operator-() const {
    return {-x, -y};
}

Vector Vector::operator*(const double &rhs) const {
    return {x * rhs, y * rhs};
}

bool Vector::operator==(const Vector &rhs) const {
    return x == rhs.x && y == rhs.y;
}




