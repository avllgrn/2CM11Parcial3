#include <iostream>
#include "Punto.h"
using namespace std;

int main(void){

    Punto A(1.2,3.4);

    cout<<A<<endl;

    cout<<(++A)<<endl;
    cout<<A<<endl<<endl;

    cout<<(A++)<<endl;
    cout<<A<<endl;

    return 0;
}
