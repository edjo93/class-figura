#include"Cuadrilatero.h"

#ifndef RECTANGULO_H
#define RECTANGULO_H
    class Rectangulo:public Cuadrilatero{
        private:

        public:

            Rectangulo(double,double);    
            Rectangulo();
            void setLados(double,double);
            //metodos virtuales
            virtual string toString();
            virtual double getPerimetro();
            virtual double getArea();
    };

#endif

