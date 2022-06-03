#include "Pila.h"


Pila::Pila(void){
    this->tope = NULL;
}
Pila::~Pila(void){
    this->liberaPila();
}
void Pila::push(int dato){
    this->tope = new Nodo(dato, this->tope);
}
int Pila::pop(void){
    int d;
    Nodo* aux;
    d = this->tope->dameTuDato();
    aux = this->tope;
    this->tope = this->tope->dameTuInferior();
    delete aux;
    return d;
}
bool Pila::estaVacia(void){
    return this->tope == NULL;
}
void Pila::liberaPila(void){
    while(!this->estaVacia())
        cout<<this->pop()<<endl;
}
