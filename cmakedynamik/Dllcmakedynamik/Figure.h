#ifndef FIGURE_H
#define FIGURE_H

#ifdef FIGURE_H
#define PROGECT_PROG __declspec(dllexport)
#else
#define PROGECT_PROG __declspec(dllimport)
#endif
class PROGECT_PROG Figure {
protected:
    std::string name;
public:

     bool check();
     void print_info();

};
#endif