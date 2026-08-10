#ifndef SQUARE_H
#define SQUARE_H

#ifdef LEAVER_EXPORTS
#define LEAVER_API  __declspec(dllexport)
#else
#define LEAVER_API  __declspec(dllimport)
#endif
class LEAVER_API  square : public rhombus {
public:
	 square(double a);

};
#endif