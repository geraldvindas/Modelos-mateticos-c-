#include "ListaSE.h"


ListaSE::ListaSE()
:largo(0), primera(nullptr)
{
    std::cout<<" Se creo inicio de lista "<< std::endl;
}


ListaSE::~ListaSE()
{   
}

void ListaSE::vaciar()
{
    Caja* temporal= primera;
    for(int i=1 ; i<=largo ; ++i ){
        temporal = temporal->siguiente;
    }
}

bool ListaSE::esVacia()
{
   if ( largo==0 )
       return true;
   return false;
}

Caja* ListaSE::primeraPos()
{
    return primera;
}

Caja* ListaSE::ultimaPos()
{
    return ultima;
}

Caja* ListaSE::siguiente(Caja* n)
{
    return n->siguiente;
}

Caja* ListaSE::anterior(Caja* n)
{
   Caja* temporal = primera;
   while ( temporal->siguiente!=n ) {
       temporal= temporal->siguiente;
   }
   return temporal;
}

bool ListaSE::insertar(int elemento,Caja* destino)
{

}

bool ListaSE::agregarFinal(const int elemento)
{
   if( !esVacia() ){
       ultima = ultima->siguiente = new Caja(elemento);
   }else{
       std::cout<<" Es vacia \n";
       primera = ultima = new Caja( elemento );
   }
   ++largo;
   std::cout<<" se metio otra caja \n";

}

bool ListaSE::agregarInicio(const int elemento)
{
   if( !esVacia() ){
       Caja* temp = primera;
       primera = new Caja(elemento,primera);
   }else{
       std::cout<<" Es vacia \n";
       primera = ultima = new Caja( elemento );
   }
   ++largo;
   std::cout<<" se metio otra caja al inicio\n";

}

bool ListaSE::modificar(Caja* destino, int nuevoDato)
{
    destino->contenido = nuevoDato;
}

bool ListaSE::borrarPos(Caja* posicion)
{
    posicion = posicion->siguiente;
    delete posicion->siguiente;
    posicion->siguiente=posicion->siguiente->siguiente;

}

int  ListaSE::numElem()
{
    return largo;
}

int ListaSE::recuperar(Caja* destino)
{
    return destino->contenido;
}

bool ListaSE::intercambiar(Caja* uno, Caja* dos)
{

}

void ListaSE::mostrar()
{
    Caja* temporal = primera;
    for(int i=1 ; i<=largo ; ++i ){
        std::cout<<"Caja[ "<<i<<" ] contiene "<< temporal->contenido<<std::endl;
        temporal = temporal->siguiente;
    }
}
