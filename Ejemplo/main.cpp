#include <iostream>
using namespace std;

int main(void){

    int V[10];
    int i,n;

    cout<<"Ingresa n ";
    cin>>n;

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

    return 0;
}
