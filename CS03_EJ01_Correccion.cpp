#include<iostream>
using namespace std;
//Los archivos principales deben tener una cabecera:
// autor: Andrey Quiceno.
// contacto: adolfo.quiceno@correounivalle.edu.co
// fecha última modificación: 06/09/23

int tablas_multiplicar(int i, int j){
    int tabla=0; //Nombres suficientemente explícitos.

    tabla=i*j;

    return tabla;
}
int recorridos(int a){
    for (int i=1; i<=a;i++){ //iteradores i,j.
        cout<<i<<" 0 ";
        for(int j=1; j<=5;j++){
            cout<<tablas_multiplicar(i,j)<<" ";
        }
        cout<<endl;
    }
}
int main(){
    // 1 - Parte que presenta la información.
    int a=6;

    cout<<"  0 1 2 3 4 5"<<endl;
    cout<<"0 0 0 0 0 0 0"<<endl;
    cout<<recorridos(a);
    cout<<endl;

    //NT: Test unitario para probar salida.
    // - Salida esperada.
}