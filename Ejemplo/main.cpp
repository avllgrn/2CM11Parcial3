#include <iostream>
#include "Nodo.h"
using namespace std;

int main(void){
    Nodo  A;
    Nodo  B(1,&A);
    Nodo  C(2,&B);
    Nodo  D(3,&C);
    Nodo* tope=&D;

    cout<<"&A   = "<<&A<<endl
        <<"&B   = "<<&B<<endl
        <<"&C   = "<<&C<<endl
        <<"&D   = "<<&D<<endl<<endl
        <<"tope = "<<tope<<endl;

    D.muestraTusDatos();
    C.muestraTusDatos();
    B.muestraTusDatos();
    A.muestraTusDatos();

    cout<<endl<<endl;

    cout<<"A"<<endl;
    A.pideleAlUsuarioTusDatos();
    cout<<"B"<<endl;
    B.pideleAlUsuarioTusDatos();
    cout<<"C"<<endl;
    C.pideleAlUsuarioTusDatos();
    cout<<"D"<<endl;
    D.pideleAlUsuarioTusDatos();

    cout<<endl<<endl;

    cout<<"&A   = "<<&A<<endl
        <<"&B   = "<<&B<<endl
        <<"&C   = "<<&C<<endl
        <<"&D   = "<<&D<<endl<<endl
        <<"tope = "<<tope<<endl;

    D.muestraTusDatos();
    C.muestraTusDatos();
    B.muestraTusDatos();
    A.muestraTusDatos();

    cout<<endl<<endl;

    return 0;
}
