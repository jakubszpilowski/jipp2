//
// Created by Lenovo on 29.11.2021.
//
#include "NoteDirector.h"

void NoteDirector::addNote(int s) {
    if(s == 1)
        noteList[used] = new TextNote();
    else
        noteList[used] = new ListNote(s);
    used++;
}

void NoteDirector::editNote(int i, string* content) {
    noteList[i]->setContent(content);
}

void NoteDirector::deleteNote(int i) {
    noteList[i]->setTitle("");

    string c = " ";

    noteList[i]->setContent(&c);
    used -= 1;
}

void NoteDirector::clearNoteList() {
    string l = " ";

    for(int i = 0; i < used; ++i) {
        noteList[i]->setContent(&l);
        noteList[i]->setTitle("");
    }

    used = 0;
}

void NoteDirector::printAllTitles() {
    char a = 31;
    for(int i = 0; i < used; ++i)
    {
        cout << a << " " << noteList[i]->getTitle() << endl;
    }
}

void NoteDirector::printAll() {
    char a = 31;

    for(int i = 0; i < used; ++i)
    {
        cout << a << " " << noteList[i]->getTitle() << endl;
        cout << "\t" << noteList[i]->getContent() << endl;
    }
}