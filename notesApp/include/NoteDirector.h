//
// Created by Lenovo on 29.11.2021.
//
#ifndef JIPP2_NOTEDIRECTOR_H
#define JIPP2_NOTEDIRECTOR_H
#include "Note.h"

class NoteDirector{
private:
    Note *noteList[10];
    int used = 0;

public:
    void addNote(int);
    void deleteNote(int);
    void editNote(int, string*);
    void clearNoteList();
    void printAll();
    void printAllTitles();
};

#endif //JIPP2_NOTEDIRECTOR_H
