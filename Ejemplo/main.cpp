#include <iostream>
#include "Punto.h"
using namespace std;

int main(void){

    Punto A, B, C, D;

    A.pideleAlUsuarioTusDatos();
    B.pideleAlUsuarioTusDatos();

    if(A==B)
        cout<<"Estan en la misma posicion =^)"<<endl;
    else
        cout<<"NO estan en la misma posicion =^("<<endl;

    if(A!=B)
        cout<<"NO estan en la misma posicion =^("<<endl;
    else
        cout<<"Estan en la misma posicion =^)"<<endl;

    return 0;
}
