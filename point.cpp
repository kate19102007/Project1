#include "point.h"

Point::Point()
{
	x = 0.0;
	y = 0.0;

}

void Point::input()
{
	cin >> x >> y;
}

void Point::output() const
{
	cout << "(" << x << ", " << y << ")";
}

double Point::getX() const
{
	return x;

}

double Point::getY() const
{
	return y;
}

ostream& operator<<(ostream& os, const Point& p)
{
	os << "(" << p.getX() << ", " << p.getY() << ")";
	return os;
}

fstream& operator>>(fstream& in, Point& p)
{
	in >> p.x >> p.y;	
	return in;
}
