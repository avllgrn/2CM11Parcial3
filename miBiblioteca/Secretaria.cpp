#include "Secretaria.h"


void Secretaria::verificaDatos(void){
    if(this->jefes<0)
        this->jefes = 1;

    if(this->palabrasPorMinuto<75 || this->palabrasPorMinuto>212)
        this->palabrasPorMinuto = 75;
}
Secretaria::Secretaria(void) : Empleado(){
    this->jefes = 1;
    this->palabrasPorMinuto = 75;
    this->Taquigrafia = "Pitman";
}

Secretaria::Secretaria(string Nombre,string Paterno,string Materno,string Genero,float estatura,Evento FechaNacimiento,
         int numero,float sueldo,string Puesto,
         int jefes,float palabrasPorMinuto,string Taquigrafia)
    : Empleado(Nombre,Paterno,Materno,Genero,estatura,FechaNacimiento,numero,sueldo,Puesto){

    this->jefes = jefes;
    this->palabrasPorMinuto = palabrasPorMinuto;
    this->Taquigrafia = Taquigrafia;
    this->verificaDatos();
}
Secretaria::Secretaria(string Nombre,string Paterno,string Materno,string Genero,float estatura,Fecha F,Hora H,
         int numero,float sueldo,string Puesto,
         int jefes,float palabrasPorMinuto,string Taquigrafia)
    : Empleado(Nombre,Paterno,Materno,Genero,estatura,F,H,numero,sueldo,Puesto){
    this->jefes = jefes;
    this->palabrasPorMinuto = palabrasPorMinuto;
    this->Taquigrafia = Taquigrafia;
    this->verificaDatos();
}
Secretaria::Secretaria(string Nombre,string Paterno,string Materno,string Genero,float estatura,int dia,int mes,int anio,int hora,int minuto,int segundo,
         int numero,float sueldo,string Puesto,
         int jefes,float palabrasPorMinuto,string Taquigrafia)
    : Empleado(Nombre,Paterno,Materno,Genero,estatura,dia,mes,anio,hora,minuto,segundo,numero,sueldo,Puesto){
    this->jefes = jefes;
    this->palabrasPorMinuto = palabrasPorMinuto;
    this->Taquigrafia = Taquigrafia;
    this->verificaDatos();
}
Secretaria::~Secretaria(void){
    //cout<<"Objeto destruido..."<<endl;
}
void Secretaria::pideleAlUsuarioTusDatos(void){
    Empleado::pideleAlUsuarioTusDatos();
    cout<<"Dame mi numero de jefes ";cin>>this->jefes;
    cout<<"Dame mis palabras por minuto ";cin>>this->palabrasPorMinuto;
    cout<<"Dame mi Taquigrafia ";cin>>this->Taquigrafia;
}
void Secretaria::muestraTusDatos(void){
    Empleado::muestraTusDatos();
    cout<<endl
        <<"Numero de jefes:\t"<<this->jefes<<endl
        <<"Palabras por minuto:\t"<<this->palabrasPorMinuto<<endl
        <<"Taquigrafia:\t\t"<<this->Taquigrafia<<endl;
}
int Secretaria::dameTuJefes(void){
    return this->jefes;
}
void Secretaria::modificaTuJefes(int jefes){
    this->jefes = jefes;
}
float Secretaria::dameTuPalabrasPorMinuto(void){
    return this->palabrasPorMinuto;
}
void Secretaria::modificaTuPalabrasPorMinuto(float palabrasPorMinuto){
    this->palabrasPorMinuto = palabrasPorMinuto;
}
string Secretaria::dameTuTaquigrafia(void){
    return this->Taquigrafia;
}
void Secretaria::modificaTuTaquigrafia(string Taquigrafia){
    this->Taquigrafia = Taquigrafia;
}
