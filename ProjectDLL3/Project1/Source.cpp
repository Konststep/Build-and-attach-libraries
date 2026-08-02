#include <iostream>
#include <clocale>
#include <string>
#include <Windows.h>
#include "Figure.h"
#include "Triangle.h"
#include "right_triangle.h"
#include "isosceles_triangle.h"
#include "equilateral_triangle.h"
#include "Quadrangle.h"
#include "rectangle.h"
#include "parallelogram.h"
#include "rhombus.h"
#include "square.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Triangle Triangle{ 10, 20, 30, 50, 60, 70 };
    Triangle.print_info();
    right_triangle right_triangle{ 10, 20, 30, 50, 60 };
    right_triangle.print_info();
    isosceles_triangle isosceles_triangle{ 10, 20, 50, 60 };
    isosceles_triangle.print_info();
    equilateral_triangle equilateral_triangle{ 30 };
    equilateral_triangle.print_info();

    Quadrangle Quadrangle{ 10, 20, 30, 40, 50, 60, 70,80 };
    Quadrangle.print_info();
    rectangle rectangle{ 10, 20 };
    rectangle.print_info();
    parallelogram parallelogram{ 20, 30, 30, 40 };
    parallelogram.print_info();
    rhombus rhombus{ 30, 30, 40 };
    rhombus.print_info();
    square square{ 20 };
    square.print_info();

    return EXIT_SUCCESS;
}