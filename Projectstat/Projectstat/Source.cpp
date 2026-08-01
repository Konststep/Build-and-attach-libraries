#include <iostream>
#include <clocale>
#include <string>
#include <Windows.h>
#include "StaticLib1.h"

int main()
{
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string name;
	std::cout << "Введите имя: ";
	std::cin >> name;

	StaticLib::Greeter::greet(name);
	return EXIT_SUCCESS;
}