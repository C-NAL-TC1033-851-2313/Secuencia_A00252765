#include <cmath>
#include "Punto.hpp"

//Constructor default
Punto::Punto():x{1},y{1}{
}

//Constructor parámetros
Punto::Punto(double valX, double valY):x{valX}, y{valY}{
}

//Getters
double Punto::getX() const{
    return x;
}

double Punto::getY() const{
    return y;
}

//Setters o modificadores

void Punto::setX(double valX){
    x = valX;
}

void Punto::setY(double valY){
    x = valY;
}

//Método imprime
void Punto::imprime() const{
    std::cout << "x -> " << x << " y -> " << y << std::endl;
}

double Punto::distancia(Punto& otro){
    return sqrt(pow(x-otro.x,2) + pow(y-otro.y,2));
}