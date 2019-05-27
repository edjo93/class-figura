#include "Figura.h"

#ifndef CUADRILATERO_H
#define CUADRILATERO_H

class Cuadrilatero:public Figura{

    //private: deleted
    protected:
        double a,b,c,d;

    public: 
        Cuadrilatero();
        Cuadrilatero(double,double,double,double);
        
        //virtual double getArea();
        virtual double getPerimetro();
        virtual string toString();
        
        void setLados(double,double,double,double);



};


#endif
