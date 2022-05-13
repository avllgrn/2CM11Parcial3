#ifndef COMPLEJO_H
#define COMPLEJO_H


#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

class Complejo{
private:
    double real;
    double imaginario;
public:
    Complejo(void);
    Complejo(double real, double imaginario);
    ~Complejo(void);
    void pideleAlUsuarioTusDatos(void);
    void muestraTusDatos(void);
    void guardaTusDatos(ofstream& ASalida);
    void cargaTusDatos(ifstream& AEntrada);
    double dameTuReal(void);
    void modificaTuReal(double real);
    double dameTuImaginario(void);
    void modificaTuImaginario(double imaginario);
    void modificaTusDatos(double real, double imaginario);
};

Complejo suma(Complejo A, Complejo B);
Complejo resta(Complejo A, Complejo B);
Complejo multiplica(Complejo A, Complejo B);
Complejo divide(Complejo A, Complejo B);

#endif // COMPLEJO_H
