//
// Created by Lenovo on 19.11.2021.
//
#include "Triangle.h"

void Triangle::display() const {
    cout << name << ": {A = (" << nodes[0].getX() << ", " << nodes[0].getY() << "), B = ("
         << nodes[1].getX() << ", " << nodes[1].getY() << "), C = (" << nodes[2].getX() << ", "
         << nodes[2].getY() << ")}" << endl;
}

ostream &operator<<(ostream &lhs, const Triangle &rhs) {
    lhs << rhs.name << ": {A = (" << rhs.nodes[0].getX() << ", " << rhs.nodes[0].getY() << "), B = ("
                    << rhs.nodes[1].getX() << ", " << rhs.nodes[1].getY() << "), C = (" << rhs.nodes[2].getX()
                    << ", " << rhs.nodes[2].getY() << ")}";
    return lhs;
}

Triangle::Triangle(Node a, Node b, Node c, string name): name(name){
    nodes[0] = a;
    nodes[1] = b;
    nodes[2] = c;
}

double Triangle::distance(int firstPointIndex, int secondPointIndex) {
    double dis;

    dis = pointsDistance(nodes[firstPointIndex], nodes[secondPointIndex]);

    return dis;
}

void showTriangleData(Triangle triangle) {
    triangle.display();
}

void showTriangleData(Triangle &triangle) {
    triangle.display();
}

void showTriangleData(Triangle *triangle) {
    triangle->display();
}
