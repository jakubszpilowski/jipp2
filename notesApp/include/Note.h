//
// Created by Lenovo on 29.11.2021.
//
#ifndef JIPP2_NOTE_H
#define JIPP2_NOTE_H
#include <iostream>
#include <string>

using namespace std;

class Note{
protected:
    string title;
    int size;

public:
    Note(int);
    Note();
    string getTitle();
    void setTitle(string);
    virtual string getContent() = 0;
    virtual void setContent(string*) = 0;
};

class TextNote: public Note{
private:
    string content;

public:
    TextNote();
    string getContent();
    void setContent(string*);
};

class ListNote: public Note{
private:
    string content[100];
    int size;

public:
    ListNote(int);
    string getContent();
    void setContent(string*);
};

#endif //JIPP2_NOTE_H
