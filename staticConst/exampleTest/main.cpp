//
// Created by Lenovo on 11.11.2021.
//
#include <iostream>
using namespace std;

int main(){
    int cVal = 612;
    const int *p = &cVal;
    cout << "*p= " << *p << endl;

    const int cVal2 = 618;
    p = &cVal2;
    cout << "*p= " << *p << endl;

    int *const q = &cVal;
    *q = 61631;
    cout << "*q= " << *q << endl;

    const int* const youCantModifyMe = &cVal;
    cout << "*youCantModifyMe= " << *youCantModifyMe << endl;

    return 0;
}
