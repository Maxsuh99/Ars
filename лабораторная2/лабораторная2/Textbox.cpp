#include"stdafx.h"
#include"Textbox.h"
#include<iostream>

void Textbox::create() {
	shape.setWidth(512);
	shape.setHeight(256);
	std::cout << " Textbox created\n";
}

Textbox::Textbox() {
	create();
	text = new char[];
	text_length = 0;
}

Textbox::Textbox(char*text_) {
	create();
	text_length = strlen(text_);
	text = new char[text_length];
	for (int i = 0; i < text_length; i++) {
		text[i] = text_[i];
	}
}

Textbox::Textbox(Textbox&Object) {
	create();
	text_length = Object.getLength();
	text = new char[text_length];
	for (int i = 0; i < text_length; i++) {
		text[i] = Object.getChar(i);
	}
}

Textbox::~Textbox() {
	std::cout << " Textbox destroyed\n";
}

char*Textbox::getText() {
	return text;
}

char Textbox::getChar(int index) {
	if (index < 0 || index >= text_length) {
		return 0;
	}
	return text[index];
}

void Textbox::setText(char*text_) {
	delete[]text;
	text_length = strlen(text_);
	text = new char[text_length];
	for (int i = 0; i < text_length; i++) {
		text[i] = text_[i];
	}
}

int Textbox::getLength() {
	return text_length;
}

void Textbox::printText() {
	std::cout << " Text = ";
	for (int i = 0; i < text_length; i++) {
		std::cout << text[i];
	}
	std::cout << "\n";
}

Rectangle&Textbox::getShape() {
	return shape;
}

void Textbox::setShape(double width_, double height_) {
	shape.setWidth(width_);
	shape.setHeight(height_);
}
