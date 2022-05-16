#include <iostream>
using namespace std;

void suma(void);
void suma(int a);
void suma(int a, int b);
void suma(float i, float j);
void suma(string a, string b);

int main(void){

    int w = 2;
    int x = 3;
    float y = 2;
    float z = 3;
    string cad1 = "2";
    string cad2 = "3";

    suma();
    suma(w);
    suma(w,x);
    suma(y,z);
    suma(cad1,cad2);

    return 0;
}

void suma(void){
    cout << 2 << " + " << 3 << " = " << 2+3 << endl;
}
void suma(int a){
    cout << a << " + " << 3 << " = " << a+3 << endl;
}
void suma(int a, int b){
    cout << a << " + " << b << " = " << a+b << endl;
}
void suma(float a, float b){
    cout << a << " + " << b << " = " << a+b << endl;
}
void suma(string a, string b){
    cout << a << " + " << b << " = " << "5" << endl;
}
