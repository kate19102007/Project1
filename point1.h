#pragma once
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
class point {
private:
	double x;
	double y;
public:
	point();
	point(double, double);
	double getx()const;
	double gety()const;
	void input();
	void output() const;
};
