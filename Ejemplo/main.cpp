#include <iostream>
#include "Punto.h"
using namespace std;

int main(void){

    Punto A(1,2);
    Punto B(3,4);

    cout<<A<<endl;
    cout<<B<<endl;
    cout<<(A + B)<<endl;
    cout<<A<<endl;
    cout<<B<<endl<<endl;

    cout<<(A += B)<<endl;
    cout<<A<<endl;
    cout<<B<<endl<<endl;

    cout<<A<<endl;
    cout<<B<<endl;
    cout<<(A - B)<<endl;
    cout<<A<<endl;
    cout<<B<<endl<<endl;

    cout<<(A -= B)<<endl;
    cout<<A<<endl;
    cout<<B<<endl<<endl;

    return 0;
}
