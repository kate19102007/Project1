#include "Header.h"

Point::Point()
{
	x = 0.0;
	y = 0.0;

}

Point::Point(double a, double b)
{
	x = a;
	y = b;
}

void Point::input()
{
	cout << "Enter x,y : ";
	cin >> x >> y;
	cout << endl;
}

void Point::print()
{
	cout << "X: " << x << endl;
	cout << "Y: " << y << endl;
}

double Point::getx() const
{
	return x;
}

double Point::gety() const
{
	return y;
}

Rectangle::Rectangle()
{
}

Rectangle::Rectangle(Point a, Point b)
{
	topLeft = a;
	bottomRight = b;
}

void Rectangle::input()
{

	cout << "Enter top left point (x y): ";
	topLeft.input();
	cout << "Enter bottom right point (x y): ";
	bottomRight.input();
}

void Rectangle::print()
{
	cout << "Top Left: " << topLeft << ", Bottom Right: " << bottomRight << ", Area: " << area() << endl;
}

ostream& operator<<(ostream& os, const Point& p)
{
	os << p.getx() << p.gety();
	return os;
}

fstream& operator>>(fstream& in, Point& p)
{
	in >> p.x >> p.y;
	return in;
}


double Rectangle::area() const
{
	double width = abs(bottomRight.getx() - topLeft.getx());
	double height = abs(topLeft.gety() - bottomRight.gety());
	return width * height;
}


ostream& operator<<(ostream& os, const Rectangle& r)
{
	os << "Top Left: " << r.topLeft << ", Bottom Right: " << r.bottomRight << ", Area: " << r.area();
	return os;
}

