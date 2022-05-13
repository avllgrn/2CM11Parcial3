#ifndef CIRCULO_H
#define CIRCULO_H

#include <iostream>
#include <math.h>
using namespace std;

class Circulo{
private:
    double radio;
    void verificaDatos(void);
public:
    Circulo(void);
    Circulo(double radio);
    ~Circulo(void);
    void pideleAlUsuarioTusDatos(void);
    void muestraTusDatos(void);
    double dameTuRadio(void);
    void modificaTuRadio(double radio);
    double dameTuDiametro(void);
    double dameTuArea(void);
    double dameTuPerimetro(void);
};

#endif // CIRCULO_H
