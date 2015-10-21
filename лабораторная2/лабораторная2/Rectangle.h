#pragma once
#include"Figure.h"

class Rectangle: public Figure {
	double width, height;
public:
	void create();
	Rectangle();
	Rectangle(double width_, double height_);
	Rectangle(Rectangle&Object);
	~Rectangle();
	double getWidth();
	void setWidth(double width_);
	double getHeight();
	void setHeight(double height_);
	void printRectangle();
};