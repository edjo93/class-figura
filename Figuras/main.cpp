#include "Figura.h"
#include "Circulo.h"
#include"Rectangulo.h"
#include"FigureFileReader.h"

#include  <iostream>
using std::cout;
using std::endl;

#include <typeinfo>

#include <vector>
using std::vector;


int main(){
    /*
    Figura* circulo=new Circulo(10);

    cout<<"El área es: "<<circulo->getArea()<<endl;

    cout<<"El tipo de la variable es: "<<typeid(*circulo).name()<<endl;

    //validar el tipo de dato
    if(typeid(Circulo) == typeid(*circulo)){
        cout<<"Es un círculo."<<endl;
    }

    //otra forma: obtener un apuntador tipo circulo
    if(true){
        Circulo* circulo2 = dynamic_cast<Circulo*>(circulo);

        cout<<"El radio es: "<<circulo2->getRadio()<<endl;
    }

    delete circulo; 
*/

    //22-05-2019
    //buenas prácticas vectores con apuntadores
    //declarar vector

    /*
    vector<Figura*> figuras;
    //insertar elementos
    figuras.push_back(new Circulo(10));
    figuras.push_back(new Circulo(20));
    figuras.push_back(new Circulo(30));
    //hacer algo 
    double totalArea=0;
    for(int i =0;i<figuras.size();i++)
        totalArea+=figuras[i]->getArea();

    cout<<"El área total es: "<<totalArea<<endl;

    //liberar memoria
    for(int i=0;i<figuras.size();i++)
        delete figuras[i];

    //opcional: borrar casillas (depende de si se usará el vector nuevamente) 
    figuras.clear();
    */

    //27-05-2019
    //probar Rectangulo
    //    Rectangulo*r=new Rectangulo(5,10);//buena practica crear un objeto para que el compilador no lo ignore
    //  delete r;
    //30-5-2019
    //instanciar vector de figuras
    vector<Figura*> figuras;
    //instanciar clase reader
    FigureFileReader* figureReader=new FigureFileReader();

    figureReader->readCircles("circulos.txt",figuras);
    //TODO: leer cuadrados y rectangulos

    double totalArea=0;

    for(int i=0;i<figuras.size();i++)
        totalArea+=figuras[i]->getArea();
    
    cout<<"el area total es: "<<totalArea<<endl;

    //liberar memoria
    delete figureReader;

    for(int i=0;i<figuras.size();i++)
        delete figuras[i];
    
    figuras.clear();

    return 0;
}
