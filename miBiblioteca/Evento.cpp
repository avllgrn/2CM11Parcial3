#include "Evento.h"

Evento::Evento(void){
}
Evento::Evento(Fecha F, Hora H){
    Evento::F = F;
    Evento::H = H;
}
Evento::Evento(int dia, int mes, int anio, int hora, int minuto, int segundo){
    Evento::F.modificaTuDia(dia);
    Evento::F.modificaTuMes(mes);
    Evento::F.modificaTuAnio(anio);
    Evento::H.modificaTuHora(hora);
    Evento::H.modificaTuMinuto(minuto);
    Evento::H.modificaTuSegundo(segundo);
}
Evento::~Evento(void){
    //cout<<"Objeto destruido..."<<endl;
}
void Evento::pideleAlUsuarioTusDatos(void){
    cout<<"Dame mi F"<<endl;this->F.pideleAlUsuarioTusDatos();
    cout<<"Dame mi H"<<endl;this->H.pideleAlUsuarioTusDatos();
}
void Evento::muestraTusDatos(void){
    cout<<"F ";this->F.muestraTusDatos();
    cout<<endl;
    cout<<"H ";this->H.muestraTusDatos();
}
Fecha Evento::dameTuF(void){
    return this->F;
}
void Evento::modificaTuF(Fecha F){
    this->F = F;
}
void Evento::modificaTuF(int dia,int mes,int anio){
    this->F.modificaTuDia(dia);
    this->F.modificaTuMes(mes);
    this->F.modificaTuAnio(anio);
}
Hora Evento::dameTuH(void){
    return this->H;
}
void Evento::modificaTuH(Hora H){
    this->H = H;
}
void Evento::modificaTuH(int hora,int minuto,int segundo){
    this->H.modificaTuHora(hora);
    this->H.modificaTuMinuto(minuto);
    this->H.modificaTuSegundo(segundo);
}
void Evento::modificaTusDatos(Fecha F, Hora H){
    this->F = F;
    this->H = H;
}
void Evento::modificaTusDatos(int dia, int mes, int anio, int hora, int minuto, int segundo){
    this->F.modificaTuDia(dia);
    this->F.modificaTuMes(mes);
    this->F.modificaTuAnio(anio);
    this->H.modificaTuHora(hora);
    this->H.modificaTuMinuto(minuto);
    this->H.modificaTuSegundo(segundo);
}
