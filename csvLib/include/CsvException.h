//
// Created by Lenovo on 12.01.2022.
//

#ifndef JIPP2_CSVEXCEPTION_H
#define JIPP2_CSVEXCEPTION_H
#include <iostream>
#include <exception>

using namespace std;

class CsvException: public exception{
private:
    char *text;
    int i;
    string errorMsg[4]{
        "can't open file",
        "can't close file",
        "file too big",
        "other error"
    };

public:
    CsvException(int nr);
    const char *what();
    string getError();
};

#endif //JIPP2_CSVEXCEPTION_H
