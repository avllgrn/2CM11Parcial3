#include <iostream>
#include <stdlib.h>
#include "TNodo.h"
using namespace std;

int main(void){
    TNodo<float>* tope;
    TNodo<float>* aux;
    float d;

    tope = NULL;

    if(tope==NULL)
        cout<<"Pila vacia"<<endl;

    tope = new TNodo<float>(1.2,tope);system("pause");
    tope = new TNodo<float>(3.4,tope);system("pause");
    tope = new TNodo<float>(5.6,tope);system("pause");
    tope = new TNodo<float>(7.8,tope);system("pause");

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


    tope = new TNodo<float>(9.8,tope);system("pause");

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
