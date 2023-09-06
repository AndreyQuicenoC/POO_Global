#include<iostream>
using namespace std;

float calculo(float nota_practica, float nota_teorica, float nota_participacion){
    float nota_final;
    nota_final = (nota_practica*0.30) + (nota_teorica*0.60) + (nota_participacion*0.10);
    return nota_final;
}
float comprobar_valor(float nota){
    while(nota < 0 or nota > 5){
        cout<<"Digite una nota válida (rango de 0 a 5): "; cin>>nota;
    }
}
float entrada(){
    int condicion=1, i=0, array[35];
    do{
        float nota_practica = 0, nota_teorica = 0, nota_participacion = 0;
        cout<<"Digite la nota de practica:"; cin>>nota_practica;
        nota_practica = comprobar_valor(nota_practica);
        cout<<"Digite la nota teorica: "; cin>>nota_teorica;
        nota_teorica = comprobar_valor(nota_teorica);
        cout<<"Digite la nota de participación: "; cin>>nota_participacion;
        nota_practica = comprobar_valor(nota_practica);
        float resultado = calculo(nota_practica, nota_teorica, nota_participacion);
        cout<<"La nota final es: "<<resultado<<endl;
        cout<<"¿Desea añadir otro estudiante?"; cin>>condicion;
        array[i]=resultado;
        condicion=condicion+1;
    }while(condicion<=35);
    
}


int main(){ 
    entrada();
}