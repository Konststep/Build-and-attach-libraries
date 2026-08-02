#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include <Windows.h>

    Triangle::Triangle(double a, double b, double c, double A, double B, double C) : a(a), b(b), c(c), A(A), B(B), C(C) {
        name = "Треугольник";
    }

    bool Triangle::check() {
        if (a <= 0 || b <= 0 || c <= 0) {
            return false;
        }
        if ((A + B + C) != 180) {
            return false;
        }
        return true;
    };

    void Triangle::print_info() {
        
        std::cout << "Название: " << name << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;

        if (Triangle::check()) {
            std::cout << "Фигура корректна" << std::endl;
        }
        else {
            std::cout << "Фигура НЕкорректна" << std::endl;
        }
    };

