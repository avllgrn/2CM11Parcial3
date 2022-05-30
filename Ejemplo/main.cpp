#include <iostream>
#include "Complejo.h"
using namespace std;

void leeMatriz(Complejo** X, int m, int n);
void muestraMatriz(Complejo** X, int m, int n);
void sumaMatrices(Complejo** X, Complejo** Y, Complejo** Z, int m, int n);
void restaMatrizces(Complejo** X, Complejo** Y, Complejo** Z, int m, int n);
void multiplicaMatrices(Complejo** X, Complejo** Y, Complejo** Z, int m, int n, int ele);

int main(void){
    Complejo** A;
    Complejo** B;
    Complejo** C;
    int m1,n1,m2,n2,i,j;

    cout<<"Ingresa m1 ";
    cin>>m1;
    cout<<"Ingresa n1 ";
    cin>>n1;
    cout<<"Ingresa m2 ";
    cin>>m2;
    cout<<"Ingresa n2 ";
    cin>>n2;

    if(n1!=m2)
        cout<<"Error! No pueden multiplicarse... =^("<<endl;
    else{
        A = new Complejo*[m1];      //Se reserva dinamicamente memoria
        for(i=0; i<m1; i++)      //para una matriz de m1 filas y
            A[i] = new Complejo[n1];//n1 columnas

        B = new Complejo*[m2];      //Se reserva dinamicamente memoria
        for(i=0; i<m2; i++)      //para una matriz de m1 filas y
            B[i] = new Complejo[n2];//n1 columnas

        C = new Complejo*[m2];      //Se reserva dinamicamente memoria
        for(i=0; i<m2; i++)      //para una matriz de m1 filas y
            C[i] = new Complejo[n2];//n1 columnas

        cout<<endl<<"Ingresa A"<<endl;
        leeMatriz(A,m1,n1);
        cout<<endl<<endl;
        cout<<endl<<"Ingresa B"<<endl;
        leeMatriz(B,m2,n2);
        cout<<endl<<endl;

        multiplicaMatrices(A,B,C,m1,m2,n2);

        cout<<"A"<<endl;
        muestraMatriz(A,m1,n1);
        cout<<endl<<endl;
        cout<<"B"<<endl;
        muestraMatriz(B,m2,n2);
        cout<<endl<<endl;
        cout<<"C"<<endl;
        muestraMatriz(C,m1,n2);
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
    }


    return 0;
}

void leeMatriz(Complejo** X, int m, int n){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<endl<<"Ingresa ["<<i<<"]["<<j<<"] "<<endl;
            cin>>X[i][j];
        }
        cout<<endl;
    }
}
void muestraMatriz(Complejo** X, int m, int n){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            cout<<X[i][j]<<"\t";
        cout<<endl;
    }
}
void sumaMatrices(Complejo** X, Complejo** Y, Complejo** Z, int m, int n){
    int i,j;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            Z[i][j] = X[i][j] + Y[i][j];

}
void restaMatrizces(Complejo** X, Complejo** Y, Complejo** Z, int m, int n){
    int i,j;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            Z[i][j] = X[i][j] - Y[i][j];

}
void multiplicaMatrices(Complejo** X, Complejo** Y, Complejo** Z, int m, int n, int ele){
    int i,j,k;
    for(i=0;i<m;i++)
        for(j=0;j<ele;j++)
            for(k=0;k<n;k++)
               Z[i][j] = Z[i][j] + X[i][k]*Y[k][j];
}
