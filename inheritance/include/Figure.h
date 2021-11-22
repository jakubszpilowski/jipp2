//
// Created by Lenovo on 22.11.2021.
//
#ifndef JIPP2_FIGURE_H
#define JIPP2_FIGURE_H
#include <iostream>

using namespace std;

class Figure{
protected:
    string name, color;

public:
    Figure(const string &name, const string &color);
    void printFigure() const;
};

class Rectangle: public Figure{
protected:
    double a, b;

public:
    Rectangle(const string &name, const string &color, double a, double b);
    double getArea() const;
    double getPerimeter() const;
};

class Circle: public Figure{
protected:
    double r;

public:
    Circle(const string &name, const string &color, double r);
    double getArea() const;
    double getPerimeter() const;
};

class Triangle: public Figure{
protected:
    double a, b, c, h;

public:
    Triangle(const string &name, const string &color, double a, double b, double c, double h);
    double getArea() const;
    double getPerimeter() const;
};

#endif //JIPP2_FIGURE_H
