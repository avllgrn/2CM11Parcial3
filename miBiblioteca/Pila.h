#ifndef PILA_H
#define PILA_H

#include <iostream>
#include "Nodo.h"
using namespace std;
class Pila{
private:
    Nodo* tope;
public:
    Pila(void);
    ~Pila(void);
    void push(int dato);
    int pop(void);
    bool estaVacia(void);
    void liberaPila(void);
};

#endif // PILA_H
