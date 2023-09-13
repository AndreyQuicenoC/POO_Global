#include <string>
using namespace std;

class cuentaAhorros{    
    //atributos
    private:
        int valor;
    //metodos
    public:
        cuentaAhorros();
        void reporteValor();
        void setValor(int aux, string pass); //seter
        int getValor(); //getter
};