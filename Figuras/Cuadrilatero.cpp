#include "Cuadrilatero.h"

Cuadrilatero::Cuadrilatero(){
    a=b=c=d=0;
}


Cuadrilatero::Cuadrilatero(double A, double B, double C, double D){
    a=A;
    b=B;
    c=C;
    d=D;
}

double Cuadrilatero::getPerimetro(){
    return a+b+c+d;
}

string Cuadrilatero::toString(){
    return "Es un cuadrilatero";
}

void Cuadrilatero::setLados(double A, double B, double C, double D){
    a=A;
    b=B;
    c=C;
    d=D;
}
