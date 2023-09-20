#include "Encendedor.h"
#include "Bombillo.h"
#include <iostream>
using namespace std;
//archivo .cpp  sirve para implementar la clase
Encendedor::Encendedor(){
  posicion='A';
}
void Encendedor::presionar(){
   if(posicion=='A') posicion = 'E';
   else posicion ='A';
}


Bombillo Encendedor::presionar(Bombillo auxBombillo){
 if(posicion=='A') {
   posicion = 'E';
   auxBombillo.encender();
 }
 else{
   posicion ='A';
   auxBombillo.apagar();
 }
  return auxBombillo;
}

void Encendedor::imprimir(){
  cout<< posicion<<endl;
}