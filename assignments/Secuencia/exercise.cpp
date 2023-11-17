#include <iostream>
#include "Circulo.hpp"
using namespace std;

int main() 
{
  Punto p; //Creación de un objeto con el constructor default
  Punto p1{5,0};
  /*cout << "Punto creado con el constructor default" << endl;
  p.imprime();
  cout << "Punto creado con el constructor con parámetros" << endl;
  p1.imprime();
  p.setX(5);
  p.imprime();
  double dist = p1.distancia(p);
  cout << "La distancia entre los dos puntos es " << dist << endl;*/
  Circulo c1;
  Circulo c2(5, Punto{0,0});
  Circulo c3(3, p1);
  c1.imprime();
  c2.imprime();
  c3.imprime();
  c2.ubicacionPunto(p1);
}
