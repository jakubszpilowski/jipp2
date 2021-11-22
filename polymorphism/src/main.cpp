//
// Created by Lenovo on 22.11.2021.
//
#include <iostream>
#include "Figure.h"

using namespace std;

int main(){
    Figure *circle = new Circle(5);
    Figure *rect = new Rectangle(5, 18);

    cout << "Circle area: " << circle->getArea() << endl;
    cout << "Rectangle area: " << rect->getArea() << endl;

    return 0;
}
