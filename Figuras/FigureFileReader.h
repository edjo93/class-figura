#include"Circulo.h"
#include"Cuadrado.h"
#include"Rectangulo.h"
#include"Figura.h"//not necessary 
#include<vector>
using std::vector;
#include<fstream>
using std::ifstream;

#ifndef FIGUREFILEREADER_H
#define FIGUREFILEREADER_H
    class{
        private:
            ifstream file;
        public:
            void readCircles(char*,vector<Figura*>&);
            void readRectangles(char*,vector<Figura*>&);
            void readSquares(char*,vector<Figura*>&);
    };
#endif