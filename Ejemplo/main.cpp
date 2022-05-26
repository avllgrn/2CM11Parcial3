#include <iostream>
using namespace std;

int main(void){
    int* V;
    int i,n;

    cout<<"Ingresa n ";
    cin>>n;

    V = new int[n];//Se solicita memoria en tiempo de ejecucion

    for(i=0; i<n; i++)
        cout<<"V["<<i<<"] = "<<V[i]<<endl;

    for(i=0; i<n; i++)
        V[i] = 0;

    for(i=0; i<n; i++)
        cout<<"V["<<i<<"] = "<<V[i]<<endl;

    for(i=0; i<n; i++){
        cout<<"Ingresa V["<<i<<"] ";
        cin>>V[i];
    }

    for(i=0; i<n; i++)
        cout<<"V["<<i<<"] = "<<V[i]<<endl;

    delete[] V;//Se libera la memoria solicitada en tiempo de ejecucion

    return 0;
}
