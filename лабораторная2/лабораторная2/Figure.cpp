#include"stdafx.h"
#include"Figure.h"
#include<iostream>

void Figure::create() {
	std::cout << " Figure Created\n";
}

Figure::Figure() {
	create();
	area = 70;
}

Figure::Figure(double area_) {
	create();
	area = area_;
}

Figure::Figure(Figure&Object) {
	create();
	area = Object.area;
}

Figure::~Figure() {
	std::cout << " Figure destroyed\n";
}

double Figure::getArea() {
	return area;
}

void Figure::setArea(double area_) {
	area = area_;
}

void Figure::printFigure() {
	std::cout << " Area = " << area << "\n";
}