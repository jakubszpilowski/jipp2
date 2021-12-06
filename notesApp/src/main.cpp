//
// Created by Lenovo on 29.11.2021.
//
#include "Note.h"
#include "NoteDirector.h"
#include <iostream>

using namespace std;

int main(){
    NoteDirector director;

    string content;
    getline(cin, content);

    director.addNote(1);
    director.editNote(0, &content);

    director.printAll();

    return 0;
}