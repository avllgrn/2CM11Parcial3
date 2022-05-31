#ifndef NODO_H
#define NODO_H

#include <iostream>
using namespace std;
class Nodo{
private:
    int dato;
    Nodo* inferior;
public:
    Nodo(void);
    Nodo(int dato, Nodo* inferior);
    ~Nodo(void);
    void pideleAlUsuarioTusDatos(void);
    void muestraTusDatos(void);
    int dameTuDato(void);
    void modificaTuDato(int dato);
    Nodo* dameTuInferior(void);
    void modificaTuInferior(Nodo* inferior);
};

#endif // NODO_H
