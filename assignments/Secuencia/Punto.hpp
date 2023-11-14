// Directiva de preprocesado previene que se ponga mas de una vez en memoria
# pragma once
#include <iostream>

class Punto{
    public:
        Punto(); //Constructor Default
        Punto(double, double); //constructor con parámetros
        double getX() const;
        double getY() const;
        void setX(double);
        void setY(double);
        void imprime() const;
        double distancia(Punto&);
    private:
        double x;
        double y;
};