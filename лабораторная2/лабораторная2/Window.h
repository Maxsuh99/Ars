#pragma once
#include"Rectangle.h"

class Window {
	Rectangle shape;

public:
	void create();
	Window();
	Window(double width_, double height_);
	Window(Window&Object);
	~Window();
	Rectangle&getShape();
	void setShape(double width_, double height_);
};