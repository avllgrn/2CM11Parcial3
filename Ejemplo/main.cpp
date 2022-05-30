#include <iostream>
#include "Punto.h"
using namespace std;

void leeMatriz(Punto** X, int m, int n);
void muestraMatriz(Punto** X, int m, int n);
void sumaMatrices(Punto** X, Punto** Y, Punto** Z, int m, int n);
void restaMatrizces(Punto** X, Punto** Y, Punto** Z, int m, int n);

int main(void){
    Punto** A;
    Punto** B;
    Punto** C;
    Punto** D;
    int m1,n1,m2,n2,i,j;

    cout<<"Ingresa m1 ";
    cin>>m1;
    cout<<"Ingresa n1 ";
    cin>>n1;
    cout<<"Ingresa m2 ";
    cin>>m2;
    cout<<"Ingresa n2 ";
    cin>>n2;

    if(m1!=m2 || n1!=n2)
        cout<<"Error! No pueden sumarse ni restarse... =^("<<endl;
    else{
        A = new Punto*[m1];      //Se reserva dinamicamente memoria
        for(i=0; i<m1; i++)      //para una matriz de m1 filas y
            A[i] = new Punto[n1];//n1 columnas

        B = new Punto*[m2];      //Se reserva dinamicamente memoria
        for(i=0; i<m2; i++)      //para una matriz de m1 filas y
            B[i] = new Punto[n2];//n1 columnas

        C = new Punto*[m2];      //Se reserva dinamicamente memoria
        for(i=0; i<m2; i++)      //para una matriz de m1 filas y
            C[i] = new Punto[n2];//n1 columnas

        D = new Punto*[m2];      //Se reserva dinamicamente memoria
        for(i=0; i<m2; i++)      //para una matriz de m1 filas y
            D[i] = new Punto[n2];//n1 columnas

        cout<<endl<<"Ingresa A"<<endl;
        leeMatriz(A,m1,n1);
        cout<<endl<<endl;
        cout<<endl<<"Ingresa A"<<endl;
        leeMatriz(B,m2,n2);
        cout<<endl<<endl;

        sumaMatrices(A,B,C,m1,n2);
        restaMatrizces(A,B,D,m1,n2);

        cout<<"A"<<endl;
        muestraMatriz(A,m1,n1);
        cout<<endl<<endl;
        cout<<"B"<<endl;
        muestraMatriz(B,m2,n2);
        cout<<endl<<endl;
        cout<<"C"<<endl;
        muestraMatriz(C,m1,n2);
        cout<<endl<<endl;
        cout<<"D"<<endl;
        muestraMatriz(D,m1,n2);
        cout<<endl<<endl;

        //Se libera la memoria que se reservo para una matriz de m1 filas y n1 columnas, en tiempo de ejecucion
        for(i=0; i<m1; i++)  //Se libera la memoria que
            delete[] A[i];  //se reservo dinamicamente para
        delete[] A;         //una matriz de m1 filas n1 columnas

        //Se libera la memoria que se reservo para una matriz de m1 filas y n1 columnas, en tiempo de ejecucion
        for(i=0; i<m2; i++)  //Se libera la memoria que
            delete[] B[i];  //se reservo dinamicamente para
        delete[] B;         //una matriz de m1 filas n1 columnas

        //Se libera la memoria que se reservo para una matriz de m1 filas y n1 columnas, en tiempo de ejecucion
        for(i=0; i<m1; i++)  //Se libera la memoria que
            delete[] C[i];  //se reservo dinamicamente para
        delete[] C;         //una matriz de m1 filas n1 columnas

        //Se libera la memoria que se reservo para una matriz de m1 filas y n1 columnas, en tiempo de ejecucion
        for(i=0; i<m1; i++)  //Se libera la memoria que
            delete[] D[i];  //se reservo dinamicamente para
        delete[] D;         //una matriz de m1 filas n1 columnas

    }


    return 0;
}

void leeMatriz(Punto** X, int m, int n){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<endl<<"Ingresa ["<<i<<"]["<<j<<"] "<<endl;
            cin>>X[i][j];
        }
        cout<<endl;
    }
}
void muestraMatriz(Punto** X, int m, int n){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            cout<<X[i][j]<<"\t";
        cout<<endl;
    }
}
void sumaMatrices(Punto** X, Punto** Y, Punto** Z, int m, int n){
    int i,j;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            Z[i][j] = X[i][j] + Y[i][j];

}
void restaMatrizces(Punto** X, Punto** Y, Punto** Z, int m, int n){
    int i,j;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            Z[i][j] = X[i][j] - Y[i][j];

}
