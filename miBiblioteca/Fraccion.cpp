#include "Fraccion.h"

void Fraccion::verificaDatos(void){
    if(this->denominador < 0){
         this->denominador *= -1;
         this->numerador *= -1;
    }
    if(this->denominador == 0){
        cout<<"Error! Fraccion indeterminada... =("<<endl<<endl;
        exit(-1);
    }
}
Fraccion::Fraccion(void){
    Fraccion::numerador = 0;
    Fraccion::denominador = 1;
}
Fraccion::Fraccion(int numerador, int denominador){
    Fraccion::numerador = numerador;
    Fraccion::denominador = denominador;
    Fraccion::verificaDatos();
}
Fraccion::~Fraccion(void){
}
void Fraccion::pideleAlUsuarioTusDatos(void){
    cout<<"Dame mi numerador ";
    cin>>this->numerador;
    cout<<"Dame mi denominador ";
    cin>>this->denominador;
    this->verificaDatos();
}
void Fraccion::muestraTusDatos(void){
    cout<<this->numerador<<"/"<<this->denominador;
}
int Fraccion::dameTuNumerador(void){
    return this->numerador;
}
void Fraccion::modificaTuNumerador(int numerador){
    this->numerador = numerador;
}
int Fraccion::dameTuDenominador(void){
    return this->denominador;
}
void Fraccion::modificaTuDenominador(int denominador){
    this->denominador = denominador;
    this->verificaDatos();
}
void Fraccion::modificaTusDatos(int numerador, int denominador){
    this->numerador = numerador;
    this->denominador = denominador;
    this->verificaDatos();
}



Fraccion suma(Fraccion A, Fraccion B){
    Fraccion C;
    C.modificaTuNumerador(
        A.dameTuNumerador()*B.dameTuDenominador()
        +
        B.dameTuNumerador()*A.dameTuDenominador()
    );
    C.modificaTuDenominador(
        A.dameTuDenominador()*B.dameTuDenominador()
    );
    return C;
}
Fraccion resta(Fraccion A, Fraccion B){
    Fraccion D;
    D.modificaTuNumerador(
        A.dameTuNumerador()*B.dameTuDenominador()
        -
        B.dameTuNumerador()*A.dameTuDenominador()
    );
    D.modificaTuDenominador(
        A.dameTuDenominador()*B.dameTuDenominador()
    );
    return D;
}
Fraccion multiplica(Fraccion A, Fraccion B){
    Fraccion E;
    E.modificaTuNumerador(
        A.dameTuNumerador()*B.dameTuNumerador()
    );
    E.modificaTuDenominador(
        A.dameTuDenominador()*B.dameTuDenominador()
    );
    return E;
}
Fraccion divide(Fraccion A, Fraccion B){
    Fraccion F;
    F.modificaTuNumerador(
        A.dameTuNumerador()*B.dameTuDenominador()
    );
    F.modificaTuDenominador(
        A.dameTuDenominador()*B.dameTuNumerador()
    );
    return F;
}
