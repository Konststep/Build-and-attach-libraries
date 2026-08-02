#include <iostream>
#include <Windows.h>
#include "Figure.h"
#include "Triangle.h"
#include "right_triangle.h"

right_triangle::right_triangle(double a, double b, double c, double A, double B) : Triangle(a, b, c, A, B, 90) {
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    name = "Прямоугольный треугольник";
    }
