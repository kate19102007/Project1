#pragma once
#include <iostream>
#include <fstream>
using namespace std;


class Point {
private:
	double x;
	double y;

public:
	Point();
	Point(double xVal, double yVal);

	void input();
	void output();
	void outputToFile(ofstream& out);

	double getX();
	double getY();

};
	

class Rectangle {
		Point topLeft;
		Point bottomRight;
	public:
		Rectangle(Point tl, Point br);

		void input();
		double area();
		void output();
		void outputToFile(ofstream& out);
	

};
