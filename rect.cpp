#include "rect.h"
rectangle::rectangle()
{
}

rectangle::rectangle(point x1, point y1)
{
	topL = x1;
	bottomR = y1;
}

void rectangle::input() 
{
	cout << "top left:\n";
	topL.input();
	cout << "bottom right:\n";
	bottomR.input();
}

void rectangle::output() const
{
	cout << "Rectangle: ";
	topL.output();
	cout << " - ";
	bottomR.output();
	cout << ", area= " << area() << endl;

}

double rectangle::area() const
{
	double w = fabs(bottomR.getx() - topL.getx());
	double h = fabs(topL.gety() - bottomR.gety());
	return w * h;
}
void rectangle::WriteToFile(ofstream& fout)
{
	fout << topL.getx() << " " << topL.gety() << " ";
	fout << bottomR.getx() << " " << bottomR.gety() << " ";
	fout << "Area " << area() << endl;
}