#include <iostream>
using namespace std;

int main(void){
    int** M;
    int m,n,i,j;

    cout<<"Ingresa m ";
    cin>>m;
    cout<<"Ingresa n ";
    cin>>n;

    M = new int*[m];      //Se reserva dinamicamente memoria
    for(i=0; i<m; i++)      //para una matriz de m filas y
        M[i] = new int[n];//n columnas


    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            M[i][j] = 0;

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
