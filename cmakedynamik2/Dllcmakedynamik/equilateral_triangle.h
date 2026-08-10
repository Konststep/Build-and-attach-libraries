#ifndef EQUILATERAL_TRIANGLE_H
#define EQUILATERAL_TRIANGLE_H

#ifdef LEAVER_EXPORTS
#define LEAVER_API  __declspec(dllexport)
#else
#define LEAVER_API  __declspec(dllimport)
#endif
class LEAVER_API  equilateral_triangle : public isosceles_triangle {
public:
	 equilateral_triangle(double a);

};
#endif