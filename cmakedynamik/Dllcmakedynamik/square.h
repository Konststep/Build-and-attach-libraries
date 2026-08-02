#ifndef SQUARE_H
#define SQUARE_H

#ifdef SQUARE_H
#define PROGECT_PROG __declspec(dllexport)
#else
#define PROGECT_PROG __declspec(dllimport)
#endif
class PROGECT_PROG square : public rhombus {
public:
	 square(double a);

};
#endif