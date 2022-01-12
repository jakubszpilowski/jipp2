//
// Created by Lenovo on 28.12.2021.
//
#ifndef JIPP2_TRAIN_H
#define JIPP2_TRAIN_H
#include <iostream>
#include <vector>

class Train{
private:
    int cars;
    string start;
    string over;
    string platform;
    string time;

public:
    Train();
    Train(int c, string s, string o, string p, string t);
    void setTime(string t);

};

#endif //JIPP2_TRAIN_H
