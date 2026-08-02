#include <iostream>
#include <Windows.h>
#include "Figure.h"
#include "Quadrangle.h"
#include "rhombus.h"
#include "square.h"

square::square(double a) : rhombus(a, 90, 90) {
    name = "Квадрат";
};
