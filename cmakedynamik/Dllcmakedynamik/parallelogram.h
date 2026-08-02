#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#ifdef PARALLELOGRAM_H
#define PROGECT_PROG __declspec(dllexport)
#else
#define PROGECT_PROG __declspec(dllimport)
#endif
class PROGECT_PROG parallelogram : public Quadrangle {
public:
	 parallelogram(double a, double b, double A, double B);

};
#endif