//
// Created by Lenovo on 08.12.2021.
//
#include <iostream>
#include "MusicPlayer.h"

using namespace std;

int main(){
    MusicPlayer p;
    cout << "ADDING" << endl;

    p.addTrack("Enter Sandman", "Metallica");
    p.addTrack("Sandstorm", "Darude");
    p.addTrack("Yellow Submarine", "The Beatles");
    p.addTrack("Tornado of Souls", "Megadeth");
    p.addTrack("Another Love", "Tom Odell");
    p.addTrack("Alone", "Alan Walker");
    p.addTrack("Guns for Hire", "Woodkid");
    p.addTrack("If I were U", "Nothing but Thieves");
    p.addTrack("Freak", "Sub Urban");
    p.addTrack("Physical", "Dua Lipa");

    p.printTracks();

    cout << "==========" << endl;

    cout << "DELETING" << endl;
    p.deleteTrack("Sandstorm");

    p.printTracks();

    cout << "=========" << endl;
    cout << "NEXT TO NR 5" << endl;

    p.nextTrack(5);

    cout << "=========" << endl;
    cout << "PREV TO NR 16" << endl;

    p.prevTrack(16);

    return 0;
}
