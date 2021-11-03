//
// Created by Lenovo on 03.11.2021.
//

#ifndef JIPP2_FIGURA_H
#define JIPP2_FIGURA_H
#include <iostream>

using namespace std;

class Figura {
public:
    int n;
    int **tab;
    Figura(int n, int **tab);
    void showTab();
};


#endif //JIPP2_FIGURA_H
