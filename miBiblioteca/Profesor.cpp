#include "Profesor.h"


void Profesor::verificaDatos(void){
    if(this->carga<0 || this->carga>24)
        this->carga = 0;

    if(this->grupos < 0)
        this->grupos = 0;
}
Profesor::Profesor(void) : Empleado(){
    Profesor::grupos = 0;
    Profesor::carga = 0.0;
    Profesor::Academia = "Sin Academia";
}
Profesor::Profesor(string Nombre,string Paterno,string Materno,string Genero,float estatura,Evento FechaNacimiento,
                   int numero,float sueldo,string Puesto,
                   int grupos,float carga, string Academia)
                   : Empleado(Nombre,Paterno,Materno,Genero,estatura,FechaNacimiento,numero,sueldo,Puesto){
    Profesor::grupos = grupos;
    Profesor::carga = carga;
    Profesor::Academia = Academia;
    this->verificaDatos();
}
Profesor::Profesor(string Nombre,string Paterno,string Materno,string Genero,float estatura,Fecha F,Hora H,
                   int numero,float sueldo,string Puesto,
                   int grupos,float carga, string Academia)
                   : Empleado(Nombre,Paterno,Materno,Genero,estatura,F,H,numero,sueldo,Puesto){
    Profesor::grupos = grupos;
    Profesor::carga = carga;
    Profesor::Academia = Academia;
    this->verificaDatos();
}
Profesor::Profesor(string Nombre,string Paterno,string Materno,string Genero,float estatura,int dia,int mes,int anio,int hora,int minuto,int segundo,
                   int numero,float sueldo,string Puesto,
                   int grupos,float carga, string Academia)
                   : Empleado(Nombre,Paterno,Materno,Genero,estatura,dia,mes,anio,hora,minuto,segundo,numero,sueldo,Puesto){
    Profesor::grupos = grupos;
    Profesor::carga = carga;
    Profesor::Academia = Academia;
    this->verificaDatos();
}
void Profesor::pideleAlUsuarioTusDatos(void){
    string Enter;
    Empleado::pideleAlUsuarioTusDatos();
    cout<<"Dame mi numero de grupos ";
    cin>>this->grupos;
    cout<<"Dame mi carga ";
    cin>>this->carga;
    cout<<"Dame mi Academia ";
    getline(cin,Enter);
    getline(cin,this->Academia);
}
void Profesor::muestraTusDatos(void){
    Empleado::muestraTusDatos();
    cout<<endl
        <<"Grupos: "<<this->grupos<<endl
        <<"Carga: "<<this->carga<<endl
        <<"Academia: "<<this->Academia<<endl;
}
int Profesor::dameTuGrupos(void){
    return this->grupos;
}
void Profesor::modificaTuGrupos(int grupos){
    this->grupos = grupos;
    this->verificaDatos();
}
float Profesor::dameTuCarga(void){
    return this->carga;
}
void Profesor::modificaTuCarga(float carga){
    this->carga = carga;
    this->verificaDatos();
}
string Profesor::dameTuAcademia(void){
    return this->Academia;
}
void Profesor::modificaTuAcademia(string Academia){
    this->Academia = Academia;
}
