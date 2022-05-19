#include <iostream>
#include "Punto.h"
using namespace std;

int main(void){

    Punto A,B,C,D;

    cout<<"Ingresa A"<<endl;
    cin>>A;
    cout<<"Ingresa B"<<endl;
    cin>>B;

    C = A+B;
    D = A-B;

    cout<<"  A"<<A<<endl
        <<"  B"<<B<<endl
        <<"A+B"<<C<<endl
        <<"A-B"<<D<<endl;

    return 0;
}
