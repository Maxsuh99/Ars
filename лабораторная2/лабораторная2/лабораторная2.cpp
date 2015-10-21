#include "stdafx.h"
#include"WindowViewer.h"
#include<iostream>
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	std::cout << "Создаём окно...\n\n";
	WindowViewer myWindow(1024, 768);
	std::cout << "\nИзменяем текст в textbox...\n\n";
	myWindow.getTextBox().setText("This is text in Textbox!!");
	myWindow.getTextBox().printText();
	std::cout << "\nУдаляем окно...\n\n";
	return 0;
}

