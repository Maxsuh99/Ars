#include"stdafx.h"
#include"Window.h"
#include<iostream>

void Window::create() {
	shape.setWidth(1024);
	shape.setHeight(512);
	std::cout << " Window created\n";
}

Window::Window() {
	create();
}

Window::Window(double width_, double height_) {
	create();
	shape.setWidth(width_);
	shape.setHeight(height_);
}

Window::Window(Window&Object) {
	create();
	shape.setWidth(Object.getShape().getWidth());
	shape.setHeight(Object.getShape().getHeight());
}

Window::~Window() {
	std::cout << " Window destroyed\n";
}

Rectangle&Window::getShape() {
	return shape;
}

void Window::setShape(double width_, double height_) {
	shape.setWidth(width_);
	shape.setHeight(height_);
}
