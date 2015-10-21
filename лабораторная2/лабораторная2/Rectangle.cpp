#include"stdafx.h"
#include"Rectangle.h"
#include"Figure.h"
#include<iostream>

void Rectangle::create() {
	std::cout << " Rectangle created\n";
}

Rectangle::Rectangle() {
	create();
	width = 10;
	height = 7;
	setArea(width * height);
}

Rectangle::Rectangle(double width_, double height_) {
	create();
	width = width_;
	height = height_;
	setArea(width * height);
}

Rectangle::Rectangle(Rectangle&Object) {
	create();
	width = Object.width;
	height = Object.height;
	setArea(width * height);
}

Rectangle::~Rectangle() {
	std::cout << " Rectangle destroyed\n";
}

double Rectangle::getHeight() {
	return height;
}

void Rectangle::setHeight(double height_) {
	height = height_;
	setArea(width * height);
}

double Rectangle::getWidth() {
	return width;
}

void Rectangle::setWidth(double width_) {
	width = width_;
	setArea(width * height);
}

void Rectangle::printRectangle() {
	std::cout << " Width = " << width << "\n Height = " << height << "\n";
}