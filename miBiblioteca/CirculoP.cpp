#include "CirculoP.h"

CirculoP::CirculoP(void){
}
CirculoP::CirculoP(Punto C, Punto P){
    CirculoP::C = C;
    CirculoP::P = P;
}
CirculoP::CirculoP(double xC,double yC,double xP,double yP){
    CirculoP::C.modificaTuX(xC);
    CirculoP::C.modificaTuY(yC);
    CirculoP::P.modificaTuX(xP);
    CirculoP::P.modificaTuY(yP);
}
CirculoP::~CirculoP(void){
}
void CirculoP::pideleAlUsuarioTusDatos(void){
    cout<<"Dame mi C"<<endl;
    this->C.pideleAlUsuarioTusDatos();
    cout<<"Dame mi P"<<endl;
    this->P.pideleAlUsuarioTusDatos();
}
void CirculoP::muestraTusDatos(void){
    cout<<"C";
    this->C.muestraTusDatos();
    cout<<"\tP";
    this->P.muestraTusDatos();
    cout<<endl<<"Radio:\t\t"<<this->dameTuRadio()
        <<endl<<"Diametro:\t"<<this->dameTuDiametro()
        <<endl<<"Area:\t\t"<<this->dameTuArea()
        <<endl<<"Perimetro:\t"<<this->dameTuPerimetro();
}
Punto CirculoP::dameTuC(void){
    return this->C;
}
void CirculoP::modificaTuC(Punto C){
    this->C = C;
}
void CirculoP::modificaTuC(double xC,double yC){
    this->C.modificaTuX(xC);
    this->C.modificaTuY(yC);
}
Punto CirculoP::dameTuP(void){
    return this->P;
}
void CirculoP::modificaTuP(Punto P){
    this->P = P;
}
void CirculoP::modificaTuP(double xP,double yP){
    this->P.modificaTuX(xP);
    this->P.modificaTuY(yP);
}
void CirculoP::modificaTusDatos(Punto C, Punto P){
    this->C = C;
    this->P = P;
}
void CirculoP::modificaTusDatos(double xC,double yC,double xP,double yP){
    this->C.modificaTuX(xC);
    this->C.modificaTuY(yC);
    this->P.modificaTuX(xP);
    this->P.modificaTuY(yP);
}
double CirculoP::dameTuRadio(void){
    return distanciaEntre(this->C, this->P);
}
double CirculoP::dameTuDiametro(void){
    return 2 * this->dameTuRadio();
}
double CirculoP::dameTuArea(void){
    return M_PI * pow(this->dameTuRadio(), 2);
}
double CirculoP::dameTuPerimetro(void){
    return 2* M_PI * this->dameTuRadio();
}
