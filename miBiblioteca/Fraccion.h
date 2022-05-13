#ifndef FRACCION_H
#define FRACCION_H


#include <iostream>
#include <stdlib.h>
using namespace std;

class Fraccion{
private:
    int numerador;
    int denominador;
    void verificaDatos(void);
public:
    Fraccion(void);
    Fraccion(int numerador, int denominador);
    ~Fraccion(void);
    void pideleAlUsuarioTusDatos(void);
    void muestraTusDatos(void);
    int dameTuNumerador(void);
    void modificaTuNumerador(int numerador);
    int dameTuDenominador(void);
    void modificaTuDenominador(int denominador);
    void modificaTusDatos(int numerador, int denominador);
};

Fraccion suma(Fraccion A, Fraccion B);
Fraccion resta(Fraccion A, Fraccion B);
Fraccion multiplica(Fraccion A, Fraccion B);
Fraccion divide(Fraccion A, Fraccion B);



#endif // FRACCION_H
