#pragma once
#include "Punto.hpp"

class Circulo{
    public:
        Circulo();
        Circulo(double, Punto);
        double getRadio() const;
        Punto getCentro() const;
        void setRadio(double);
        void setCentro(Punto);
        void imprime() const;
        void ubicacionPunto(Punto&);
    private:
        double radio;
        Punto centro;
};