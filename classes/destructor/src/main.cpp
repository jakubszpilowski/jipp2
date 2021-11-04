//
// Created by Lenovo on 04.11.2021.
//
#include "KlasaCl.h"
#include <iostream>

using namespace std;

int main(){
    int *t = new int[1024];
    KlasaCl exampleClass(1024, t);
    exampleClass.pauseProgram();

    cout << "Tablica zajmuje " << exampleClass.getSize() << " bajtow" << endl;
    exampleClass.pauseProgram();

    return 0;
}