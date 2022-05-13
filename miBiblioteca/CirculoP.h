#ifndef CIRCULOP_H
#define CIRCULOP_H


#include <iostream>
#include "Punto.h"
using namespace std;

class CirculoP{
private:
    Punto C;
    Punto P;
public:
    CirculoP(void);
    CirculoP(Punto C, Punto P);
    CirculoP(double xC,double yC,double xP,double yP);
    ~CirculoP(void);
    void pideleAlUsuarioTusDatos(void);
    void muestraTusDatos(void);
    Punto dameTuC(void);
    void modificaTuC(Punto C);
    void modificaTuC(double xC,double yC);
    Punto dameTuP(void);
    void modificaTuP(Punto P);
    void modificaTuP(double xP,double yP);
    void modificaTusDatos(Punto C, Punto P);
    void modificaTusDatos(double xC,double yC,double xP,double yP);
    double dameTuRadio(void);
    double dameTuDiametro(void);
    double dameTuArea(void);
    double dameTuPerimetro(void);
};

#endif // CIRCULOP_H
