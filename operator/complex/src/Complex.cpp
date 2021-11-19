//
// Created by Lenovo on 15.11.2021.
//
#include "Complex.h"

Complex::Complex(double x, double y): x(x), y(y) {
}

Complex::Complex(){
    x = 1;
    y = 1;
}

void Complex::print() const {
    cout << "Re = " << x << " Im = " << y << endl;
}

Complex Complex::operator+(const Complex &rhs) const {
    return {x + rhs.x, y + rhs.y};
}

Complex Complex::operator-(const Complex &rhs) const {
    return {x - rhs.x, y - rhs.y};
}

Complex Complex::operator*(const Complex &rhs) const {
    return {x * rhs.x - y * rhs.y, x * rhs.y - y * rhs.x};
}

Complex Complex::operator/(const Complex &rhs) const {
    return {(x * rhs.x + y * rhs.y)/(rhs.x * rhs.x + rhs.y * rhs.y), (y * rhs.x - x * rhs.y)/(rhs.x * rhs.x + rhs.y * rhs.y)};
}

bool Complex::operator==(const Complex &rhs) const {
    return x == rhs.x && y == rhs.y;
}

Complex Complex::operator!() const {
    return {x, -y};
}

double Complex::operator*() const {
    return sqrt(x * x + y * y);
}








