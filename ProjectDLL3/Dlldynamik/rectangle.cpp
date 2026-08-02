#include <iostream>
#include <Windows.h>
#include "Figure.h"
#include "Quadrangle.h"
#include "rectangle.h"

rectangle::rectangle(double a, double b) : Quadrangle(a, b, a, b, 90, 90, 90, 90) {
    name = "прямоугольник ";
};

