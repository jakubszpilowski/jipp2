//
// Created by Lenovo on 10.12.2021.
//

#ifndef JIPP2_TRACK_H
#define JIPP2_TRACK_H
#include <iostream>

using namespace std;

class Track{
private:
    string artist;
    string title;

public:
    Track(const string&, const string&);
    void printTrack();
    string getTitle();
};

#endif //JIPP2_TRACK_H
