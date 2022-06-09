#include <iostream>
#include <stdlib.h>
#include "TPila.h"
#include "Complejo.h"
using namespace std;

int main(void){
    TPila<Complejo> P;
    Complejo Objeto, Otro;

    Objeto.modificaTusDatos(1,2);
    P.push(Objeto);system("pause");
    Objeto.modificaTusDatos(3,4);
    P.push(Objeto);system("pause");
    Objeto.modificaTusDatos(5,6);
    P.push(Objeto);system("pause");
    Objeto.modificaTusDatos(7,8);
    P.push(Objeto);system("pause");
    Objeto.modificaTusDatos(9,8);
    P.push(Objeto);system("pause");


    return 0;
}
