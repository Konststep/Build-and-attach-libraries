#ifndef RHOMBUS_H
#define RHOMBUS_H

#ifdef DLLDYNAMIK_EXPORTS
#define PROGECT_PROG __declspec(dllexport)
#else
#define PROGECT_PROG __declspec(dllimport)
#endif
class PROGECT_PROG rhombus : public Quadrangle {
public:
	 rhombus(double a, double A, double B);

};
#endif