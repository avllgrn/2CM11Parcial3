#include <iostream>
#include <stdlib.h>
#include "Pila.h"
using namespace std;

int main(void){
    Pila P;
    int op,d;

    do{
        system("cls");
        cout<<"1. push"<<endl
            <<"2. pop"<<endl
            <<"3. libera Pila"<<endl
            <<"4. Salir"<<endl
            <<"Cual es tu opcion? ";
        cin>>op;
        system("cls");
        switch(op){
            case 1:
                cout<<"Ingresa dato ";cin>>d;
                P.push(d);
                break;
            case 2:
                if(P.estaVacia()){
                    cout<<"La pila esta vacia... =("<<endl;
                }
                else{
                    d = P.pop();
                    cout<<"Salio nodo con dato "<<d<<endl<<endl;
                }
                break;
            case 3:
                P.liberaPila();
                break;
            case 4:
                cout<<"Adios! =)"<<endl<<endl;
                break;
            default :
                cout<<"Opcion invalida...! =("<<endl<<endl;
                break;
        }
        if(op!=4)
            system("pause");

    }while(op!=4);

    return 0;
}
