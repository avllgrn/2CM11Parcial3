#include "Rectangulo.h"

void Rectangulo::verificaDatos(void){
    if(this->base <= 0 || this->altura <= 0 ){
        this->base = 0;
        this->altura = 0;
    }
}
Rectangulo::Rectangulo(void){
    Rectangulo::base = 0;
    Rectangulo::altura = 0;
}
Rectangulo::Rectangulo(double base, double altura){
    Rectangulo::base = base;
    Rectangulo::altura = altura;
    Rectangulo::verificaDatos();
}
Rectangulo::~Rectangulo(void){
}
void Rectangulo::pideleAlUsuarioTusDatos(void){
    cout<<"Dame mi base ";
    cin>>this->base;
    cout<<"Dame mi altura ";
    cin>>this->altura;
    this->verificaDatos();
}
void Rectangulo::muestraTusDatos(void){
    cout<<"Base:\t\t"<<this->base<<endl
        <<"Altura:\t\t"<<this->altura<<endl
        <<"Area:\t\t"<<this->dameTuArea()<<endl
        <<"Perimetro:\t"<<this->dameTuPerimetro()<<endl;
}
double Rectangulo::dameTuBase(void){
    return this->base;
}
void Rectangulo::modificaTuBase(double base){
    this->base = base;
    this->verificaDatos();
}
double Rectangulo::dameTuAltura(void){
    return this->altura;
}
void Rectangulo::modificaTuAltura(double altura){
    this->altura = altura;
    this->verificaDatos();
}
void Rectangulo::modificaTusDatos(double base, double altura){
    this->base = base;
    this->altura = altura;
    this->verificaDatos();
}
double Rectangulo::dameTuArea(void){
    return this->base * this->altura;
}
double Rectangulo::dameTuPerimetro(void){
    return 2*this->base + 2*this->altura;
}
