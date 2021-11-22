//
// Created by Lenovo on 22.11.2021.
//
#include <iostream>
#include "Figure.h"

using namespace std;

int main(){
    Circle c("Circle", "Blue", 4);

    c.printFigure();
    cout << "Area: " << c.getArea() << endl;
    cout << "Perimeter: " << c.getPerimeter() << endl;

    Rectangle r("Rectangle", "Black", 3, 7);

    r.printFigure();
    cout << "Area: " << r.getArea() << endl;
    cout << "Perimeter: " << r.getPerimeter() << endl;

    Triangle t("Triangle", "Yellow", 3, 4, 5, 4);

    t.printFigure();
    cout << "Area: " << t.getArea() << endl;
    cout << "Perimeter: " << t.getPerimeter() << endl;

    return 0;
}
