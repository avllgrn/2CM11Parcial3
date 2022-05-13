#ifndef EVENTO_H
#define EVENTO_H

#include <iostream>
#include "Fecha.h"
#include "Hora.h"
using namespace std;

class Evento{
private:
    Fecha F;
    Hora H;
public:
    Evento(void);
    Evento(Fecha F, Hora H);
    Evento(int dia,int mes,int anio,int hora,int minuto,int segundo);
    ~Evento(void);
    void pideleAlUsuarioTusDatos(void);
    void muestraTusDatos(void);
    Fecha dameTuF(void);
    void modificaTuF(Fecha F);
    void modificaTuF(int dia,int mes,int anio);
    Hora dameTuH(void);
    void modificaTuH(Hora H);
    void modificaTuH(int hora,int minuto,int segundo);
    void modificaTusDatos(Fecha F, Hora H);
    void modificaTusDatos(int dia,int mes,int anio,int hora,int minuto,int segundo);
};



#endif // EVENTO_H
