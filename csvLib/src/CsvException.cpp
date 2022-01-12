//
// Created by Lenovo on 12.01.2022.
//
#include "CsvException.h"

CsvException::CsvException(int nr){
    i = nr;
}

const char *CsvException::what() {
    return text;
}

string CsvException::getError(){
    return errorMsg[i];
}
