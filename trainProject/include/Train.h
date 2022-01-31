//
// Created by Lenovo on 28.12.2021.
//
#ifndef JIPP2_TRAIN_H
#define JIPP2_TRAIN_H
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

template <string str>
class Train{
private:
    str nazwa;
    str relacja;
    str godzina_p, godzina_o;
    str status;
    str peron;
    char typ;

public:
    Train(char typ, str nazwa, str relacja, str godzina, str status, str peron);
    Train();
    str setStatus();
    virtual void printData() = 0;
};

#endif //JIPP2_TRAIN_H
