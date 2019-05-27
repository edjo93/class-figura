#ifndef FIGURA_H
#define FIGURA_H

#include <string>
using std::string;

class Figura{

    public:
        virtual double getArea()=0;//add virtual puro?
        virtual double getPerimetro();
        virtual string toString()=0;
};

#endif
