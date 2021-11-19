//
// Created by Lenovo on 19.11.2021.
//

#ifndef JIPP2_NODE_H
#define JIPP2_NODE_H
#include <iostream>
#include <cmath>

using namespace std;

class Node{
private:
    double x, y;
    friend double pointsDistance(Node a, Node b);

public:
    Node();
    Node(double x, double y);

    void display() const;
    double getX() const;
    double getY() const;

    void updateValue(double x, double y);
};

#endif //JIPP2_NODE_H
