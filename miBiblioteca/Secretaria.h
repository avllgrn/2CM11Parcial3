#ifndef SECRETARIA_H
#define SECRETARIA_H


#include <iostream>
#include "Empleado.h"
using namespace std;

class Secretaria : public Empleado{
private:
    int jefes;
    float palabrasPorMinuto;
    void verificaDatos(void);
protected:
    string Taquigrafia;
public:
    Secretaria(void);
    Secretaria(string Nombre,string Paterno,string Materno,string Genero,float estatura,Evento FechaNacimiento,int numero,float sueldo,string Puesto,int jefes,float palabrasPorMinuto,string Taquigrafia);
    Secretaria(string Nombre,string Paterno,string Materno,string Genero,float estatura,Fecha F,Hora H,int numero,float sueldo,string Puesto,int jefes,float palabrasPorMinuto,string Taquigrafia);
    Secretaria(string Nombre,string Paterno,string Materno,string Genero,float estatura,int dia,int mes,int anio,int hora,int minuto,int segundo,int numero,float sueldo,string Puesto,int jefes,float palabrasPorMinuto,string Taquigrafia);
    ~Secretaria(void);
    void pideleAlUsuarioTusDatos(void);
    void muestraTusDatos(void);
    int dameTuJefes(void);
    void modificaTuJefes(int jefes);
    float dameTuPalabrasPorMinuto(void);
    void modificaTuPalabrasPorMinuto(float palabrasPorMinuto);
    string dameTuTaquigrafia(void);
    void modificaTuTaquigrafia(string Taquigrafia);
};

#endif // SECRETARIA_H
