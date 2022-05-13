#include "Circulo.h"


void Circulo::verificaDatos(void){
    if(this->radio < 0)
        this->radio = 0.0;
}
Circulo::Circulo(void){
    Circulo::radio = 0.0;
}
Circulo::Circulo(double radio){
    Circulo::radio = radio;
    Circulo::verificaDatos();
}
Circulo::~Circulo(void){
}
void Circulo::pideleAlUsuarioTusDatos(void){
    cout<<"Dame mi radio ";
    cin>>this->radio;
    this->verificaDatos();
}
void Circulo::muestraTusDatos(void){
    cout<<"Radio:\t\t"<<this->radio<<endl
        <<"Diametro:\t"<<this->dameTuDiametro()<<endl
        <<"Area:\t\t"<<this->dameTuArea()<<endl
        <<"Perimetro:\t"<<this->dameTuPerimetro()<<endl;
}
double Circulo::dameTuRadio(void){
    return this->radio;
}
void Circulo::modificaTuRadio(double radio){
    this->radio = radio;
    this->verificaDatos();
}
double Circulo::dameTuDiametro(void){
    return 2 * this->radio;
}
double Circulo::dameTuArea(void){
    return M_PI * pow(this->radio, 2);
}
double Circulo::dameTuPerimetro(void){
    return 2 * M_PI * this->radio;
}
