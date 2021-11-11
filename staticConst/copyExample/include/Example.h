//
// Created by Lenovo on 11.11.2021.
//

#ifndef JIPP2_EXAMPLE_H
#define JIPP2_EXAMPLE_H
#include <iostream>

using namespace std;

class Example{
private:
    double *x = new double;
    double *y = new double;
    string name;

public:
    /**
     * Create point in passed place
     * @param x x coordinate of point
     * @param y y coordinate of point
     * @param name name of point
     */
    Example(double x, double y, string name);

    /**
    * Create point in 0, 0
    * @param name name of point
    */
    Example(string name);

    Example(Example &ex);

    /**
     * Update name of point
     * @param name new point name
     */
    void setName(string name);

    /**
     * Get value of x
     * @return x
     */
    double getX() const;

    /**
     * Update x value
     * @param x new x value
     */
    void setX(double x);

    /**
     * Get value of y
     * @return y
     */
    double getY() const;

    /**
     * Update y value
     * @param y new y value
     */
    void setY(double y);

    /**
     * Print data about point (x and y)
     */
    void printData() const;

    bool operator==(const Example &rhs) const;

    bool operator!=(const Example &rhs) const;

    Example operator+=(const Example &rhs) const;

    Example operator+=(const double &rhs) const;

    const string &getName() const;

    ~Example();
};


#endif //JIPP2_EXAMPLE_H
