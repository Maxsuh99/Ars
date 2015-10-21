#include"stdafx.h"
#include"Button.h"
#include<iostream>

void Button::create() {
	shape.setWidth(512);
	shape.setHeight(256);
	std::cout << " Button created\n";
}

Button::Button() {
	create();
	title = new char[];
	title_length = 0;
}

Button::Button(char*title_) {
	create();
	title_length = strlen(title_);
	title = new char[title_length];
	for (int i = 0; i < title_length; i++) {
		title[i] = title_[i];
	}
}

Button::Button(Button&Object) {
	create();
	title_length = Object.getLength();
	title = new char[title_length];
	for (int i = 0; i < title_length; i++) {
		title[i] = Object.getChar(i);
	}
}

Button::~Button() {
	std::cout << " Button destroyed\n";
}

char*Button::getTitle() {
	return title;
}

char Button::getChar(int index) {
	if (index < 0 || index >= title_length) {
		return 0;
	}
	return title[index];
}

void Button::setTitle(char*text_) {
	delete[]title;
	title_length = strlen(text_);
	title = new char[title_length];
	for (int i = 0; i < title_length; i++) {
		title[i] = text_[i];
	}
}

int Button::getLength() {
	return title_length;
}

void Button::printTitle() {
	std::cout << " Title = ";
	for (int i = 0; i < title_length; i++) {
		std::cout << title[i];
	}
	std::cout << "\n";
}

Rectangle&Button::getShape() {
	return shape;
}

void Button::setShape(double width_, double height_) {
	shape.setWidth(width_);
	shape.setHeight(height_);
}
