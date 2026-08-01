#include <iostream>
#include "StaticLib1.h"

void StaticLib::Greeter::greet(std::string name) {
	std::cout << "Здравствуйте, " << name << std::endl;
}
