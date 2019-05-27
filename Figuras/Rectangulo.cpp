#include"Rectangulo.h"

Rectangulo::Rectangulo(){
    a=b=c=d=0;
}
Rectangulo::Rectangulo(double rA,double rB):Cuadrilatero(rA,rB,rA,rB){
    //llamar al constructor de la clase padre
}

void Rectangulo::setLados(double rA,double rB){
    dynamic_cast<Cuadrilatero*>(this)->setLados(rA,rB,rA,rB);//llamr metodo heredado de la clase padre
}
double Rectangulo::getArea(){
    return a*b;
}
double Rectangulo::getPerimetro(){
    return a*2+b*2;
}
string Rectangulo::toString(){
    return "el objeto es un rectangulo";
}
