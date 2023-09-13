#include "cuentaAhorros.h"
#include <iostream>
using namespace std;

int main(){
    cuentaAhorros juanAhorrador;
    juanAhorrador.reporteValor();
    juanAhorrador.setValor(10,"1234");
    juanAhorrador.reporteValor();
    cout<<juanAhorrador.getValor();
}