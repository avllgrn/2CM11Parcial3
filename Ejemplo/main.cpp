#include <iostream>
#include <stdlib.h>
#include "Punto.h"
using namespace std;

void leeVector(Punto* X, int n);
void muestraVector(Punto* X, int n);
void sumaVectores(Punto* X, Punto* Y, Punto* Z, int n);
void restaVectores(Punto* X, Punto* Y, Punto* Z, int n);


int main(void){
    Punto* V1;
    Punto* V2;
    Punto* V3;
    Punto* V4;
    int i,n1,n2;

    cout<<"Ingresa n1 ";
    cin>>n1;
    cout<<"Ingresa n2 ";
    cin>>n2;

    if(n1 != n2)
        cout<<"Error! no pueden sumarse los vectores... =^("<<endl;
    else{
        system("cls");
        V1 = new Punto[n1];//Se solicita memoria en tiempo de ejecucion
        V2 = new Punto[n2];//Se solicita memoria en tiempo de ejecucion
        V3 = new Punto[n1];//Se solicita memoria en tiempo de ejecucion
        V4 = new Punto[n1];//Se solicita memoria en tiempo de ejecucion

        cout<<"Ingresa V1"<<endl;
        leeVector(V1,n1);
        system("cls");
        cout<<"Ingresa V2"<<endl;
        leeVector(V2,n2);
        system("cls");

        sumaVectores(V1,V2,V3,n1);
        restaVectores(V1,V2,V4,n1);

        cout<<endl;
        cout<<"V1"<<endl;
        muestraVector(V1,n1);
        cout<<endl;
        cout<<"V2"<<endl;
        muestraVector(V2,n2);
        cout<<endl;
        cout<<"V1+V2"<<endl;
        muestraVector(V3,n1);
        cout<<endl;
        cout<<"V1-V2"<<endl;
        muestraVector(V4,n1);

        delete[] V1;//Se libera la memoria solicitada en tiempo de ejecucion
        delete[] V2;//Se libera la memoria solicitada en tiempo de ejecucion
        delete[] V3;//Se libera la memoria solicitada en tiempo de ejecucion
        delete[] V4;//Se libera la memoria solicitada en tiempo de ejecucion
    }

    return 0;
}

void leeVector(Punto* X, int n){
    int i;
    for(i=0; i<n; i++){
        cout<<"Ingresa ["<<i<<"] "<<endl;
        cin>>X[i];
        cout<<endl;
    }
}
void muestraVector(Punto* X, int n){
    int i;
    for(i=0; i<n; i++){
        cout<<X[i]<<endl;
    }
}
void sumaVectores(Punto* X, Punto* Y, Punto* Z, int n){
    int i;
    for(i=0; i<n; i++){
        Z[i] = X[i] + Y[i];
    }
}
void restaVectores(Punto* X, Punto* Y, Punto* Z, int n){
    int i;
    for(i=0; i<n; i++){
        Z[i] = X[i] - Y[i];
    }
}
