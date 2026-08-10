#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "right_triangle.h"
#include "isosceles_triangle.h"
#include "equilateral_triangle.h"

equilateral_triangle::equilateral_triangle(double a) : isosceles_triangle(a, a, a, 60) {
        name = "Равносторонний треугольник:";
    }


