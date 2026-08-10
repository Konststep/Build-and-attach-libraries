#ifndef TRIANGLE_H
#define TRIANGLE_H

#ifdef LEAVER_EXPORTS
#define LEAVER_API  __declspec(dllexport)
#else
#define LEAVER_API  __declspec(dllimport)
#endif
class LEAVER_API  Triangle : public Figure {
protected:
    double a{}, b{}, c{}; //стороны
    double A{}, B{}, C{}; //углы
public:
     Triangle(double a, double b, double c, double A, double B, double C);

     bool check();

     void print_info();
};

#endif