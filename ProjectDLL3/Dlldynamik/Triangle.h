#ifndef TRIANGLE_H
#define TRIANGLE_H

#ifdef DLLDYNAMIK_EXPORTS
#define PROGECT_PROG __declspec(dllexport)
#else
#define PROGECT_PROG __declspec(dllimport)
#endif


class PROGECT_PROG Triangle : public Figure {
protected:
    double a{}, b{}, c{}; //стороны
    double A{}, B{}, C{}; //углы
public:
     Triangle(double a, double b, double c, double A, double B, double C);

     bool check();

     void print_info();
};

#endif