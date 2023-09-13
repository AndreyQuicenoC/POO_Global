// autor: Andrey Quiceno.
// contacto: adolfo.quiceno@correounivalle.edu.co
// fecha de creación: 12/09/23
// fecha última modificación: 12/09/23

/*Ejericio 03: Desarrolle un programa que simule la compra de un producto en una tienda online,observe que tipos de 
datos son necesarios para: nombre del producto, precio, garantía y nombre de usuario.*/

#include <iostream>
#include <iomanip> //Para cambiar la notación científica del double, busqué en Stack Overflow "How to make C++ cout not use scientific notation".
#define tamano_producto 30 //Para poder definir cadenas d texto con espacios.
#define tamano_usuario 30
using namespace std;


int main(){
    char nombreProducto[tamano_producto], nombreUsuario[tamano_usuario];
    int garantiaProducto;
    double precioProducto;

    cout<<"Nombre producto: "; cin.getline(nombreProducto,tamano_producto); //Alojar un linea de texto con espacios en la variable
    cout<<"Precio: "; cin>>precioProducto;
    cout<<"Garantía (años): "; cin>>garantiaProducto;
    cout<<"Nombre usuario: "; cin.getline(nombreUsuario,tamano_usuario);

    cout<<fixed<<setprecision(0)<<nombreUsuario<<" adquirió "<<nombreProducto<<" por el precio de "<<precioProducto<<", con garantia de "<<garantiaProducto<<" años."<<endl;
    //'fixed' para representar con los digitos exactos y 'setpresicion(x)' para determinar cantidad de decimales, en este caso, ninguno.
}   