//
// Created by Lenovo on 31.01.2022.
//
#include "Train.h"
#include <iostream>

using namespace std;


Train::Train(char typ, string nazwa, string relacja, int peron, string status): typ(typ), nazwa(nazwa),
    relacja(relacja), peron(peron), status(status){
}

Train::Train(){
}

string Train::getStatus() const {
    return status;
}


