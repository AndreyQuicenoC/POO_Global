/*
Autor: Andrey Quiceno
Correo: adolfoquiceno@correounivalle.edu.co
Fecha creación: 2023-09-12
Fecha última modificación: 2023-09-12
*/
#include <iostream>
using namespace std;
/*
Para un número entero de hasta 10 digitos, saque la frecuencia de cada uno de ellos.
    Entrada Ejemplo 1   133434279
*/

int main(){
    char operacion[30];
    cout<<"Ingresa la frase"<<endl;
    cin.getline(operacion,30);
 
    for(int i=0; i<30; i++){
        char c=operacion[i];
        switch(c){
            case 'h':cout<<"Imprime la h"<<endl;
            break;
            case 'o':cout<<"Imprime la o"<<endl;
            break;
            case 'l':cout<<"Imprime la l"<<endl;
            break;
            case 'a':cout<<"Imprime la a"<<endl;
            break;
            case '+':cout<<"Imprime la +"<<endl;
            break;
            case '-':cout<<"Imprime la -"<<endl;
            break;
            case '*':cout<<"Imprime la *"<<endl;
            break;
            case '/':cout<<"Imprime la /"<<endl;
            break;
            case '(':cout<<"Imprime la ("<<endl;
            break;
            case ')':cout<<"Imprime la )"<<endl;
            break;
        }
    }
 
}