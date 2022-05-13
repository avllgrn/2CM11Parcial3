#ifndef HORA_H
#define HORA_H

#include <iostream>
using namespace std;

class Hora{
private:
    int hora;
    int minuto;
    int segundo;
    void verificaDatos(void);
public:
    Hora(void);
    Hora(int hora, int minuto, int segundo);
    ~Hora(void);
    void pideleAlUsuarioTusDatos(void);
    void muestraTusDatos(void);
    int dameTuHora(void);
    void modificaTuHora(int hora);
    int dameTuMinuto(void);
    void modificaTuMinuto(int minuto);
    int dameTuSegundo(void);
    void modificaTuSegundo(int segundo);
    void modificaTusDatos(int hora, int minuto, int segundo);
};

#endif // HORA_H
