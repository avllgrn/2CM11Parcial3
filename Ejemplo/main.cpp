#include <iostream>
#include <stdlib.h>
#include "Persona.h"
#include "Alumno.h"
#include "Empleado.h"
#include "Profesor.h"
#include "Secretaria.h"
using namespace std;

int main(void){
    Persona P;
    Alumno A;
    Empleado E;
    Profesor M;
    Secretaria S;
    Persona* ptrPersona;

    //Apuntador Persona a Instancia Persona
    cout<<"Apuntador Persona a Instancia Persona"<<endl<<endl;
    ptrPersona = &P;
    ptrPersona->pideleAlUsuarioTusDatos();
    cout<<endl<<endl;
    ptrPersona->muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    //Apuntador Persona a Instancia Alumno
    cout<<"Apuntador Persona a Instancia Alumno"<<endl<<endl;
    ptrPersona = &A;
    ptrPersona->pideleAlUsuarioTusDatos();
    cout<<endl<<endl;
    ptrPersona->muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    //Apuntador Persona a Instancia Empleado
    cout<<"Apuntador Persona a Instancia Empleado"<<endl<<endl;
    ptrPersona = &E;
    ptrPersona->pideleAlUsuarioTusDatos();
    cout<<endl<<endl;
    ptrPersona->muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    //Apuntador Persona a Instancia Profesor
    cout<<"Apuntador Persona a Instancia Profesor"<<endl<<endl;
    ptrPersona = &M;
    ptrPersona->pideleAlUsuarioTusDatos();
    cout<<endl<<endl;
    ptrPersona->muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    //Apuntador Persona a Instancia Secretaria
    cout<<"Apuntador Persona a Instancia Secretaria"<<endl<<endl;
    ptrPersona = &S;
    ptrPersona->pideleAlUsuarioTusDatos();
    cout<<endl<<endl;
    ptrPersona->muestraTusDatos();
    cout<<endl<<endl;

    return 0;
}
