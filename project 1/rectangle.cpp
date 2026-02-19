#include "rectangle.h"


Rectangle::Rectangle()
{
}

void Rectangle::input()
{
	cout << "Enter top left point (x y): ";
	topleft.input();
	cout << "Enter bottom right point (x y): ";
	bottomright.input();
}

double Rectangle::area() const
{
	double width = bottomright.getX() - topleft.getX();
	double height = topleft.getY() - bottomright.getY();
	return width * height;
}

void Rectangle::output() const
{
	cout << "Top Left: " << topleft << ", Bottom Right: " << bottomright << ", Area: " << area() << endl;
}

ostream& operator<<(ostream& os, const Rectangle& r)
{
	os << "Top Left: " << r.topleft << ", Bottom Right: " << r.bottomright << ", Area: " << r.area();
	return os;
}
