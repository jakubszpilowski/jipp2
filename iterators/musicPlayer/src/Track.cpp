//
// Created by Lenovo on 10.12.2021.
//
#include "Track.h"

Track::Track(const string& a, const string& t): artist(a), title(t) {
}

void Track::printTrack() {
    char a = 31;
    cout << a  << " " << title << " by " << artist << endl;
}

string Track::getTitle() {
    return title;
}
