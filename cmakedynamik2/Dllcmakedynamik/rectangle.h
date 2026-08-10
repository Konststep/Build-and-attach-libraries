#ifndef RECTANGLE_H
#define RECTANGLE_H

#ifdef LEAVER_EXPORTS
#define LEAVER_API  __declspec(dllexport)
#else
#define LEAVER_API  __declspec(dllimport)
#endif
class LEAVER_API  rectangle : public Quadrangle {
public:
	 rectangle(double a, double b);

};
#endif