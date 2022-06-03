#include <iostream>
#include <stdlib.h>
#include "Pila.h"
using namespace std;

int main(void){
    Pila P;
    if(P.estaVacia())
        cout<<"Pila vacia"<<endl;

    P.push(5);system("pause");
    P.push(3);system("pause");
    P.push(7);system("pause");
    P.push(-4);system("pause");

    cout<<P.pop()<<endl;system("pause");
    cout<<P.pop()<<endl;system("pause");
    P.push(9);system("pause");
    cout<<P.pop()<<endl;system("pause");
    cout<<P.pop()<<endl;system("pause");
    cout<<P.pop()<<endl;system("pause");

    if(P.estaVacia())
        cout<<"Pila vacia"<<endl;

    return 0;
}
