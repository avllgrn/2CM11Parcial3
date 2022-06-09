#include <iostream>
#include <stdlib.h>
#include "TPila.h"
using namespace std;

int main(void){
    TPila<char> P;
    if(P.estaVacia())
        cout<<"Pila vacia"<<endl;

    P.push('@');system("pause");
    P.push('#');system("pause");
    P.push('&');system("pause");
    P.push('?');system("pause");

    cout<<P.pop()<<endl;system("pause");
    cout<<P.pop()<<endl;system("pause");
    P.push('{');system("pause");
    cout<<P.pop()<<endl;system("pause");
    cout<<P.pop()<<endl;system("pause");
    cout<<P.pop()<<endl;system("pause");

    if(P.estaVacia())
        cout<<"Pila vacia"<<endl;

    return 0;
}
