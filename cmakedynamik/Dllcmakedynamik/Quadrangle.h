#ifndef QUADRANGLE_H
#define QUADRANGLE_H

#ifdef QUADRANGLE_H
#define PROGECT_PROG __declspec(dllexport)
#else
#define PROGECT_PROG __declspec(dllimport)
#endif
class PROGECT_PROG Quadrangle : public Figure {
protected:
    double a{}, b{}, c{}, d{}; //стороны
    double A{}, B{}, C{}, D{}; //углы
public:
     Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D);
    
     bool check();
     void print_info();

};
#endif