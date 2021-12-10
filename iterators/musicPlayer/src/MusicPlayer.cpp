//
// Created by Lenovo on 08.12.2021.
//
#include "MusicPlayer.h"

MusicPlayer::MusicPlayer() {
    trackList.emplace_back("Toto", "Africa");
}

void MusicPlayer::printTracks() {
    for(x = trackList.begin(); x != trackList.end(); x++)
        (*x).printTrack();
}

void MusicPlayer::addTrack(const string &t, const string &a) {
    trackList.emplace_back(a, t);
}

void MusicPlayer::deleteTrack(string title) {
    vector<Track>::iterator i;

    for(i = trackList.begin() + 1; i != trackList.end(); i++){
        if((*i).getTitle() == title)
            break;
    }
    trackList.erase(i);
}

void MusicPlayer::prevTrack(int i) {
    if(i > trackList.size())
        prevTrack(i % trackList.size());

    else if(i == 0)
        nextTrack(trackList.size() - 1);

    else{
        Track t = trackList.at(i - 1);
        t.printTrack();
    }
}

void MusicPlayer::nextTrack(int i) {
    if(i > trackList.size())
        nextTrack(i % trackList.size());
    else if(i == trackList.size() - 1)
        prevTrack(1);
    else
    {
        Track t = trackList.at(i + 1);
        t.printTrack();
    }
}