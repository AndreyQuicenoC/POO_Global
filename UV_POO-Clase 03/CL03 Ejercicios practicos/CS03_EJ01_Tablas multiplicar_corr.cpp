// autor: Andrey Quiceno.
// contacto: adolfo.quiceno@correounivalle.edu.co
// fecha de creación: 06/09/23
// fecha última modificación: 11/09/23

/*Ejercicio 1: Desarrollar un programa que muestre en las tablas de multiplicar, de cero(0) a cinco(5)*/
#include<iostream>
using namespace std;

int tablas_multiplicar(int i, int j){
    int tabla=0; //Nombres suficientemente explícitos.

    tabla=i*j;

    return tabla;
}
string recorridos(int a){
    for (int i=1; i<=a;i++){ //iteradores i,j.
        cout<<i<<" 0 ";
        for(int j=1; j<=5;j++){
            cout<<tablas_multiplicar(i,j)<<" ";
        }
        cout<<endl;
    }
    return "";
}
int main(){
    // 1 - Parte que presenta la información.
    int a=5;

    cout<<"  0 1 2 3 4 5"<<endl;
    cout<<"0 0 0 0 0 0 0"<<endl;
    cout<<recorridos(a);

    //NT: Test unitario para probar salida.
    // - Salida esperada.

    return 0;
}