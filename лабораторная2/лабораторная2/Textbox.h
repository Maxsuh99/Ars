#pragma once
#include"Control.h"
#include"Rectangle.h"

class Textbox
	:public Control {
	char*text;
	int text_length;
	Rectangle shape;
public:
	void create();
	Textbox();
	Textbox(char*text_);
	Textbox(Textbox&Object);
	~Textbox();
	char*getText();
	char getChar(int index);
	void setText(char*text_);
	int getLength();
	void printText();
	Rectangle&getShape();
	void setShape(double width_, double height_);
};