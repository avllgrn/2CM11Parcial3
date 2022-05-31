#include "Nodo.h"


Nodo::Nodo(void){
    this->dato = 0;
    this->inferior = NULL;
}
Nodo::Nodo(int dato, Nodo* inferior){
    this->dato = dato;
    this->inferior = inferior;
}
Nodo::~Nodo(void){
    cout<<"Nodo destruido..."<<endl;
}
void Nodo::pideleAlUsuarioTusDatos(void){
    cout<<"Dame mi dato "<<endl;
    cin>>this->dato;
}
void Nodo::muestraTusDatos(void){
    cout<<"| "<<this->dato<<" | -> ";
    if(this->inferior == NULL)
        cout<<"NULL"<<endl;
    else
        cout<<this->inferior<<endl;
}
int Nodo::dameTuDato(void){
    return this->dato;
}
void Nodo::modificaTuDato(int dato){
    this->dato = dato;
}
Nodo* Nodo::dameTuInferior(void){
    return this->inferior;
}
void Nodo::modificaTuInferior(Nodo* inferior){
    this->inferior = inferior;
}
