//
// Created by Lenovo on 12.01.2022.
//
#include <iostream>

using namespace std;

int main(){
    double x;
    int a;
    string line;
    cout << "Enter an double value (ex. 3,14)" << endl;
    cin >> x;

    cout << "Now your value will be converted to an integer value:" << endl;
    cout << "Converting..." << endl;
    cin >> line;

    //a = (int) x;
    a = static_cast <int> (x);
    cout << "Your integer is equal: " << a << endl;
    cout << "Area of a square: " << a * a << endl;

    return 0;
}