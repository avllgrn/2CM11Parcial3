#include "Punto.h"

Punto::Punto(void){
    this->x = 0.0;
    this->y = 0.0;
    //cout << "Objeto construido, this -> " << this << endl;
}
Punto::Punto(double x, double y){
    this->x = x;
    this->y = y;
    //cout << "Objeto construido, this -> " << this << endl;
}
Punto::~Punto(void){
    //cout << "Objeto destruido, this -> " << this << endl;
}
void Punto::pideleAlUsuarioTusDatos(void){
    cout<<"Dame mi x ";
    cin>>this->x;
    cout<<"Dame mi y ";
    cin>>this->y;
}
void Punto::muestraTusDatos(void){
    cout << "(" << this->x << ", " << this->y <<")";
}
void Punto::guardaTusDatos(ofstream& ASalida) {
    ASalida << "(" << this->x
            << ", " << this->y
            << ")" << endl;
}
void Punto::cargaTusDatos(ifstream& AEntrada) {
    char caracter;
    AEntrada >> caracter;
    AEntrada >> this->x;
    AEntrada >> caracter;
    AEntrada >> this->y;
    AEntrada >> caracter;
}
double Punto::dameTuX(void){
    return this->x;
}
void Punto::modificaTuX(double x){
    this->x = x;
}
double Punto::dameTuY(void){
    return this->y;
}
void Punto::modificaTuY(double y){
    this->y = y;
}
void Punto::modificaTusDatos(double x, double y){
    this->x = x;
    this->y = y;
}















Punto Punto::operator+(Punto Derecho){
    Punto R;
    R.modificaTuX(this->x + Derecho.dameTuX());
    R.modificaTuY(this->y + Derecho.dameTuY());
    return R;
}
Punto Punto::operator-(Punto Derecho){
    Punto R;
    R.modificaTuX(this->x - Derecho.dameTuX());
    R.modificaTuY(this->y - Derecho.dameTuY());
    return R;
}
bool Punto::operator==(Punto Derecho){
    return
        this->x == Derecho.dameTuX()
        &&
        this->y == Derecho.dameTuY()
    ;
}
bool Punto::operator!=(Punto Derecho){
    return
        this->x != Derecho.dameTuX()
        ||
        this->y != Derecho.dameTuY()
    ;
}
Punto Punto::operator+=(Punto Derecho){
    Punto R;
    R.modificaTuX(this->x + Derecho.dameTuX());
    R.modificaTuY(this->y + Derecho.dameTuY());
    this->x = R.dameTuX();
    this->y = R.dameTuY();
    return R;
}
Punto Punto::operator-=(Punto Derecho){
    Punto R;
    R.modificaTuX(this->x - Derecho.dameTuX());
    R.modificaTuY(this->y - Derecho.dameTuY());
    this->x = R.dameTuX();
    this->y = R.dameTuY();
    return R;
}
Punto Punto::operator--(void){//Prefijo
    Punto R;
    --this->x;
    --this->y;
    R.modificaTuX(this->x);
    R.modificaTuY(this->y);
    return R;
}

Punto Punto::operator--(int){//Posfijo
    Punto R;
    R.modificaTuX(this->x);
    R.modificaTuY(this->y);
    --this->x;
    --this->y;
    return R;
}


double distanciaEntre(Punto A, Punto B){
    return sqrt(
        pow(B.dameTuY()-A.dameTuY(),2)
        +
        pow(B.dameTuX()-A.dameTuX(),2)
    );
}
//Punto operator+(Punto Izquierdo, Punto Derecho){
//    Punto R;
//    R.modificaTuX(Izquierdo.dameTuX() + Derecho.dameTuX());
//    R.modificaTuY(Izquierdo.dameTuY() + Derecho.dameTuY());
//    return R;
//}
//Punto operator-(Punto Izquierdo, Punto Derecho){
//    Punto R;
//    R.modificaTuX(Izquierdo.dameTuX() - Derecho.dameTuX());
//    R.modificaTuY(Izquierdo.dameTuY() - Derecho.dameTuY());
//    return R;
//}
//bool operator==(Punto Izquierdo, Punto Derecho){
//    return
//        Izquierdo.dameTuX() == Derecho.dameTuX()
//        &&
//        Izquierdo.dameTuY() == Derecho.dameTuY()
//    ;
//}
//bool operator!=(Punto Izquierdo, Punto Derecho){
//    return
//        Izquierdo.dameTuX() != Derecho.dameTuX()
//        ||
//        Izquierdo.dameTuY() != Derecho.dameTuY()
//    ;
//}
istream& operator>>(istream& Izquierdo, Punto& Derecho){
    Derecho.pideleAlUsuarioTusDatos();
    return Izquierdo;
}
ostream& operator<<(ostream& Izquierdo, Punto Derecho){
    Derecho.muestraTusDatos();
    return Izquierdo;
}
//Punto operator+=(Punto& Izquierdo, Punto Derecho){
//    Punto R;
//    R.modificaTuX(Izquierdo.dameTuX() + Derecho.dameTuX());
//    R.modificaTuY(Izquierdo.dameTuY() + Derecho.dameTuY());
//    Izquierdo.modificaTuX(R.dameTuX());
//    Izquierdo.modificaTuY(R.dameTuY());
//    return R;
//}
//Punto operator-=(Punto& Izquierdo, Punto Derecho){
//    Punto R;
//    R.modificaTuX(Izquierdo.dameTuX() - Derecho.dameTuX());
//    R.modificaTuY(Izquierdo.dameTuY() - Derecho.dameTuY());
//    Izquierdo.modificaTuX(R.dameTuX());
//    Izquierdo.modificaTuY(R.dameTuY());
//    return R;
//}
Punto operator++(Punto& Unico){//Prefijo
    Punto R;
    Unico.modificaTuX(Unico.dameTuX()+1);
    Unico.modificaTuY(Unico.dameTuY()+1);
    R.modificaTuX(Unico.dameTuX());
    R.modificaTuY(Unico.dameTuY());
    return R;
}
Punto operator++(Punto& Unico,int){//Posfijo
    Punto R;
    R.modificaTuX(Unico.dameTuX());
    R.modificaTuY(Unico.dameTuY());
    Unico.modificaTuX(Unico.dameTuX()+1);
    Unico.modificaTuY(Unico.dameTuY()+1);
    return R;
}
