#pragma once

class Figure {
	double area;
public:
	void create();
	Figure();
	Figure(double area_);
	Figure(Figure&Object);
	~Figure();
	double getArea();
	void setArea(double area_);
	void printFigure();
};