#include <iostream>
#include "Punto.h"
using namespace std;

int main(void){

    Punto A, B, C;

    A.pideleAlUsuarioTusDatos();
    B.pideleAlUsuarioTusDatos();

    C = A+B;

    C.muestraTusDatos();

    return 0;
}
