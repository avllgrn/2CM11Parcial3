#include <iostream>
#include <stdlib.h>
#include "Punto.h"
using namespace std;

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

        for(i=0; i<n1; i++){
            cout<<"Ingresa V1["<<i<<"] "<<endl;
            cin>>V1[i];
            cout<<endl;
        }
        system("cls");
        for(i=0; i<n2; i++){
            cout<<"Ingresa V2["<<i<<"] "<<endl;
            cin>>V2[i];
            cout<<endl;
        }
        system("cls");
        for(i=0; i<n1; i++){
            V3[i] = V1[i] + V2[i];
            V4[i] = V1[i] - V2[i];
        }

        for(i=0; i<n1; i++){
            cout<<V1[i]<<"\t+\t";
            cout<<V2[i]<<"\t=\t";
            cout<<V3[i]<<endl;
        }

        cout<<endl;

        for(i=0; i<n1; i++){
            cout<<V1[i]<<"\t-\t";
            cout<<V2[i]<<"\t=\t";
            cout<<V4[i]<<endl;
        }

        delete[] V1;//Se libera la memoria solicitada en tiempo de ejecucion
        delete[] V2;//Se libera la memoria solicitada en tiempo de ejecucion
        delete[] V3;//Se libera la memoria solicitada en tiempo de ejecucion
        delete[] V4;//Se libera la memoria solicitada en tiempo de ejecucion
    }

    return 0;
}
