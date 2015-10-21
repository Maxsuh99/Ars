#pragma once
#include"Control.h"
#include"Rectangle.h"

class Button
	:public Control {
	char*title;
	int title_length;
	Rectangle shape;
public:
	void create();
	Button();
	Button(char*title_);
	Button(Button&Object);
	~Button();
	char*getTitle();
	char getChar(int index);
	void setTitle(char*title_);
	int getLength();
	void printTitle();
	Rectangle&getShape();
	void setShape(double width_, double height_);
};