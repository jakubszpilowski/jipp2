//
// Created by Lenovo on 04.11.2021.
//

#ifndef JIPP2_KLASACL_H
#define JIPP2_KLASACL_H
#include <iostream>
#include <cstdlib>

using namespace std;

class KlasaCl {
private:
    int n;
    int *t;

public:
    KlasaCl(int n, int *t);
    void pauseProgram();
    int getSize();
    ~KlasaCl();
};


#endif //JIPP2_KLASACL_H
