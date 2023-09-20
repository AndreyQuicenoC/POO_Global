#include "Bombillo.h"
#ifndef _ENCENDEDOR_H_
#define _ENCENDEDOR_H_
//archivo .h sirve para definir la clase

class Encendedor{
//Encapsulamiento encendido solo se puede modificar desde la clase
private:

char posicion;//Toma valores de E para encendido y A para apagado
//Encapsulamient y todo los que esta en publico se puede operar desde fuera de la case
public:
//contructor
  Encendedor();

//dos métodos publicos que no retornan nada por que son de tipo void
  void presionar();
  Bombillo presionar(Bombillo aux);
  void imprimir();
};

#endif