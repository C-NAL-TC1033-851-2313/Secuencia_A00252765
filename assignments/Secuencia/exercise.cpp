#include <iostream>
#include "Punto.hpp"
using namespace std;

int main() 
{
  Punto p; //Creación de un objeto con el constructor default
  Punto p1{4.5,5.3};
  cout << "Punto creado con el constructor default" << endl;
  p.imprime();
  cout << "Punto creado con el constructor con parámetros" << endl;
  p1.imprime();
  p.setX(5);
  p.imprime();
  double dist = p1.distancia(p);
  cout << "La distancia entre los dos puntos es " << dist << endl;
}
