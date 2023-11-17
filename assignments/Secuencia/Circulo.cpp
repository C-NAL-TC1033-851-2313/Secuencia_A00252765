#include "Circulo.hpp"

Circulo::Circulo():radio{1}{
}

Circulo::Circulo(double rad, Punto p):centro{p}{
    setRadio(rad);
}

void Circulo::setRadio(double rad){
    if (rad <= 0){
        radio = 1;
    }
    else{
        radio = rad;
    }
}

void Circulo::setCentro(Punto p){
    centro = p;
}

double Circulo::getRadio() const{
    return radio;
}

Punto Circulo::getCentro() const{
    return centro;
}

void Circulo::imprime() const{
    std::cout << "Circulo de radio=" << radio << " y centro en las coordenadas ";
    centro.imprime();
}

void Circulo::ubicacionPunto(Punto& otro){
    double dist = centro.distancia(otro);
    if(dist > radio){
        std::cout << "El otro punto está FUERA de la circunferencia" << std::endl;
    }
    else if(dist < radio){
        std::cout << "El otro punto está DENTRO de la circunferencia" << std::endl;
    }
    else{
        std::cout << "El otro punto está SOBRE de la circunferencia" << std::endl;
    }
}