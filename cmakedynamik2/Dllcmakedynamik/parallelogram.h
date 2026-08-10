#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#ifdef LEAVER_EXPORTS
#define LEAVER_API  __declspec(dllexport)
#else
#define LEAVER_API  __declspec(dllimport)
#endif
class LEAVER_API  parallelogram : public Quadrangle {
public:
	 parallelogram(double a, double b, double A, double B);

};
#endif