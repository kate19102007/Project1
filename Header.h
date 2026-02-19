#pragma once
#include<iostream>
#include<fstream>
#include<cmath>

using namespace std;

class Point {
private:
	double x, y;	
public:
	Point();
	Point(double a, double b);

	void input();
	void print();
	double getx() const;
	double gety() const;
	friend ostream& operator<<(ostream& os,const Point& p);
	friend fstream& operator>>(fstream& in, Point& p);

};

class Rectangle : public Point {
private:
	Point topLeft, bottomRight;
public:
	Rectangle();
	Rectangle(Point a, Point b);

	void input();
	void print();

	
	double area() const ;
	friend ostream& operator<<(ostream& os, const Rectangle& r);
	
};
