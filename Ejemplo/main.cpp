#include <iostream>
#include "Punto.h"
using namespace std;

void funcion(int&a, int& b, int &c);

int main(void){
    int x,y,z;

    cout<<x<<endl
        <<y<<endl
        <<z<<endl<<endl;

    funcion(x,y,z);

    cout<<x<<endl
        <<y<<endl
        <<z<<endl<<endl;

    return 0;
}

void funcion(int&a, int& b, int &c){
    cout<<a<<endl
        <<b<<endl
        <<c<<endl<<endl;

    a=1;b=2;c=3;

    cout<<a<<endl
        <<b<<endl
        <<c<<endl<<endl;
}
