#include "Fecha.h"


void Fecha::verificaDatos(void){
    if(this->dia<1 || this->dia>31)
        this->dia = 1;

    if(this->mes<1 || this->mes>12)
        this->mes = 1;

    if(this->anio<1)
        this->anio = 2022;
}
Fecha::Fecha(void){
    Fecha::dia = 1;
    Fecha::mes = 1;
    Fecha::anio = 2022;
}
Fecha::Fecha(int dia, int mes, int anio){
    Fecha::dia = dia;
    Fecha::mes = mes;
    Fecha::anio = anio;
    Fecha::verificaDatos();
}
Fecha::~Fecha(void){
    //cout<<"Fecha destruida..."<<endl;
}
void Fecha::pideleAlUsuarioTusDatos(void){
    cout<<"Dame mi dia ";cin>>this->dia;
    cout<<"Dame mi mes ";cin>>this->mes;
    cout<<"Dame mi anio ";cin>>this->anio;
    this->verificaDatos();
}
void Fecha::muestraTusDatos(void){
    cout<<this->dia<<" / "
        <<this->mes<<" / "
        <<this->anio;
}
int Fecha::dameTuDia(void){
    return this->dia;
}
void Fecha::modificaTuDia(int dia){
    this->dia = dia;
    this->verificaDatos();
}
int Fecha::dameTuMes(void){
    return this->mes;
}
void Fecha::modificaTuMes(int mes){
    this->mes = mes;
    this->verificaDatos();
}
int Fecha::dameTuAnio(void){
    return this->anio;
}
void Fecha::modificaTuAnio(int anio){
    this->anio = anio;
    this->verificaDatos();
}
void Fecha::modificaTusDatos(int dia, int mes, int anio){
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
    this->verificaDatos();
}
