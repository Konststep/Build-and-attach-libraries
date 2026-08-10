#ifndef RIGHT_TRIANGLE_H
#define RIGHT_TRIANGLE_H

#ifdef LEAVER_EXPORTS
#define LEAVER_API  __declspec(dllexport)
#else
#define LEAVER_API  __declspec(dllimport)
#endif
class LEAVER_API  right_triangle : public Triangle {
public:
	 right_triangle(double a, double b, double c, double A, double B);

};
#endif