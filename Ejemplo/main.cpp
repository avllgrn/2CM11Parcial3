#include <iostream>
#include "Punto.h"
using namespace std;

int main(void){
    Punto** M;
    int m,n,i,j;

    cout<<"Ingresa m ";
    cin>>m;
    cout<<"Ingresa n ";
    cin>>n;

    M = new Punto*[m];      //Se reserva dinamicamente memoria
    for(i=0; i<m; i++)      //para una matriz de m filas y
        M[i] = new Punto[n];//n columnas


    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            cout<<M[i][j]<<"\t";
        cout<<endl;
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<endl<<"Ingresa M["<<i<<"]["<<j<<"] "<<endl;
            cin>>M[i][j];
        }
        cout<<endl;
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            cout<<M[i][j]<<"\t";
        cout<<endl;
    }

    //Se libera la memoria que se reservo para una matriz de m filas y n columnas, en tiempo de ejecucion
    for(i=0; i<m; i++)  //Se libera la memoria que
        delete[] M[i];  //se reservo dinamicamente para
    delete[] M;         //una matris de m filas n columnas

    return 0;
}
