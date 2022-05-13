#include "Complejo.h"



Complejo::Complejo(void){
    this->real = 0.0;
    this->imaginario = 0.0;
    //cout << "Objeto construido, this -> " << this << endl;
}
Complejo::Complejo(double real, double imaginario){
    this->real = real;
    this->imaginario = imaginario;
    //cout << "Objeto construido, this -> " << this << endl;
}
Complejo::~Complejo(void){
    //cout << "Objeto destruido, this -> " << this << endl;
}
void Complejo::pideleAlUsuarioTusDatos(void){
    cout<<"Dame mi real ";
    cin>>this->real;
    cout<<"Dame mi imaginario ";
    cin>>this->imaginario;
}
void Complejo::muestraTusDatos(void){
    cout << this->real;
    if(this->imaginario<0)
        cout << this->imaginario;
    else
        cout << "+" << this->imaginario;
    cout << "i";
}
void Complejo::guardaTusDatos(ofstream& ASalida) {
    ASalida << this->real;
    if(this->imaginario<0)
        ASalida << this->imaginario;
    else
        ASalida << "+" << this->imaginario;
    ASalida << "i";
}
void Complejo::cargaTusDatos(ifstream& AEntrada) {
    char caracter;
    AEntrada >> this->real;
    AEntrada >> caracter;
    AEntrada >> this->imaginario;
    AEntrada >> caracter;
}
double Complejo::dameTuReal(void){
    return this->real;
}
void Complejo::modificaTuReal(double real){
    this->real = real;
}
double Complejo::dameTuImaginario(void){
    return this->imaginario;
}
void Complejo::modificaTuImaginario(double imaginario){
    this->imaginario = imaginario;
}
void Complejo::modificaTusDatos(double real, double imaginario){
    this->real = real;
    this->imaginario = imaginario;
}


Complejo suma(Complejo A, Complejo B){
    Complejo R;
    R.modificaTuReal(
        A.dameTuReal()
        +
        B.dameTuReal()
    );
    R.modificaTuImaginario(
        A.dameTuImaginario()
        +
        B.dameTuImaginario()
    );
    return R;
}
Complejo resta(Complejo A, Complejo B){
    Complejo R;
    R.modificaTuReal(
        A.dameTuReal()
        -
        B.dameTuReal()
    );
    R.modificaTuImaginario(
        A.dameTuImaginario()
        -
        B.dameTuImaginario()
    );
    return R;
}
Complejo multiplica(Complejo A, Complejo B){
    Complejo R;
    R.modificaTuReal(
        A.dameTuReal()*B.dameTuReal()
        -
        A.dameTuImaginario()*B.dameTuImaginario()
    );
    R.modificaTuImaginario(
        A.dameTuReal()*B.dameTuImaginario()
        +
        B.dameTuReal()*A.dameTuImaginario()
    );
    return R;
}
Complejo divide(Complejo A, Complejo B){
    Complejo R;
    R.modificaTuReal(
        (A.dameTuReal()*B.dameTuReal()+A.dameTuImaginario()*B.dameTuImaginario())
        /
        (pow(B.dameTuReal(),2)+pow(B.dameTuImaginario(),2))
    );
    R.modificaTuImaginario(
        (B.dameTuReal()*A.dameTuImaginario()-A.dameTuReal()*B.dameTuImaginario())
        /
        (pow(B.dameTuReal(),2)+pow(B.dameTuImaginario(),2))
    );
    return R;
}
