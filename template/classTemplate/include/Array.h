//
// Created by Lenovo on 20.12.2021.
//
#ifndef JIPP2_ARRAY_H
#define JIPP2_ARRAY_H

#include <iostream>
#include <ctime>
using namespace std;

template<typename T, int size>
class Array{
private:
    T *array;

public:
    Array(){
        array = new T[size];
    }

    void setArray(){
        for(int i = 0; i < size; i++)
            array[i] = rand() % 50;
    }

    void printArray(){
        for(int i = 0; i < size; i++)
            cout << array[i] << " ";
        cout << endl;
    }
};

#endif //JIPP2_ARRAY_H
