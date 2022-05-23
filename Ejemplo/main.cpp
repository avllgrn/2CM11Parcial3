#include <iostream>
#include <stdlib.h>
#include "Complejo.h"
using namespace std;

int main(void){

    Complejo A,B,C,D,E,F,G,H,I,J,K,L,M,N;

    cout<<"Ingresa A "<<endl;
    cin>>A;
    cout<<endl;
    cout<<"Ingresa B "<<endl;
    cin>>B;
    system("cls");

    C = A + B;
    D = A - B;
    E = A * B;
    F = A / B;

    cout<<"  A = "<<A<<endl
        <<"  B = "<<B<<endl
        <<"A+B = "<<C<<endl
        <<"A-B = "<<D<<endl
        <<"A*B = "<<E<<endl
        <<"A/B = "<<F<<endl<<endl;
    system("pause");
    system("cls");

    if(A==B)
        cout<<A<<" == "<<B<<endl;
    else
        cout<<A<<" != "<<B<<endl;

    if(A!=B)
        cout<<A<<" != "<<B<<endl<<endl;
    else
        cout<<A<<" == "<<B<<endl<<endl;

    system("pause");
    system("cls");

    C = A;//Para no perder el valor original de A

    cout<<"   A = "<<A<<endl
        <<"   B = "<<B<<endl;
    G = (A+=B);
    cout<<"A+=B = "<<G<<endl
        <<"   A = "<<A<<endl
        <<"   B = "<<B<<endl<<endl;

    A = C;//Se recupera el valor original de A
    cout<<"   A = "<<A<<endl
        <<"   B = "<<B<<endl;
    H = (A-=B);
    cout<<"A-=B = "<<H<<endl
        <<"   A = "<<A<<endl
        <<"   B = "<<B<<endl<<endl;

    A = C;//Se recupera el valor original de A
    cout<<"   A = "<<A<<endl
        <<"   B = "<<B<<endl;
    I = (A*=B);
    cout<<"A*=B = "<<I<<endl
        <<"   A = "<<A<<endl
        <<"   B = "<<B<<endl<<endl;

    A = C;//Se recupera el valor original de A
    cout<<"   A = "<<A<<endl
        <<"   B = "<<B<<endl;
    J = (A/=B);
    cout<<"A/=B = "<<J<<endl
        <<"   A = "<<A<<endl
        <<"   B = "<<B<<endl<<endl;
    system("pause");
    system("cls");

    A = C;//Se recupera el valor original de A
    cout<<"  A = "<<A<<endl;
    K = (++A);
    cout<<"++A = "<<K<<endl
        <<"  A = "<<A<<endl<<endl;

    A = C;//Se recupera el valor original de A
    cout<<"  A = "<<A<<endl;
    L = (A++);
    cout<<"A++ = "<<L<<endl
        <<"  A = "<<A<<endl<<endl;
    system("pause");
    system("cls");

    A = C;//Se recupera el valor original de A
    cout<<"  A = "<<A<<endl;
    M = (--A);
    cout<<"--A = "<<M<<endl
        <<"  A = "<<A<<endl<<endl;

    A = C;//Se recupera el valor original de A
    cout<<"  A = "<<A<<endl;
    N = (A--);
    cout<<"A-- = "<<N<<endl
        <<"  A = "<<A<<endl<<endl;

    return 0;
}
