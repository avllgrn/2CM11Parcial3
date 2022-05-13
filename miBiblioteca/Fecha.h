#ifndef FECHA_H
#define FECHA_H




#include <iostream>
using namespace std;

class Fecha{
private:
    int dia;
    int mes;
    int anio;
    void verificaDatos(void);
public:
    Fecha(void);
    Fecha(int dia, int mes, int anio);
    ~Fecha(void);
    void pideleAlUsuarioTusDatos(void);
    void muestraTusDatos(void);
    int dameTuDia(void);
    void modificaTuDia(int dia);
    int dameTuMes(void);
    void modificaTuMes(int mes);
    int dameTuAnio(void);
    void modificaTuAnio(int anio);
    void modificaTusDatos(int dia, int mes, int anio);
};


#endif // FECHA_H
