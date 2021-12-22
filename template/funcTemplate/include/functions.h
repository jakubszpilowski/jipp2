//
// Created by Lenovo on 20.12.2021.
//
#ifndef JIPP2_FUNCTIONS_H
#define JIPP2_FUNCTIONS_H

#include <iostream>

using namespace std;

template<typename T>
T minimum(T a, T b){
    return a < b ? a : b;
}

template<typename T>
T maximum(T a, T b){
    return a > b ? a : b;
}

template<typename T, int n>
void printArray(T *array){
    cout << "Array" << endl;
    for(int i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << endl;
}

template<typename T, int n, int m>
void printMatrix(T** matrix){
    cout << "Matrix" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}

#endif //JIPP2_FUNCTIONS_H
