#include "Hora.h"


void Hora::verificaDatos(void){
    if(this->hora<0 || this->hora>23)
        this->hora = 0;

    if(this->minuto<0 || this->minuto>59)
        this->minuto = 0;

    if(this->segundo<0 || this->segundo>59)
        this->segundo = 0;
}
Hora::Hora(void){
    Hora::hora = 0;
    Hora::minuto = 0;
    Hora::segundo = 0;
}
Hora::Hora(int hora, int minuto, int segundo){
    Hora::hora = hora;
    Hora::minuto = minuto;
    Hora::segundo = segundo;
    Hora::verificaDatos();
}
Hora::~Hora(void){
    //cout<<"Hora destruida..."<<endl;
}
void Hora::pideleAlUsuarioTusDatos(void){
    cout<<"Dame mi hora ";cin>>this->hora;
    cout<<"Dame mi minuto ";cin>>this->minuto;
    cout<<"Dame mi segundo ";cin>>this->segundo;
    this->verificaDatos();
}
void Hora::muestraTusDatos(void){
    cout<<this->hora<<" : "
        <<this->minuto<<" : "
        <<this->segundo;
}
int Hora::dameTuHora(void){
    return this->hora;
}
void Hora::modificaTuHora(int hora){
    this->hora = hora;
    this->verificaDatos();
}
int Hora::dameTuMinuto(void){
    return this->minuto;
}
void Hora::modificaTuMinuto(int minuto){
    this->minuto = minuto;
    this->verificaDatos();
}
int Hora::dameTuSegundo(void){
    return this->segundo;
}
void Hora::modificaTuSegundo(int segundo){
    this->segundo = segundo;
    this->verificaDatos();
}
void Hora::modificaTusDatos(int hora, int minuto, int segundo){
    this->hora = hora;
    this->minuto = minuto;
    this->segundo = segundo;
    this->verificaDatos();
}
