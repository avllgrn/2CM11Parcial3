#include "Punto3D.h"

Punto3D::Punto3D(void) : Punto(){
    Punto3D::z = 0.0;
}
Punto3D::Punto3D(double x, double y, double z) : Punto(x,y){
    Punto3D::z = z;
}
Punto3D::~Punto3D(void){
}
void Punto3D::pideleAlUsuarioTusDatos(void){
    cout<<"Dame mi x ";
    cin>>this->x;
    cout<<"Dame mi y ";
    cin>>this->y;
    cout<<"Dame mi z ";
    cin>>this->z;
}
void Punto3D::muestraTusDatos(void){
    cout << "(" << this->x
         << ", " << this->y
         << ", " << this->z
         <<")";
}
double Punto3D::dameTuZ(void){
    return this->z;
}
void Punto3D::modificaTuZ(double z){
    this->z = z;
}
void Punto3D::modificaTusDatos(double x, double y, double z){
    this->x = x;
    this->y = y;
    this->z = z;
}
