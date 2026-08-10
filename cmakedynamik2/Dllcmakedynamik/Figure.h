#ifndef FIGURE_H
#define FIGURE_H

#ifdef LEAVER_EXPORTS
#define LEAVER_API  __declspec(dllexport)
#else
#define LEAVER_API  __declspec(dllimport)
#endif
class LEAVER_API  Figure {
protected:
    std::string name;
public:

     bool check();
     void print_info();

};
#endif