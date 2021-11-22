//
// Created by Lenovo on 22.11.2021.
//
#include "Figure.h"

Figure::Figure(const string &name, const string &color): name(name), color(color) {
}

void Figure::printFigure() const {
    cout << color << " " << name << endl;
}

double Rectangle::getArea() const {
    return a * b;
}

double Rectangle::getPerimeter() const {
    return 2 * a + 2 * b;
}

Rectangle::Rectangle(const string &name, const string &color, double a, double b): Figure(name, color), a(a), b(b) {
}

Circle::Circle(const string &name, const string &color, double r): Figure(name, color), r(r) {
}

double Circle::getArea() const {
    return r * r * 3.14;
}

double Circle::getPerimeter() const {
    return 2 * 3.14 * r;
}


Triangle::Triangle(const string &name, const string &color, double a, double b, double c, double h):
    Figure(name, color), a(a), b(b), c(c), h(h){
}

double Triangle::getArea() const {
    return 0.5 * a * h;
}

double Triangle::getPerimeter() const {
    return a + b + c;
}
