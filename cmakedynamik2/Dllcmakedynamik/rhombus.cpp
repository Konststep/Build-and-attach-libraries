#include <iostream>
#include <Windows.h>
#include "Figure.h"
#include "Quadrangle.h"
#include "rhombus.h"

rhombus::rhombus(double a, double A, double B) : Quadrangle(a, a, a, a, A, B, A, B) {
    name = "Ромб";
};
