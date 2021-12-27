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
    ofstream tram("C:/Users/Lenovo/CLionProjects/jipp2/fileOperations/trams.csv"),
        bus("C:/Users/Lenovo/CLionProjects/jipp2/fileOperations/buses.csv");

    if(!tram.is_open() || !bus.is_open()){
        cout << "Error opening: trams or buses" << endl;
        exit(1);
    }

    ifstream file("C:/Users/Lenovo/CLionProjects/jipp2/fileOperations/stops.csv");
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

    tram.close();
    bus.close();

    return 0;
}