#include "Rectangle.h"

Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(double xVal, double yVal)
{
	x = xVal;
	y = yVal;
}

Rectangle::Rectangle(Point tl, Point br)
{
	topLeft = tl;
	bottomRight = br;
}

void Point::input()
{
	cin >> x >> y;
}

void Rectangle::input()
{
	cout << "Enter top-left point(x, y): ";
	topLeft.input();
	cout << "Enter bottom-right point(x, y): ";
	bottomRight.input();
}


double Rectangle::area()
{
	double width = bottomRight.getX() - topLeft.getX();
	double height = topLeft.getY() - bottomRight.getY();
	return width * height;
}

void Rectangle::output()
{
	cout << "Rectangle: ";
	topLeft.output();
	cout << " ";
	bottomRight.output();
	cout << "Area: " << area() << endl;
}

void Rectangle::outputToFile(ofstream &out)
{
	out << "Rectangle: ";
	topLeft.outputToFile(out);
	out << " ";
	bottomRight.outputToFile(out);
	out << "Area: " << area() << endl;
}

void Point::output()
{
	cout << "(" << x << ", " << y << ")";
}

void Point::outputToFile(ofstream& out)
{
	out<< "(" << x << ", " << y << ")";
}

double Point::getX()
{
	return x;
}

double Point::getY()
{
	return y;
}
