#pragma once
#include "point.h"
#include <iostream>
#include <cmath>
using namespace std;
class rectangle {
private:
	point topL;
	point bottomR;
public:
	rectangle();
	rectangle(point x1, point y1);
	void input();
	void output() const;
	double area() const;
	void WriteToFile(ofstream& fout);
};