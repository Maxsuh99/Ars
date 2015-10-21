#pragma once
#include"Window.h"
#include"Button.h"
#include"Textbox.h"

class WindowViewer:
	public Window {
	Button button;
	Textbox text_box;
	Rectangle shape;
public:
	void create();
	WindowViewer();
	WindowViewer(double width_, double height_);
	WindowViewer(WindowViewer&Object);
	~WindowViewer();
	Button&getButton();
	Textbox&getTextBox();
	Rectangle&getShape();
};