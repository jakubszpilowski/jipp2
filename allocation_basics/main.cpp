//
// Created by Lenovo on 11.10.2021.
//

#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    int *n = new int;
    int k;
    cout << n << endl << *n << endl << &n << endl << &k << endl;
    delete n;

    int *tab = new int[5];
    delete[] tab;

    int **tab2 = new int*[5];
    for(int i = 0; i < 5; ++i){
        tab2[i] = new int[5];
    }

    for(int i = 0; i < 5; ++i){
        delete[] tab2[i];
    }
    delete[] tab2;

    cout << argv[1] << endl;

    return 0;
}