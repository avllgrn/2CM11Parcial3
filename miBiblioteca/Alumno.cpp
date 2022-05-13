#include "Alumno.h"


void Alumno::verificaDatos(void){
    if(Alumno::semestre<1 || Alumno::semestre>9)
        Alumno::semestre  = 1;

    if(Alumno::promedio<0 || Alumno::promedio>10)
        Alumno::promedio  = 0.0;
}
Alumno::Alumno(void) : Persona(){
    Alumno::semestre = 1;
    Alumno::promedio = 0.0;
    Alumno::Carrera = "ICE";
}
Alumno::Alumno(string Nombre,string Paterno,string Materno,string Genero,float estatura,Evento FechaNacimiento,int semestre,float promedio,string Carrera) : Persona(Nombre,Paterno,Materno,Genero,estatura,FechaNacimiento)
{
    Alumno::semestre = semestre;
    Alumno::promedio = promedio;
    Alumno::Carrera = Carrera;
    Alumno::verificaDatos();
}
Alumno::Alumno(string Nombre,string Paterno,string Materno,string Genero,float estatura,Fecha F,Hora H,int semestre,float promedio,string Carrera) : Persona(Nombre,Paterno,Materno,Genero,estatura,F,H)
{
    Alumno::semestre = semestre;
    Alumno::promedio = promedio;
    Alumno::Carrera = Carrera;
    Alumno::verificaDatos();
}
Alumno::Alumno(string Nombre,string Paterno,string Materno,string Genero,float estatura,int dia,int mes,int anio,int hora,int minuto,int segundo,int semestre,float promedio,string Carrera) : Persona(Nombre,Paterno,Materno,Genero,estatura,dia,mes,anio,hora,minuto,segundo)
{
    Alumno::semestre = semestre;
    Alumno::promedio = promedio;
    Alumno::Carrera = Carrera;
    Alumno::verificaDatos();
}
Alumno::~Alumno(void){
    //cout<<"Objeto destruido..."<<endl;
}
void Alumno::pideleAlUsuarioTusDatos(void){
    Persona::pideleAlUsuarioTusDatos();
    cout<<"Dame mi semestre: ";cin>>this->semestre;
    cout<<"Dame mi promedio: ";cin>>this->promedio;
    cout<<"Dame mi carrera : ";cin>>this->Carrera;
    Alumno::verificaDatos();
}
void Alumno::muestraTusDatos(void){
    Persona::muestraTusDatos();
    cout<<endl
        <<"Semestre: "<<this->semestre<<endl
        <<"Promedio: "<<this->promedio<<endl
        <<"Carrera : "<<this->Carrera<<endl;
}
int Alumno::dameTuSemestre(void){
    return this->semestre;
}
void Alumno::modificaTuSemestre(int semestre){
    this->semestre = semestre;
    Alumno::verificaDatos();
}
float Alumno::dameTuPromedio(void){
    return this->promedio;
}
void Alumno::modificaTuPromedio(float promedio){
    this->promedio = promedio;
    Alumno::verificaDatos();
}
string Alumno::dameTuCarrera(void){
    return this->Carrera;
}
void Alumno::modificaTuCarrera(string Carrera){
    this->Carrera = Carrera;
}
