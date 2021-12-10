//
// Created by Lenovo on 08.12.2021.
//
#ifndef JIPP2_MUSICPLAYER_H
#define JIPP2_MUSICPLAYER_H
#include <iostream>
#include <ctime>
#include <vector>
#include "Track.h"

using namespace std;

class MusicPlayer{
private:
    vector<Track> trackList;
    vector<Track>::iterator x, y;

public:
    MusicPlayer();
    void printTracks();
    void addTrack(const string&, const string&);
    void deleteTrack(string);
    void nextTrack(int);
    void prevTrack(int);
};

#endif //JIPP2_MUSICPLAYER_H
