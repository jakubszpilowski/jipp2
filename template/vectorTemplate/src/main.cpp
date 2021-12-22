//
// Created by Lenovo on 22.12.2021.
//
#include "VectorTemplate.h"

int main(){
    VectorTemplate<int> v(5);

    v.addElement(4);
    v.addElement(1);
    v.addElement(1);
    v.addElement(55);
    v.addElement(12);

    v.printVector();

    cout << v.popElement() << endl;
    v.printVector();

    cout << *v.returnPtr() << endl;

    VectorTemplate<double> w;
    w.addElement(3.14);
    w.addElement(421.123);
    w.addElement(33.33);

    w.printVector();

    return 0;
}