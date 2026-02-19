#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Point {
private:
    double x, y;
public:
    Point();
    void input();
    void output() const;

    double getX() const;
    double getY() const;

    friend ostream& operator<<(ostream& os, const Point& p);
    friend fstream& operator>>(fstream& in, Point& p);
};