#include "Circulo.h"


Circulo::Circulo(){
    radio=0;
}

Circulo::Circulo(double r){
    radio=r;
}

double Circulo::getRadio(){ return radio; }

void Circulo::setRadio(double radio){ this->radio = radio; }

double Circulo::getArea(){
    return radio*radio*3.1416;
}

double Circulo::getPerimetro(){
    return 2*radio*3.1416;
}

string Circulo::toString(){
    string retval="El objeto es un círculo.";
    return retval;
}
