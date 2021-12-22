//
// Created by Lenovo on 20.12.2021.
//
#include "Array.h"

int main(){
    srand(time(NULL));

    Array<int, 10> a;
    a.setArray();
    a.printArray();

    Array<double, 15> b;
    b.setArray();
    b.printArray();

    return 0;
}