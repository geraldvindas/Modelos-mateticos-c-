#ifndef LISTASE_H
#define LISTASE_H
#include <stdlib.h>
#include <iostream>

struct Caja{
  Caja* siguiente;
  int contenido;

  public:
  Caja(int dat, Caja* sig = nullptr)
  :contenido(dat),siguiente(sig)
  {
  }
};

class ListaSE
{
   private:


   private:
    int largo;
    Caja* primera;
    Caja* ultima;

   public:
    //constructor= Iniciar(L)
    ListaSE();
    //destructor= Destruir(L)
    ~ListaSE();

    void vaciar();
    bool esVacia();
    Caja* primeraPos();
    Caja* ultimaPos();
    Caja* siguiente(Caja *n);
    Caja* anterior(Caja *n);
    bool insertar(int elemento,Caja* destino);
    bool agregarFinal(const int elemento);
    bool agregarInicio(const int elemento);
    bool modificar(Caja* destino, int nuevoDato);
    bool borrarPos(Caja* posicion);
    int numElem();
    int recuperar(Caja* destino);
    bool intercambiar(Caja* uno, Caja* dos);
    void mostrar();


};

#endif // LISTASE_H
