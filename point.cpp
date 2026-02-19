#include "point.h"

point::point()
{
	x = 0;
	y = 0;
}

point::point(double x1, double y1)
{
	x = x1;
	y = y1;
}

void point::input()
{
	cout << "Enter x: "; cin >> x;
	cout << "Enter y: "; cin >> y;
}

void point::output() const
{
	cout << "( " << x << ", " << y << " )";
}

double point::getx() const
{
	return x;
}

double point::gety() const
{
	return y;
}
