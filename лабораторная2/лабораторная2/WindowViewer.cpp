#include"stdafx.h"
#include"WindowViewer.h"
#include<iostream>

void WindowViewer::create() {
	std::cout << " WindowViewer created\n\n";
	shape.setWidth(768);
	shape.setHeight(384);
}

WindowViewer::WindowViewer() {
	create();
}

WindowViewer::WindowViewer(double width_, double height_) {
	create();
	shape.setWidth(width_);
	shape.setHeight(height_);
}

WindowViewer::~WindowViewer() {
	std::cout << " WindowViewer destroyed\n";
}

WindowViewer::WindowViewer(WindowViewer&Object) {
	create();
	shape.setWidth(Object.getShape().getWidth());
	shape.setHeight(Object.getShape().getHeight());
	button = Object.getButton();
	text_box = Object.getTextBox();
}

Button&WindowViewer::getButton() {
	return button;
}

Textbox&WindowViewer::getTextBox() {
	return text_box;
}

Rectangle&WindowViewer::getShape() {
	return shape;
}
