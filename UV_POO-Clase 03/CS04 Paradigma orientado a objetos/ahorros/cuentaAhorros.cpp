#include "cuentaAhorros.h"
#include <string>
#include <iostream>
using namespace std;

cuentaAhorros::cuentaAhorros(){
    valor=0;
}

void cuentaAhorros::reporteValor(){
    cout<<"el saldo de la cuenta es: "<<valor<<endl;
}
void cuentaAhorros::setValor(int val, string pass){
    valor=val;
}