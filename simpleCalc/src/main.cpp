//
// Created by Lenovo on 13.10.2021.
//

#include <iostream>
#include <cstring>
#include "calc.h"

using namespace std;

int main(int argc, char* argv[]){
    int a, b, h;

    if(argc == 2)
        if(strcmp(argv[1], "help") == 0)
            help();
        else
            err();
    else if(argc == 4){
        if(strcmp(argv[1], "add") == 0){
            a = stoi(argv[2]);
            b = stoi(argv[3]);
            cout << "Dodawanie " << a << " + " << b  << " = " << add(a, b) << endl;
        }
        else if(strcmp(argv[1], "subtract") == 0){
            a = stoi(argv[2]);
            b = stoi(argv[3]);
            cout << "Odejmowanie " << a << " - " << b << " = " <<  sub(a, b) << endl;
        }
        else
            err();
    }
    else if(argc == 5){
        if(strcmp(argv[1], "volume") == 0){
            a = stoi(argv[2]);
            b = stoi(argv[3]);
            h = stoi(argv[4]);
            cout << "Objetosc (" << a << " + " << b << ") / 2 * " << h  << " * "  << h  << " = " << volume(a, b, h) << endl;
        }
        else
            err();
    }
    else
        err();
    return 0;
}