// autor: Andrey Quiceno.
// contacto: adolfo.quiceno@correounivalle.edu.co
// fecha de creación: 06/09/23
// fecha última modificación: 11/09/23

#include<iostream>
using namespace std;

int tablas_multiplicar(){
    /*Hacer arfchivo de txt y comparar salida en Diff Checker:
      - De esta manera trabajan los servidores de programación parea analizar el código.
      NT: Cada cosa debe cumplir su funcion particular, single responsability.*/

    int tabla=0; //Nombres suficientemente explícitos.

    cout<<"  0 1 2 3 4 5"<<endl;
    cout<<"0 0 0 0 0 0 0"<<endl;

    for (int i=1; i<=5;i++){ //iteradores i,j.
        cout<<i<<" 0 ";
        for(int j=1; j<=5;j++){
            tabla=i*j;
            cout<<tabla<<" ";
        }
        cout<<endl;
    }
    return tabla;
}

int main(){
    tablas_multiplicar(); //LLamar la función.
}
