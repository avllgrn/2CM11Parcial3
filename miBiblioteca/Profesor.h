#ifndef PROFESOR_H
#define PROFESOR_H

#include "Empleado.h"
class Profesor : public Empleado{
private:
    int grupos;
    float carga;
    void verificaDatos(void);
protected:
    string Academia;
public:
    Profesor(void);
    Profesor(string Nombre,string Paterno,string Materno,string Genero,float estatura,Evento FechaNacimiento,int numero,float sueldo,string Puesto,int grupos,float carga, string Academia);
    Profesor(string Nombre,string Paterno,string Materno,string Genero,float estatura,Fecha F,Hora H,int numero,float sueldo,string Puesto,int grupos,float carga, string Academia);
    Profesor(string Nombre,string Paterno,string Materno,string Genero,float estatura,int dia,int mes,int anio,int hora,int minuto,int segundo,int numero,float sueldo,string Puesto,int grupos,float carga, string Academia);
    void pideleAlUsuarioTusDatos(void);
    void muestraTusDatos(void);
    int dameTuGrupos(void);
    void modificaTuGrupos(int grupos);
    float dameTuCarga(void);
    void modificaTuCarga(float carga);
    string dameTuAcademia(void);
    void modificaTuAcademia(string Academia);
};

#endif // PROFESOR_H
