#include <iostream>
#include "ListaSE.h"
using namespace std;

int main(int argc, char *argv[])
{

    ListaSE* l= new ListaSE();

    if(l->esVacia())
        cout<<"Esta vacia\n\n";

    l->agregarFinal( 10 );
    l->agregarFinal( 13 );
    l->agregarFinal( 15 );
    l->agregarFinal( 25 );
    l->agregarInicio(5);
    l->agregarInicio(99);
    Caja* x= l->ultimaPos();
    cout<< x->contenido <<"\n\n";
    cout << "Hello World!\n La lista tiene un tamanyo de:" <<l->numElem()<<" \n" << endl;

    if(!l->esVacia())
        cout<<"No esta vacia\n\n";
    l->mostrar();

    delete l;
    return 0;
}
