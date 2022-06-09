#ifndef TPILA_H
#define TPILA_H



#include <iostream>
#include "TNodo.h"
using namespace std;

template<typename T>
class TPila{
private:
    TNodo<T>* tope;
public:
    TPila(void);
    ~TPila(void);
    void push(T dato);
    T pop(void);
    bool estaVacia(void);
    void liberaPila(void);
};

template<typename T>
TPila<T>::TPila(void){
    this->tope = NULL;
}
template<typename T>
TPila<T>::~TPila(void){
    this->liberaPila();
}
template<typename T>
void TPila<T>::push(T dato){
    this->tope = new TNodo<T>(dato, this->tope);
}
template<typename T>
T TPila<T>::pop(void){
    T d;
    TNodo<T>* aux;
    d = this->tope->dameTuDato();
    aux=this->tope;
    this->tope = this->tope->dameTuInferior();
    delete aux;
    return d;
}
template<typename T>
bool TPila<T>::estaVacia(void){
    return this->tope==NULL;
}
template<typename T>
void TPila<T>::liberaPila(void){
    while(!this->estaVacia()){
        cout<<this->pop()<<endl;
    }
}




#endif // TPILA_H
