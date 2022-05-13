#ifndef PERSONA_H
#define PERSONA_H


#include <iostream>
#include "Evento.h"
using namespace std;

class Persona{
private:
    float estatura;
    void verificaDatos(void);
protected:
    string Nombre, Paterno, Materno, Genero;
    Evento FechaNacimiento;
public:
    Persona(void);
    Persona(string Nombre,string Paterno,string Materno,string Genero,float estatura,Evento FechaNacimiento);
    Persona(string Nombre,string Paterno,string Materno,string Genero,float estatura,Fecha F,Hora H);
    Persona(string Nombre,string Paterno,string Materno,string Genero,float estatura,int dia,int mes,int anio,int hora,int minuto,int segundo);
    ~Persona(void);
    virtual void pideleAlUsuarioTusDatos(void);
    virtual void muestraTusDatos(void);
    string  dameTuNombre(void);
    void modificaTuNombre(string Nombre);
    string dameTuPaterno(void);
    void modificaTuPaterno(string Paterno);
    string dameTuMaterno(void);
    void modificaTuMaterno(string Materno);
    string dameTuGenero(void);
    void modificaTuGenero(string Genero);
    float dameTuEstatura(void);
    void modificaTuEstatura(float estatura);
    Evento dameTuFechaNacimiento(void);
    void modificaTuFechaNacimiento(Evento FechaNacimiento);
    void modificaTuFechaNacimiento(Fecha F, Hora H);
    void modificaTuFechaNacimiento(int dia, int mes, int anio, int hora, int minuto, int segundo);
    void modificaTuF(Fecha F);
    void modificaTuH(Hora H);
    void modificaTuDia(int dia);
    void modificaTuMes(int mes);
    void modificaTuAnio(int anio);
    void modificaTuHora(int hora);
    void modificaTuMinuto(int minuto);
    void modificaTuSegundo(int segundo);
};

#endif // PERSONA_H
