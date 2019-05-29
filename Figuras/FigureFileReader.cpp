#include"FigureFileReader.h"

void FigureFileReader::readCircles(char*fileName,vector<Figura*>& figuras){
    //abrir el archivo
    file.open(fileName);    
    //revisar si el archivo esta abierto
    if(file.is_open()){
        //leer circulos del archivo
        double radio;
        while(file>>radio){
            figuras.push_back(new Circulo(radio));
        }
    }
    //cerrar el archivo
    file.close;

}