#ifndef ISOSCELES_TRIANGLE_H
#define ISOSCELES_TRIANGLE_H

#ifdef DLLDYNAMIK_EXPORTS
#define PROGECT_PROG __declspec(dllexport)
#else
#define PROGECT_PROG __declspec(dllimport)
#endif
class PROGECT_PROG isosceles_triangle : public right_triangle {
public:
	 isosceles_triangle(double a, double b, double A, double B);

};
#endif