#include "stdafx.h"
#include"WindowViewer.h"
#include<iostream>
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	std::cout << "������ ����...\n\n";
	WindowViewer myWindow(1024, 768);
	std::cout << "\n�������� ����� � textbox...\n\n";
	myWindow.getTextBox().setText("This is text in Textbox!!");
	myWindow.getTextBox().printText();
	std::cout << "\n������� ����...\n\n";
	return 0;
}

