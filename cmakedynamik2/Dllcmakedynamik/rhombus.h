#ifndef RHOMBUS_H
#define RHOMBUS_H

#ifdef LEAVER_EXPORTS
#define LEAVER_API  __declspec(dllexport)
#else
#define LEAVER_API  __declspec(dllimport)
#endif
class LEAVER_API  rhombus : public Quadrangle {
public:
	 rhombus(double a, double A, double B);

};
#endif