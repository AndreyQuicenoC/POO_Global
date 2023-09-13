// autor: Andrey Quiceno.
// contacto: adolfo.quiceno@correounivalle.edu.co
// fecha de creación: 12/09/23
// fecha última modificación: 12/09/23

/*Ejericio 03: Desarrolle un programa que simule la compra de un producto en una tienda online,observe que tipos de 
datos son necesarios para: nombre del producto, precio, garantía y nombre de usuario.*/

#include <iostream>
#include <iomanip> //Para cambiar la notación científica del double, busqué en Stack Overflow "How to make C++ cout not use scientific notation".
using namespace std;


int main(){
    string nombreProducto, nombreUsuario;
    int garantiaProducto;
    double precioProducto;

    cout<<"Nombre producto: "; getline(cin,nombreProducto); //Alojar un linea de texto con espacios en la variable
    cout<<"Precio: "; cin>>precioProducto;
    cout<<"Garantía (años): "; cin>>garantiaProducto;
    cin.ignore(); //Permitir que funcione el próximo getline.
    cout<<"Nombre usuario: "; getline(cin,nombreUsuario);
    
    cout<<fixed<<setprecision(0)<<nombreUsuario<<" adquirio "<<nombreProducto<<" por el precio de "<<precioProducto<<", con garantia de "<<garantiaProducto<<" años."<<endl;
    //'fixed' para representar con los digitos exactos y 'setprescision(x)' para determinar cantidad de decimales, en este caso, ninguno.
}   