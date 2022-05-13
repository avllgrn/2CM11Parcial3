#include "Empleado.h"


void Empleado::verificaDatos(void){
    if(this->sueldo < 5214)
        this->sueldo = 5214;

    if(this->numero < 1)
        this->numero = 1;
}
Empleado::Empleado(void) : Persona(){
    Empleado::numero = 1;
    Empleado::sueldo = 5214;
    Empleado::Puesto = "Empleado";
}
Empleado::Empleado(string Nombre,string Paterno,string Materno,string Genero,float estatura,Evento FechaNacimiento,
                   int numero,float sueldo,string Puesto)
                   : Persona(Nombre,Paterno,Materno,Genero,estatura,FechaNacimiento){
    Empleado::numero = numero;
    Empleado::sueldo = sueldo;
    Empleado::Puesto = Puesto;
    Empleado::verificaDatos();
}
Empleado::Empleado(string Nombre,string Paterno,string Materno,string Genero,float estatura,Fecha F,Hora H,
                   int numero,float sueldo,string Puesto)
                   : Persona(Nombre,Paterno,Materno,Genero,estatura,F,H){
    Empleado::numero = numero;
    Empleado::sueldo = sueldo;
    Empleado::Puesto = Puesto;
    Empleado::verificaDatos();
}
Empleado::Empleado(string Nombre,string Paterno,string Materno,string Genero,float estatura,
                   int dia,int mes,int anio,int hora,int minuto,int segundo,
                   int numero,float sueldo,string Puesto)
                   : Persona(Nombre,Paterno,Materno,Genero,estatura,dia,mes,anio,hora,minuto,segundo){
    Empleado::numero = numero;
    Empleado::sueldo = sueldo;
    Empleado::Puesto = Puesto;
    Empleado::verificaDatos();
}
void Empleado::pideleAlUsuarioTusDatos(void){
    string Enter;
    Persona::pideleAlUsuarioTusDatos();
    cout<<"Dame mi numero ";
    cin>>this->numero;
    cout<<"Dame mi sueldo ";
    cin>>this->sueldo;
    cout<<"Dame mi Puesto ";
    getline(cin,Enter);
    getline(cin,this->Puesto);
}
void Empleado::muestraTusDatos(void){
    Persona::muestraTusDatos();
    cout<<endl
        <<"Numero: "<<this->numero<<endl
        <<"Sueldo: "<<this->sueldo<<endl
        <<"Puesto: "<<this->Puesto;
}
int Empleado::dameTuNumero(void){
    return this->numero;
}
void Empleado::modificaTuNumero(int numero){
    this->numero = numero;
    this->verificaDatos();
}
float Empleado::dameTuSueldo(void){
    return this->sueldo;
}
void Empleado::modificaTuSueldo(float sueldo){
    this->sueldo = sueldo;
    this->verificaDatos();
}
string Empleado::dameTuPuesto(void){
    return this->Puesto;
}
void Empleado::modificaTuPuesto(string Puesto){
    this->Puesto = Puesto;
}
