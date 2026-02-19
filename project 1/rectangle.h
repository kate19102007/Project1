#pragma once
#include "point.h"

class Rectangle {
	private: 
		Point topleft;
		Point bottomright;
public:
	Rectangle();

	void input();
	void output() const;
	double area() const;

	friend ostream& operator<<(ostream& os, const Rectangle& r);
};




