//
// Created by Lenovo on 19.11.2021.
//
#ifndef JIPP2_TRIANGLE_H
#define JIPP2_TRIANGLE_H
#include <iostream>
#include "Node.h"

using namespace std;

class Triangle{
private:
    Node nodes[3];
    string name;

    friend ostream& operator<<(ostream &lhs, const Triangle &rhs);

public:
    Triangle(Node a, Node b, Node c, string name);
    void display() const;
    double distance(int firstPointIndex, int secondPointIndex);
};

void showTriangleData(Triangle triangle);
void showTriangleData(Triangle &triangle);
void showTriangleData(Triangle *triangle);

#endif //JIPP2_TRIANGLE_H
