//
// Created by Lenovo on 11.11.2021.
//
#include "Example.h"

Example::Example(double x, double y, string name): name(name) {
    *this->x = x;
    *this->y = y;
}

Example::Example(string name): name(name){
    *x = *y = 0;
}

double Example::getX() const{
    return *x;
}

void Example::setX(double x){
    *this->x = x;
}

double Example::getY() const{
    return *y;
}

void Example::setY(double y){
    *this->y = y;
}

void Example::printData() const {
    cout << "Point " << name << " (x = " << *x << ", y = " << *y << ")\n";
}

void Example::setName(string name) {
    this->name = name;
}

bool Example::operator==(const Example &rhs) const {
    return x == rhs.x && y == rhs.y && name == rhs.name;
}

bool Example::operator!=(const Example &rhs) const {
    return !(rhs == *this);
}

const string &Example::getName() const {
    return name;
}

Example::~Example() {
    delete x;
    delete y;
}

Example::Example(Example &ex){
    name = ex.name;
    *x = *ex.x;
    *y = *ex.y;
}
