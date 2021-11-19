//
// Created by Lenovo on 19.11.2021.
//
#include "Node.h"

Node::Node() {
    x = 0;
    y = 0;
}

Node::Node(double x, double y): x(x), y(y) {
}

void Node::display() const {
    cout << "x = " << x << "\ty = " << y << endl;
}

void Node::updateValue(double x, double y){
    this->x = x;
    this->y = y;
}

double pointsDistance(Node a, Node b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

double Node::getX() const {
    return x;
}

double Node::getY() const {
    return y;
}


