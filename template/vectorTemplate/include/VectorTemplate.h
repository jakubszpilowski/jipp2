//
// Created by Lenovo on 22.12.2021.
//
#ifndef JIPP2_VECTORTEMPLATE_H
#define JIPP2_VECTORTEMPLATE_H

#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class VectorTemplate{
private:
    vector<T> vector;

public:
    VectorTemplate()= default;;

    VectorTemplate(int size){
        vector.reserve(size);
    }

    void addElement(T element){
        vector.push_back(element);
    }

    T popElement(){
        T el = vector.back();
        vector.pop_back();
        return el;
    }

    T *returnPtr(){
       return &vector.front();
    }

    void printVector(){
        for(auto element: vector)
            cout << element << " ";
        cout << endl;
    }
};

#endif //JIPP2_VECTORTEMPLATE_H
