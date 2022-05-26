#include <iostream>
using namespace std;

int main(void){

    int V[10];
    int i;

    for(i=0; i<10; i++)
        cout<<"V["<<i<<"] = "<<V[i]<<endl;

    for(i=0; i<10; i++)
        V[i] = 0;

    for(i=0; i<10; i++)
        cout<<"V["<<i<<"] = "<<V[i]<<endl;


    for(i=0; i<10; i++){
        cout<<"Ingresa V["<<i<<"] ";
        cin>>V[i];
    }

    for(i=0; i<10; i++)
        cout<<"V["<<i<<"] = "<<V[i]<<endl;

    return 0;
}
