#include <iostream>
#include "TNodo.h"
using namespace std;

int main(void){
    TNodo<char>  A;
    TNodo<char>  B('@',&A);
    TNodo<char>  C('#',&B);
    TNodo<char>  D('&',&C);
    TNodo<char>* tope=&D;

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
