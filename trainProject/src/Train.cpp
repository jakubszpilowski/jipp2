//
// Created by Lenovo on 31.01.2022.
//
#include "Train.h"
#include <iostream>

using namespace std;


Train::Train(char typ, const string& nazwa, const string& relacja, int peron, const string& status): typ(typ), nazwa(nazwa),
    relacja(relacja), peron(peron), status(status){
}

Train::Train(){
}

void Train::setStatus(string nowyStatus) {
    this->status = nowyStatus;
}

string Train::getStatus() const {
    return status;
}

string Train::pobierzNumer() const {
    return numer;
}