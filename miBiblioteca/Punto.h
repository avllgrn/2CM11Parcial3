#ifndef PUNTO_H
#define PUNTO_H



#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

class Punto{
protected:
    double x;
    double y;
public:
    Punto(void);
    Punto(double x, double y);
    ~Punto(void);
    void pideleAlUsuarioTusDatos(void);
    void muestraTusDatos(void);
    void guardaTusDatos(ofstream& ASalida);
    void cargaTusDatos(ifstream& AEntrada);
    double dameTuX(void);
    void modificaTuX(double x);
    double dameTuY(void);
    void modificaTuY(double y);
    void modificaTusDatos(double x, double y);
};
double distanciaEntre(Punto A, Punto B);


#endif // PUNTO_H
