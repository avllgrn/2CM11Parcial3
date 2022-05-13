#include "Persona.h"

Persona::Persona(void){
    Persona::estatura = 1.65;
}
Persona::Persona(string Nombre,string Paterno,string Materno,string Genero,float estatura,Evento FechaNacimiento){
    Persona::Nombre = Nombre;
    Persona::Paterno = Paterno;
    Persona::Materno = Materno;
    Persona::Genero = Genero;
    Persona::estatura = estatura;
    Persona::FechaNacimiento = FechaNacimiento;
    Persona::verificaDatos();
}
Persona::Persona(string Nombre,string Paterno,string Materno,string Genero,float estatura,Fecha F,Hora H){
    Persona::Nombre = Nombre;
    Persona::Paterno = Paterno;
    Persona::Materno = Materno;
    Persona::Genero = Genero;
    Persona::estatura = estatura;
    Persona::FechaNacimiento.modificaTusDatos(F,H);
    Persona::verificaDatos();
}
Persona::Persona(string Nombre,string Paterno,string Materno,string Genero,float estatura,int dia,int mes,int anio,int hora,int minuto,int segundo){
    Persona::Nombre = Nombre;
    Persona::Paterno = Paterno;
    Persona::Materno = Materno;
    Persona::Genero = Genero;
    Persona::estatura = estatura;
    Persona::FechaNacimiento.modificaTusDatos(dia,mes,anio,hora,minuto,segundo);
    Persona::verificaDatos();
}
Persona::~Persona(void){
    //cout<<"Objeto destruido..."<<endl;
}
void Persona::verificaDatos(void){
    if(this->estatura<0.3 || this->estatura>2.72)
        this->estatura = 1.65;
}
void Persona::pideleAlUsuarioTusDatos(void){
    cout<<"Dame mi nombre: ";cin>>this->Nombre;
    cout<<"Dame mi paterno: ";cin>>this->Paterno;
    cout<<"Dame mi materno: ";cin>>this->Materno;
    cout<<"Dame mi genero: ";cin>>this->Genero;
    cout<<"Dame mi estatura: ";cin>>this->estatura;
    cout<<"Dame mi Fecha de Nacimiento: "<<endl;
    this->FechaNacimiento.pideleAlUsuarioTusDatos();
    this->verificaDatos();
}
void Persona::muestraTusDatos(void){
    cout<<"Nombre: "<<this->Nombre<<endl
        <<"Paterno: "<<this->Paterno<<endl
        <<"Materno: "<<this->Materno<<endl
        <<"Genero: "<<this->Genero<<endl
        <<"estatura: "<<this->estatura<<endl
        <<"Fecha de Nacimiento: "<<endl;
    this->FechaNacimiento.muestraTusDatos();
}
string Persona::dameTuNombre(void){
    return this->Nombre;
}
void Persona::modificaTuNombre(string Nombre){
    this->Nombre = Nombre;
}
string Persona::dameTuPaterno(void){
    return this->Paterno;
}
void Persona::modificaTuPaterno(string Paterno){
    this->Paterno = Paterno;
}
string Persona::dameTuMaterno(void){
    return this->Materno;
}
void Persona::modificaTuMaterno(string Materno){
    this->Materno = Materno;
}
string Persona::dameTuGenero(void){
    return this->Genero;
}
void Persona::modificaTuGenero(string Genero){
    this->Genero = Genero;
}
float Persona::dameTuEstatura(void){
    return this->estatura;
}
void Persona::modificaTuEstatura(float estatura){
    this->estatura = estatura;
    this->verificaDatos();
}
Evento Persona::dameTuFechaNacimiento(void){
    return this->FechaNacimiento;
}
void Persona::modificaTuFechaNacimiento(Evento FechaNacimiento){
    this->FechaNacimiento = FechaNacimiento;
}
void Persona::modificaTuFechaNacimiento(Fecha F, Hora H){
    this->FechaNacimiento.modificaTusDatos(F,H);
}
void Persona::modificaTuFechaNacimiento(int dia, int mes, int anio, int hora, int minuto, int segundo){
    this->FechaNacimiento.modificaTusDatos(dia,mes,anio,hora,minuto,segundo);
}
void Persona::modificaTuF(Fecha F){
    this->FechaNacimiento.modificaTuF(F);
}
void Persona::modificaTuH(Hora H){
    this->FechaNacimiento.modificaTuH(H);
}
void Persona::modificaTuDia(int dia){
    Fecha FTemporal;
    FTemporal = this->FechaNacimiento.dameTuF();
    FTemporal.modificaTuDia(dia);
    this->FechaNacimiento.modificaTuF(FTemporal);
}
void Persona::modificaTuMes(int mes){
    Fecha FTemporal;
    FTemporal = this->FechaNacimiento.dameTuF();
    FTemporal.modificaTuMes(mes);
    this->FechaNacimiento.modificaTuF(FTemporal);
}
void Persona::modificaTuAnio(int anio){
    Fecha FTemporal;
    FTemporal = this->FechaNacimiento.dameTuF();
    FTemporal.modificaTuAnio(anio);
    this->FechaNacimiento.modificaTuF(FTemporal);
}
void Persona::modificaTuHora(int hora){
    Hora HTemporal;
    HTemporal = this->FechaNacimiento.dameTuH();
    HTemporal.modificaTuHora(hora);
    this->FechaNacimiento.modificaTuH(HTemporal);
}
void Persona::modificaTuMinuto(int minuto){
    Hora HTemporal;
    HTemporal = this->FechaNacimiento.dameTuH();
    HTemporal.modificaTuMinuto(minuto);
    this->FechaNacimiento.modificaTuH(HTemporal);
}
void Persona::modificaTuSegundo(int segundo){
    Hora HTemporal;
    HTemporal = this->FechaNacimiento.dameTuH();
    HTemporal.modificaTuSegundo(segundo);
    this->FechaNacimiento.modificaTuH(HTemporal);
}
