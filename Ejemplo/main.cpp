#include <iostream>
#include <stdlib.h>
#include "TNodo.h"
#include "Complejo.h"
using namespace std;

int main(void){
    Complejo Temporal;
    TNodo<Complejo>* tope;
    TNodo<Complejo>* aux;
    Complejo d;

    tope = NULL;

    if(tope==NULL)
        cout<<"Pila vacia"<<endl;

    Temporal.modificaTusDatos(1,2);
    tope = new TNodo<Complejo>(Temporal,tope);system("pause");
    Temporal.modificaTusDatos(4,5);
    tope = new TNodo<Complejo>(Temporal,tope);system("pause");
    Temporal.modificaTusDatos(7,8);
    tope = new TNodo<Complejo>(Temporal,tope);system("pause");
    Temporal.modificaTusDatos(8,7);
    tope = new TNodo<Complejo>(Temporal,tope);system("pause");

    d = tope->dameTuDato();
    aux = tope;
    tope = tope->dameTuInferior();
    delete aux;
    cout<<d<<endl;system("pause");

    d = tope->dameTuDato();
    aux = tope;
    tope = tope->dameTuInferior();
    delete aux;
    cout<<d<<endl;system("pause");


    Temporal.modificaTusDatos(5,4);
    tope = new TNodo<Complejo>(Temporal,tope);system("pause");

    d = tope->dameTuDato();
    aux = tope;
    tope = tope->dameTuInferior();
    delete aux;
    cout<<d<<endl;system("pause");

    d = tope->dameTuDato();
    aux = tope;
    tope = tope->dameTuInferior();
    delete aux;
    cout<<d<<endl;system("pause");

    d = tope->dameTuDato();
    aux = tope;
    tope = tope->dameTuInferior();
    delete aux;
    cout<<d<<endl;system("pause");

    if(tope==NULL)
        cout<<"Pila vacia"<<endl;

    return 0;
}
