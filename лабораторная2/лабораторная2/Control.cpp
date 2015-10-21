#include"stdafx.h"
#include"Control.h"
#include<iostream>

void Control::create() {
	std::cout << " Control created\n";
}

Control::Control() {
	create();
	type = 0;
}

Control::Control(int type_) {
	create();
	type = type_;
}

Control::Control(Control&Object) {
	create();
	type = Object.getType();
}

Control::~Control() {
	std::cout << " Control destroyed\n";
}

void Control::setType(int type_) {
	type = type_;
}

int Control::getType() {
	return type;
}

void Control::printType() {
	std::cout << " Type = ";
	switch (type) {
	case 1:
		std::cout << "Button";
		break;
	case 2:
		std::cout << "Radio button";
		break;
	case 3:
		std::cout << "Check button";
		break;
	case 4:
		std::cout << "Textbox";
		break;
	default:
		std::cout << "Unsigned";
		break;
	}
	std::cout << "\n";
}
