#include <iostream>
#include <Windows.h>
#include "Figure.h"
#include "Quadrangle.h"
#include "parallelogram.h"

parallelogram::parallelogram(double a, double b, double A, double B) : Quadrangle(a, b, a, b, A, B, A, B) {
    name = "Параллелограмм";
};
