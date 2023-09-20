#include <iostream>
#include <vector>
using namespace std;
#include "Bombillo.h"
#include "Encendedor.h"

int main() {
  //Intancio tres objetos de la clase bombillo
  //cada objeto es independiente
  
  Bombillo miPrimerBombilo, miSegundoBombilo, miTercerBombilo,miCuartoBombilo,miQuintoBombilo;
  /*
  vector <Bombillo> lucesNavidad;
  lucesNavidad.push_back(miPrimerBombilo);
  lucesNavidad.push_back(miSegundoBombilo);
  lucesNavidad.push_back(miTercerBombilo);
  lucesNavidad.push_back(miCuartoBombilo);
  lucesNavidad.push_back(miQuintoBombilo);
  //moviendome por todo el vector de bombillos lucesNavidad y voy a encender cada bombillo
  /*
  /*
  for(int i=0;i<lucesNavidad.size();i++){
    //[i] lucesNavidad[i]
    lucesNavidad.at(i).encender();
  }
  
  //Simular titileo de luces de navidad
  int c=0;//Ccontrola el titileo para apagar toda la serie
  do{
      for(int i=0;i<lucesNavidad.size();i++){
        if(c%2==0){
           if(i%2==0) lucesNavidad.at(i).encender();
          else lucesNavidad.at(i).apagar();
        }
        else lucesNavidad.at(i).apagar();
      }
  //Mostrar la serie completa
     for(int i=0;i<lucesNavidad.size();i++) lucesNavidad.at(i).mostrar();
    cout<<endl;
    c++;
  }while(c<10);
 // miPrimerBombilo.encendido=0;
  //cout<<miPrimerBombilo.encendido<<endl;
  //. para darle los menjajes al objeto
  */
  miPrimerBombilo.mostrar();
  miPrimerBombilo.apagar();
  miPrimerBombilo.mostrar();
  cout<<"bombillo de carro"<<endl;
 
  
}