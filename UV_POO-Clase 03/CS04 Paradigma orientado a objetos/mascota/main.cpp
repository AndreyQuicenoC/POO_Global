#include "mascota.h"
#include <iostream>

using namespace std;
int main(){
    mascota kira, simon, tamagochi; //constructor.
    kira.setNombre("Kira");
    kira.setTipo("perro");
    kira.saluda(); 
    kira.setComida(true);
    kira.come();    
    kira.darLaPata();

    simon.setNombre("Simon");
    simon.setTipo("gato");
    simon.setComida(true);
    simon.come(); 

    tamagochi.setNombre("Simon");
    tamagochi.setTipo("gato");
    tamagochi.setComida(true);
    tamagochi.come(); 

    //Agregar un sonido al tamagochi.
}