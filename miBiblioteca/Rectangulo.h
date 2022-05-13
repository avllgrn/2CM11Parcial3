#ifndef RECTANGULO_H
#define RECTANGULO_H


#include <iostream>
using namespace std;

class Rectangulo{
private:
    double base;
    double altura;
    void verificaDatos(void);
public:
    Rectangulo(void);
    Rectangulo(double base, double altura);
    ~Rectangulo(void);
    void pideleAlUsuarioTusDatos(void);
    void muestraTusDatos(void);
    double dameTuBase(void);
    void modificaTuBase(double base);
    double dameTuAltura(void);
    void modificaTuAltura(double altura);
    void modificaTusDatos(double base, double altura);
    double dameTuArea(void);
    double dameTuPerimetro(void);
};

#endif // RECTANGULO_H
