//Autor: Andrey Quiceno
//Correo: adolfoquiceno@correounivalle.edu.co
//Fecha creación: 2023-09-12
//Fecha última modificación: 2023-09-12

/*
NT:extensión .h para el paradogma orientado a objetos
Ejercicio 2: Realizar un programa que simule una mascota.

NT: Uno tiene que ser capaz de definir las características y accinoes más genrales del objeto.
*/

#include <string>
using namespace std;

class mascota{
    //atributos
    private:
        string nombre;
        string tipo;
        bool comio;

    //métodos o funciones
    public:
        void saluda();
        void come();
        void juega();
        void darLaPata();
        void setComida(bool auxAlimentar);
        void setNombre(string auxNombre);
        void setTipo(string auxTipo);
};