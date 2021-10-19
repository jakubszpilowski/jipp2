//
// Created by Lenovo on 19.10.2021.
//

#include "funcs.h"

//Pole prostokąta
int area(int a, int b){
    return a * b;
}

//Pole trójkąta
double area(double a, double b){
    return 0.5 * a * b;
}

//Pole trapezu
double area(int a, int b, int h){
    return (a + b) / 2 * h;
}

//Pole kwadratu
int area(int a){
    return a * a;
}
