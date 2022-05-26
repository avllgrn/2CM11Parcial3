#include <iostream>
using namespace std;

int main(void){

    int V[3];

    V[2] = 123;

    cout << V[2] << endl;

    cin >> V[0];
    cout << V[0] << endl;

    V[1] = V[2] + V[0];
    cout << V[1] << endl;

    cin>>V[10];//Error!

    return 0;
}
