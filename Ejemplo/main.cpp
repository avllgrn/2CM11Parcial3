#include <iostream>
#include "Punto.h"
using namespace std;

int main(void){
    Punto* V;
    int i,n;

    cout<<"Ingresa n ";
    cin>>n;

    V = new Punto[n];//Se solicita memoria en tiempo de ejecucion

    for(i=0; i<n; i++)
        cout<<"V["<<i<<"] = "<<V[i]<<endl;

    for(i=0; i<n; i++){
        cout<<"Ingresa V["<<i<<"] "<<endl;
        cin>>V[i];
        cout<<endl;
    }

    for(i=0; i<n; i++)
        cout<<"V["<<i<<"] = "<<V[i]<<endl;

    delete[] V;//Se libera la memoria solicitada en tiempo de ejecucion

    return 0;
}
