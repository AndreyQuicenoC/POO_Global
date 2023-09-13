#include <iostream>
#include <string>
#include "mascota.h"
using namespace std;

mascota::mascota(){
    nombre="n.n";
    tipo="n/a";
    comio=false;
}

void mascota::saluda(){
    cout<<"Hola, lindo sía, soy tu mascota"<<nombre<<endl;
    cout<<"Tu mascota "<<tipo<<" te ama "<<endl;
}

void mascota::come(){
    if(comio=true){
        cout<<"Tu mascota "<<nombre<<" ya comió."<<endl;
    }else{
        cout<<"Tu mascota "<<nombre<<" ya comió."<<endl;
    }
}

void mascota::setComida(bool auxAlimentar){
    comio=auxAlimentar;
}

void mascota::setNombre(string auxNombre){
    tipo=auxNombre;
}

void mascota::setTipo(string auxTipo){
    tipo=auxTipo;
}

void mascota::darLaPata(){
    cout<<nombre<<" da la pata.";
}