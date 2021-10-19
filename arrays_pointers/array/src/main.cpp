//
// Created by Lenovo on 19.10.2021.
//
#include "arr.h"

int main(){
    srand(time(0));
    int *t = new int[15];
    int a = 5, b = 25;

    cout << "Random number from " << a << " to " << b << " " << randomInt(a, b) << endl;

    generateArray(t, 15);
    showArray(t, 15);
    cout << "Max value in array " << maxArray(t, 15) << endl;

    reverseArray(t, 15);
    showArray(t, 15);

    delete[] t;
    return 0;
}

