#include <iostream>
#include "TNodo.h"
#include "Fraccion.h"
using namespace std;

int main(void){
    Fraccion Temporal;
    TNodo<Fraccion>  A;
    Temporal.modificaTusDatos(1,2);
    TNodo<Fraccion>  B(Temporal,&A);
    Temporal.modificaTusDatos(3,4);
    TNodo<Fraccion>  C(Temporal,&B);
    Temporal.modificaTusDatos(5.6,7.8);
    TNodo<Fraccion>  D(Temporal,&C);
    TNodo<Fraccion>* tope=&D;

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
