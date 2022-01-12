//
// Created by Lenovo on 03.01.2022.
//
#include "CsvLib.h"

CsvLib::CsvLib(const string& path, char delimiter, bool haveHeaderRow): delimiter(delimiter), haveHeaderRow(haveHeaderRow){
    CsvException e(0);

    try{
        file = fstream (path, ios::in);
    }
    catch (CsvException &e)
    {
        e.getError();
    }
}

CsvLib::~CsvLib() {
    CsvException e(1);

    try{
        file.close();
    }
    catch(CsvException &e){
        e.getError();
    }
}

bool CsvLib::hasNextRow() {
    return file.eof();
}

vector<vector <string>>CsvLib::getRows() {
    vector<vector<string>> content;
    vector<string> row;
    string line, word;

    if(file.is_open()){
        while(getline(file, line)){
            row.clear();

            stringstream str(line);

            while(getline(str, word, delimiter))
                row.push_back(word);

            content.push_back(row);
        }
    }
    else{
        cout << "File not open" << endl;
    }
    return content;
}
