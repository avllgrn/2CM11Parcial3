#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "Persona.h"
class Empleado : public Persona{
private:
    int numero;
    float sueldo;
    void verificaDatos(void);
protected:
    string Puesto;
public:
    Empleado(void);
    Empleado(string Nombre,string Paterno,string Materno,string Genero,float estatura,Evento FechaNacimiento,int numero,float sueldo,string Puesto);
    Empleado(string Nombre,string Paterno,string Materno,string Genero,float estatura,Fecha F,Hora H,int numero,float sueldo,string Puesto);
    Empleado(string Nombre,string Paterno,string Materno,string Genero,float estatura,int dia,int mes,int anio,int hora,int minuto,int segundo,int numero,float sueldo,string Puesto);
    void pideleAlUsuarioTusDatos(void);
    void muestraTusDatos(void);
    int dameTuNumero(void);
    void modificaTuNumero(int numero);
    float dameTuSueldo(void);
    void modificaTuSueldo(float sueldo);
    string dameTuPuesto(void);
    void modificaTuPuesto(string Puesto);
};

#endif // EMPLEADO_H
