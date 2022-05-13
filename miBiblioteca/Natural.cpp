#include "Natural.h"


void Natural::verificaSValor(void){
    stringstream ss;
    this->iValor = abs(atoi(this->sValor.c_str()));
    ss << this->iValor;
    ss >> this->sValor;
}
Natural::Natural(void){
    this->iValor = 0;
    this->sValor = "0";
    //cout << "Objeto construido, this -> " << this << endl;
}
Natural::Natural(int iValor){
    stringstream ss;
    this->iValor = abs(iValor);
    ss << this->iValor;
    ss >> this->sValor;
    //cout << "Objeto construido, this -> " << this << endl;
}
Natural::Natural(string sValor){
    this->sValor = sValor;
    this->verificaSValor();
    //cout << "Objeto construido, this -> " << this << endl;
}
Natural::Natural(char cValor){
    stringstream ss;
    if(cValor<48||cValor>57){
        iValor = (int) cValor;
        ss << this->iValor;
        ss >> this->sValor;
    }
    else{
        ss << cValor;
        ss >> this->sValor;
        iValor = atoi(sValor.c_str());
    }
    //cout << "Objeto construido, this -> " << this << endl;
}
Natural::~Natural(void){
    //cout << "Objeto destruido, this -> " << this << endl;
}
void Natural::pideleAlUsuarioTusDatos(void){
    cout<<"Dame mi iValor ";
    cin>>this->sValor;
    this->verificaSValor();
}
void Natural::muestraTusDatos(void){
    cout << this->iValor;
}
void Natural::guardaTusDatos(ofstream& ASalida) {
    ASalida << this->iValor;
}
void Natural::cargaTusDatos(ifstream& AEntrada) {
    AEntrada >> sValor;
    this->verificaSValor();
}
int Natural::dameTuIValor(void){
    return this->iValor;
}
void Natural::modificaTuIValor(int iValor){
    stringstream ss;
    this->iValor = abs(iValor);
    ss << this->iValor;
    ss >> this->sValor;
}
void Natural::modificaTuIValor(char cValor){
    stringstream ss;
    if(cValor<48||cValor>57){
        iValor = (int) cValor;
        ss << this->iValor;
        ss >> this->sValor;
    }
    else{
        ss << cValor;
        ss >> this->sValor;
        iValor = atoi(sValor.c_str());
    }
    //cout << "Objeto construido, this -> " << this << endl;
}
string Natural::dameTuSValor(void){
    return this->sValor;
}
void Natural::modificaTuSValor(string sValor){
    this->sValor = sValor;
    this->verificaSValor();
}
