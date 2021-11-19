//
// Created by Lenovo on 19.11.2021.
//
#include <iostream>
#include "Node.h"

using namespace std;

int main(){
    Node a(12, 3);

    a.display();

    Node b;

    b.updateValue(4, 3);
    b.display();

    cout << "Distance between A and B = " << pointsDistance(a, b) << endl;

    return 0;
}