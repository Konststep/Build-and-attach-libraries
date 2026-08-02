#ifndef RECTANGLE_H
#define RECTANGLE_H

#ifdef DLLDYNAMIK_EXPORTS
#define PROGECT_PROG __declspec(dllexport)
#else
#define PROGECT_PROG __declspec(dllimport)
#endif
class PROGECT_PROG rectangle : public Quadrangle {
public:
	 rectangle(double a, double b);

};
#endif