#ifndef RIGHT_TRIANGLE_H
#define RIGHT_TRIANGLE_H

#ifdef DLLDYNAMIK_EXPORTS
#define PROGECT_PROG __declspec(dllexport)
#else
#define PROGECT_PROG __declspec(dllimport)
#endif
class PROGECT_PROG right_triangle : public Triangle {
public:
	 right_triangle(double a, double b, double c, double A, double B);

};
#endif