#ifndef QUADRANGLE_H
#define QUADRANGLE_H

#ifdef LEAVER_EXPORTS
#define LEAVER_API  __declspec(dllexport)
#else
#define LEAVER_API  __declspec(dllimport)
#endif
class LEAVER_API  Quadrangle : public Figure {
protected:
    double a{}, b{}, c{}, d{}; //стороны
    double A{}, B{}, C{}, D{}; //углы
public:
     Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D);
    
     bool check();
     void print_info();

};
#endif