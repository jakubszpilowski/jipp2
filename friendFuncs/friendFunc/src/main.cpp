//
// Created by Lenovo on 19.11.2021.
//
#include "Triangle.h"
#include <iostream>

using namespace std;

int main(){
    Node a, b(5, 8), c(1, 16);
    Triangle triangle(a, b, c, "First Triangle");

    triangle.display();
    cout << triangle << endl;

    cout << "Distance between first and second point is " << triangle.distance(1, 0) << endl;

    Node d(1,1), e(10, 5), f(5, 5);
    Triangle triangle2(d, e, f, "Second Triangle");

    showTriangleData(&triangle2);

    Triangle *t3 = &triangle;
    showTriangleData(t3);

    //Nie można przeciążyć tych dwóch -> funkcje są identyczne i kompilator pokazuje błąd
    //showTriangleData(triangle);
    //showTriangleData(&: triangle2);

    return 0;
}
