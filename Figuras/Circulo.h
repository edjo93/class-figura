#include "Figura.h"

#ifndef CIRCULO_H
#define CIRCULO_H

#include <string>
using std::string;

class Circulo:public Figura{

    private:
        double radio;

    public:
        Circulo();
        Circulo(double);
        
        double getRadio();
        void setRadio(double);

        virtual double getArea();
        virtual double getPerimetro();
        virtual string toString();


};

#endif
