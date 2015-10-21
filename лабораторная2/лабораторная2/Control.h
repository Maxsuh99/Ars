#pragma once

class Control {
	int type;
public:
	enum {
		undeff = 0, button, radio_button, check_button, textbox
	};
	void create();
	Control();
	Control(int type_);
	Control(Control&Object);
	~Control();
	void setType(int type_);
	int getType();
	void printType();
};