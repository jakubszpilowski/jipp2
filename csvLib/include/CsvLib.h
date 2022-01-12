//
// Created by Lenovo on 03.01.2022.
//

#ifndef JIPP2_CSVLIB_H
#define JIPP2_CSVLIB_H

#include "CsvException.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class CsvLib{
private:
    fstream file;
    vector<string> headers;
    bool haveHeaderRow = false;
    char delimiter;

public:
    /**
     * Konstruktor otwierający plik .csv
     * @param path ścieżka do pliku
     * @param delimiter znak oddzielający
     * @param haveHeaderRow czy plik posiada nagłówek
     */
    CsvLib(const string& path, char delimiter = ',', bool haveHeaderRow = true);

    /**
     * Funkcja umożliwiająca czytanie pliku
     */
    vector<vector <string>> getRows();

    /**
     * Funkcja sprawdzająca czy plik posiada linię
     * @return true jeśli ma / false jeśli nie ma
     */
    bool hasNextRow();

    /**
     * Destruktor zamykający plik
     */
    ~CsvLib();
};

#endif //JIPP2_CSVLIB_H