#ifndef ALUMNO_H
#define ALUMNO_H

#include <iostream>
#include "Persona.h"
using namespace std;

class Alumno : public Persona{
private:
    int semestre;
    float promedio;
    void verificaDatos(void);
protected:
    string Carrera;
public:
    Alumno(void);
    Alumno(string Nombre,string Paterno,string Materno,string Genero,float estatura,Evento FechaNacimiento,int semestre,float promedio,string Carrera);
    Alumno(string Nombre,string Paterno,string Materno,string Genero,float estatura,Fecha F,Hora H,int semestre,float promedio,string Carrera);
    Alumno(string Nombre,string Paterno,string Materno,string Genero,float estatura,int dia,int mes,int anio,int hora,int minuto,int segundo,int semestre,float promedio,string Carrera);
    ~Alumno(void);
    void pideleAlUsuarioTusDatos(void);
    void muestraTusDatos(void);
    int dameTuSemestre(void);
    void modificaTuSemestre(int semestre);
    float dameTuPromedio(void);
    void modificaTuPromedio(float promedio);
    string dameTuCarrera(void);
    void modificaTuCarrera(string Carrera);
};

#endif // ALUMNO_H
