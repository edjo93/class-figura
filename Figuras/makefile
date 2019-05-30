main: Figura.o main.o Circulo.o Rectangulo.o Cuadrilatero.o FigureFileReader.o
	g++ main.o Figura.o Circulo.o Cuadrilatero.o Rectangulo.o FigureFileReader.o -o figuras

FileReader.o: FigureFileReader.cpp
	g++ -c FigureFilereader.cpp

Figura.o: Figura.cpp Rectangulo.cpp Circulo.cpp Cuadrilatero.cpp
	g++ -c Rectangulo.cpp Figura.cpp Circulo.cpp Cuadrilatero.cpp

main.o: main.cpp
	g++ -c main.cpp