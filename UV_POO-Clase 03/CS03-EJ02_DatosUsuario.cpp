// autor: Andrey Quiceno.
// contacto: adolfo.quiceno@correounivalle.edu.co
// fecha de creación: 06/09/23
// fecha última modificación: 12/09/23

/*Ejercicio 2: Desarrolle un programa que permita almacenar los datos de un empleado en Surtivalle.*/

#include <iostream>
#include <iomanip> //Para cambiar la notación científica del double, busqué en Stack Overflow "How to make C++ cout not use scientific notation".
using namespace std;

int main(){
    //Función de entrada de datos:
    string nombre_empleado,apellido_empleado, NIT, cargo; //Variables de tipo texto oara alojar los datos del empleado que no serán.
    double salario; //Variable de tipo doble para alojar el valor numérico del sueldo del empleado.
    
    cout<<"Nombre: "; cin>>nombre_empleado;
    cout<<"Apellido: "; cin>>apellido_empleado;
    cout<<"NIT: "; cin>>NIT;
    cout<<"Cargo: "; cin>>cargo;
    cout<<"Salario: "; cin>>salario;

    cout<<fixed<<setprecision(0)<<nombre_empleado<<" "<<apellido_empleado<<", identificada con el numero de identidad "<<NIT<<", en el puesto de "<<cargo<<" recibe un pago mensual de "<<salario<<endl;
    //'fixed' para representar con los digitos exactos y 'setprecision(x)' para determinar cantidad de decimales, en este caso, ninguno.
    
    return 0;
}