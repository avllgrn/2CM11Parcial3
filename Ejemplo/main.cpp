#include <iostream>
#include <stdlib.h>
#include "Nodo.h"
using namespace std;

int main(void){
    Nodo* tope;
    Nodo* aux;
    int d;

    tope = NULL;

    if(tope==NULL)
        cout<<"Pila vacia"<<endl;

    tope = new Nodo(5,tope);system("pause");
    tope = new Nodo(3,tope);system("pause");
    tope = new Nodo(7,tope);system("pause");
    tope = new Nodo(-4,tope);system("pause");

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


    tope = new Nodo(9,tope);system("pause");

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
