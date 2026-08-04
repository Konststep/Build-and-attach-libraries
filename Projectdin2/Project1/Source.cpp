#include <iostream>
#include <clocale>
#include <string>
#include <Windows.h>
#include "Dlldynamik.h"

int main()
{
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string name;
	std::cout << "Введите имя: ";
	std::cin >> name;

	Dlldynamika::Leaver P1{};
	P1.leave(name);
	return EXIT_SUCCESS;
}