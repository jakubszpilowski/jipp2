//
// Created by Lenovo on 27.12.2021.
//
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main(){
    string line;
    ofstream tram("../../fileOperations/trams.csv"),
        bus("../../fileOperations/buses.csv");

    if(!tram.is_open() || !bus.is_open()){
        cout << "Error opening: trams or buses" << endl;
        exit(1);
    }

    ifstream file("../../fileOperations/stops.csv");
    if(file.is_open()){
        while(!file.eof()){
            getline(file, line);

            if(line[0] == 49)
                tram << line << endl;
            else
                bus << line << endl;
        }
        file.close();
    }else{
        cout << "Error opening file" << endl;
        exit(1);
    }

    cout << "Stops has been successfully saved in the right place" << endl;

    tram.close();
    bus.close();

    return 0;
}