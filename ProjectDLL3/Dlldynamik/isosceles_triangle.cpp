#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "right_triangle.h"
#include "isosceles_triangle.h"


isosceles_triangle::isosceles_triangle(double a, double b, double A, double B) : right_triangle(a, b, a, A, B) {
	name = "Равнобедренный треугольник:";
};
