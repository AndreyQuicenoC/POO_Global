// autor: Andrey Quiceno.
// contacto: adolfo.quiceno@correounivalle.edu.co
// fecha de creación: 06/09/23
// fecha última modificación: 11/09/23

/*Desarrolle un programa que permita almacenar las calificaciones de un estudiante y al final muestre en pantalla la nota final.
Para realizar este ejercicio se debe tener en cuenta:
    ● La calificación final de un estudiante es la media ponderada de tres notas:
    prácticas, prueba teórica y participación.
    ● La nota de prácticas corresponde al 30% del total de la nota.
    ● La nota teórica corresponde al 60% de la nota.
    ● La participación corresponde al 10% restante.
Utilice condicionales para evitar que el usuario ingrese valores negativos o fuera del rango establecido para las calificaciones.*/

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
    return nota;
}

float entrada_salida(){
    int condicion=0, detenerCiclo=1;
    float definitiva=0, acumulador=0, array[35];
    do{
        float nota_practica = 0, nota_teorica = 0, nota_participacion = 0;

        cout<<"Digite la nota de practica: "; cin>>nota_practica;
        nota_practica = comprobar_valor(nota_practica);
        cout<<"Digite la nota teorica: "; cin>>nota_teorica;
        nota_teorica = comprobar_valor(nota_teorica);
        cout<<"Digite la nota de participación: "; cin>>nota_participacion;
        nota_practica = comprobar_valor(nota_practica);

        float resultado = calculo(nota_practica, nota_teorica, nota_participacion);
        cout<<"La nota final es: "<<resultado<<endl;

        cout<<"¿Desea añadir otro estudiante? (1. Si, 2. No) "; cin>>detenerCiclo;
        array[condicion]=resultado;
        condicion=condicion+1;
    }while(condicion<35 and detenerCiclo==1);
    
    for(int i=0;i<condicion;i++){
        acumulador=acumulador + array[i];
    }

    definitiva=(acumulador/condicion);
    cout<<"La nota final del curso es: "<<definitiva<<endl;
    return definitiva;
}

int main(){ 
    entrada_salida();
}