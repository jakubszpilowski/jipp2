//
// Created by Lenovo on 12.01.2022.
//
#include "CsvLib.h"

int main(){
    string path = "../../csvApp/input.csv";

    CsvLib lib(path, ';');

    vector<vector<string>> content = lib.getRows();

    for(auto & i : content){
        for(auto & j : i)
            cout << j << " ";
        cout << endl;
    }

    return 0;
}