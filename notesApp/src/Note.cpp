//
// Created by Lenovo on 29.11.2021.
//
#include "Note.h"

void Note::setTitle(string t) {
    title = t;
}

string Note::getTitle() {
    return title;
}

Note::Note(int s): size(s) {
    title = "Note";
}

Note::Note() {}

string TextNote::getContent() {
    return content;
}

void TextNote::setContent(string *c) {
    content = *c;
}

TextNote::TextNote(): Note(1) {
    content = " ";
}

string ListNote::getContent() {
    string line = "";
    char a = 31;
    for(int i = 0; i < size; i++){
        line + a + content[i] + "\n";
    }
    return line;
}

void ListNote::setContent(string *t) {
    for(int i = 0; i < size; i++)
        content[i] = t[i];
}

ListNote::ListNote(int s): Note(s){
    this->size = s;
    for(int i = 0; i < size; ++i)
        content[i] = " ";
}
