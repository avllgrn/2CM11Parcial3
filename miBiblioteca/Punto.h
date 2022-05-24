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
    Punto operator+(Punto Derecho);
    Punto operator-(Punto Derecho);
    bool operator==(Punto Derecho);
    bool operator!=(Punto Derecho);
    Punto operator+=(Punto Derecho);
    Punto operator-=(Punto Derecho);
    Punto operator--(void);//Prefijo
    Punto operator--(int);//Posfijo
};
double distanciaEntre(Punto A, Punto B);
//Punto operator+(Punto Izquierdo, Punto Derecho);
//Punto operator-(Punto Izquierdo, Punto Derecho);
//bool operator==(Punto Izquierdo, Punto Derecho);
//bool operator!=(Punto Izquierdo, Punto Derecho);
istream& operator>>(istream& Izquierdo, Punto& Derecho);
ostream& operator<<(ostream& Izquierdo, Punto Derecho);
//Punto operator+=(Punto& Izquierdo, Punto Derecho);
//Punto operator-=(Punto& Izquierdo, Punto Derecho);
Punto operator++(Punto& Unico);//Prefijo
Punto operator++(Punto& Unico,int);//Posfijo


#endif // PUNTO_H
