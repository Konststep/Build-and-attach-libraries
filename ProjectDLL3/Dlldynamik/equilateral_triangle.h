#ifndef EQUILATERAL_TRIANGLE_H
#define EQUILATERAL_TRIANGLE_H

#ifdef DLLDYNAMIK_EXPORTS
#define PROGECT_PROG __declspec(dllexport)
#else
#define PROGECT_PROG __declspec(dllimport)
#endif
class PROGECT_PROG equilateral_triangle : public isosceles_triangle {
public:
	 equilateral_triangle(double a);

};
#endif