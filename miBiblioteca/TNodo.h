#ifndef TNODO_H
#define TNODO_H


#include <iostream>
using namespace std;

template<typename T>
class TNodo{
private:
    T dato;
    TNodo<T>* inferior;
public:
    TNodo(void);
    TNodo(T dato, TNodo<T>* inferior);
    ~TNodo(void);
    void pideleAlUsuarioTusDatos(void);
    void muestraTusDatos(void);
    T dameTuDato(void);
    void modificaTuDato(T dato);
    TNodo<T>* dameTuInferior(void);
    void modificaTuInferior(TNodo<T>* inferior);
};

template<typename T>
TNodo<T>::TNodo(void){
    //this->dato = 0;
    this->inferior = NULL;
}
template<typename T>
TNodo<T>::TNodo(T dato, TNodo<T>* inferior){
    this->dato = dato;
    this->inferior = inferior;
}
template<typename T>
TNodo<T>::~TNodo(void){
    cout<<"Nodo destruido..."<<endl;
}
template<typename T>
void TNodo<T>::pideleAlUsuarioTusDatos(void){
    cout<<"Dame mi dato "<<endl;
    cin>>this->dato;
}
template<typename T>
void TNodo<T>::muestraTusDatos(void){
    cout<<"| "<<this->dato<<" | -> ";
    if(this->inferior == NULL)
        cout<<"NULL"<<endl;
    else
        cout<<this->inferior<<endl;
}
template<typename T>
T TNodo<T>::dameTuDato(void){
    return this->dato;
}
template<typename T>
void TNodo<T>::modificaTuDato(T dato){
    this->dato = dato;
}
template<typename T>
TNodo<T>* TNodo<T>::dameTuInferior(void){
    return this->inferior;
}
template<typename T>
void TNodo<T>::modificaTuInferior(TNodo<T>* inferior){
    this->inferior = inferior;
}




#endif // TNODO_H
