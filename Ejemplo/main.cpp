#include <iostream>
using namespace std;

int main(void){
    int** A;
    int** B;
    int** C;
    int** D;
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
        A = new int*[m1];      //Se reserva dinamicamente memoria
        for(i=0; i<m1; i++)      //para una matriz de m1 filas y
            A[i] = new int[n1];//n1 columnas

        B = new int*[m2];      //Se reserva dinamicamente memoria
        for(i=0; i<m2; i++)      //para una matriz de m1 filas y
            B[i] = new int[n2];//n1 columnas

        C = new int*[m2];      //Se reserva dinamicamente memoria
        for(i=0; i<m2; i++)      //para una matriz de m1 filas y
            C[i] = new int[n2];//n1 columnas

        D = new int*[m2];      //Se reserva dinamicamente memoria
        for(i=0; i<m2; i++)      //para una matriz de m1 filas y
            D[i] = new int[n2];//n1 columnas


        for(i=0;i<m1;i++){
            for(j=0;j<n1;j++){
                cout<<endl<<"Ingresa A["<<i<<"]["<<j<<"] "<<endl;
                cin>>A[i][j];
            }
            cout<<endl;
        }
        cout<<endl<<endl;

        for(i=0;i<m2;i++){
            for(j=0;j<n2;j++){
                cout<<endl<<"Ingresa B["<<i<<"]["<<j<<"] "<<endl;
                cin>>B[i][j];
            }
            cout<<endl;
        }
        cout<<endl<<endl;


        for(i=0;i<m1;i++)
            for(j=0;j<n2;j++)
                C[i][j] = A[i][j] + B[i][j];

        for(i=0;i<m1;i++)
            for(j=0;j<n2;j++)
                D[i][j] = A[i][j] - B[i][j];


        cout<<"A"<<endl;
        for(i=0;i<m1;i++){
            for(j=0;j<n1;j++)
                cout<<A[i][j]<<"\t";
            cout<<endl;
        }
        cout<<endl<<endl;

        cout<<"B"<<endl;
        for(i=0;i<m2;i++){
            for(j=0;j<n2;j++)
                cout<<B[i][j]<<"\t";
            cout<<endl;
        }
        cout<<endl<<endl;

        cout<<"C"<<endl;
        for(i=0;i<m1;i++){
            for(j=0;j<n2;j++)
                cout<<C[i][j]<<"\t";
            cout<<endl;
        }
        cout<<endl<<endl;

        cout<<"D"<<endl;
        for(i=0;i<m1;i++){
            for(j=0;j<n2;j++)
                cout<<D[i][j]<<"\t";
            cout<<endl;
        }
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
