//
// Created by Lenovo on 20.12.2021.
//
#include "functions.h"

int main(){
    cout << minimum(-5, 6) << endl;
    cout << maximum(8.121, 12.32) << endl;

    int tab[5] = {1, 2, 1, 2, 12};
    printArray<int, 5>(tab);

    auto **matrix = new double*[2];
    for(int i = 0; i < 2; i++)
        matrix[i] = new double[3];

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 3; j++)
            matrix[i][j] = i + j + 1;

    printMatrix<double, 2, 3>(matrix);

    return 0;
}
