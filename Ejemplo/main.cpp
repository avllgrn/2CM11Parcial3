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
    Empleado* ptrEmpleado;

//    //Apuntador Empleado a Instancia Persona
//    cout<<"Apuntador Empleado a Instancia Persona"<<endl<<endl;
//    ptrEmpleado = &P;
//    ptrEmpleado->pideleAlUsuarioTusDatos();
//    cout<<endl<<endl;
//    ptrEmpleado->muestraTusDatos();
//    cout<<endl<<endl;
//    system("pause");
//    system("cls");

//    //Apuntador Empleado a Instancia Alumno
//    cout<<"Apuntador Empleado a Instancia Alumno"<<endl<<endl;
//    ptrEmpleado = &A;
//    ptrEmpleado->pideleAlUsuarioTusDatos();
//    cout<<endl<<endl;
//    ptrEmpleado->muestraTusDatos();
//    cout<<endl<<endl;
//    system("pause");
//    system("cls");

    //Apuntador Empleado a Instancia Empleado
    cout<<"Apuntador Empleado a Instancia Empleado"<<endl<<endl;
    ptrEmpleado = &E;
    ptrEmpleado->pideleAlUsuarioTusDatos();
    cout<<endl<<endl;
    ptrEmpleado->muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    //Apuntador Empleado a Instancia Profesor
    cout<<"Apuntador Empleado a Instancia Profesor"<<endl<<endl;
    ptrEmpleado = &M;
    ptrEmpleado->pideleAlUsuarioTusDatos();
    cout<<endl<<endl;
    ptrEmpleado->muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    //Apuntador Empleado a Instancia Secretaria
    cout<<"Apuntador Empleado a Instancia Secretaria"<<endl<<endl;
    ptrEmpleado = &S;
    ptrEmpleado->pideleAlUsuarioTusDatos();
    cout<<endl<<endl;
    ptrEmpleado->muestraTusDatos();
    cout<<endl<<endl;

    return 0;
}
