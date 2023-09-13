//Autor: Andrey Quiceno
//Correo: adolfoquiceno@correounivalle.edu.co
//Fecha creación: 2023-09-12
//Fecha última modificación: 2023-09-12

/*Ejercicio 5: Desarrolle un programa que permita 
identificar a partir de dos números ingresados
por el teclado, cuál es el mayor número o si los 
números son iguales.*/

#include <iostream>

using namespace std;

int mayor_igual(int a,int b){
  if(a>b){
    cout<<"El numero mayor es: "<<a<<endl;
  }else if(a<b){
    cout<<"El numero mayor es: "<<b<<endl;
  }else{
    cout<<"Los numeros son iguales"<<endl;
  }
  return 0;
}

string entrada_salida(){
  int a,b;
  cout<<"Digite el primer numero: "; cin>>a;
  cout<<"Digite el segundo numero: "; cin>>b;
  mayor_igual(a,b);
  return "";
}

int main() {
  entrada_salida();
}