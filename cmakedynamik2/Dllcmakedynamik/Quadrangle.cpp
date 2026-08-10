#include <iostream>
#include <Windows.h>
#include "Figure.h"
#include "Quadrangle.h"


Quadrangle::Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D) : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {
    name = "Четырехугольник";
};
bool Quadrangle::check() {
    if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
        return false;
    }
    if ((A + B + C + D) != 360) {
        return false;
    }
    return true;
};

void Quadrangle::print_info() {
    std::cout << "Название: " << name << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;

    if (Quadrangle::check()) {
        std::cout << "Фигура корректна" << std::endl;
    }
    else {
        std::cout << "Фигура НЕкорректна" << std::endl;
    }
};

