#ifndef PUNTO3D_H
#define PUNTO3D_H

#include "Punto.h"
class Punto3D : Punto{
protected:
    double z;
public:
    Punto3D(void);
    Punto3D(double x, double y, double z);
    ~Punto3D(void);
    void pideleAlUsuarioTusDatos(void);
    void muestraTusDatos(void);
    double dameTuZ(void);
    void modificaTuZ(double z);
    void modificaTusDatos(double x, double y, double z);
};

#endif // PUNTO3D_H
