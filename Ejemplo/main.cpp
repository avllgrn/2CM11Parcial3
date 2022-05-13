#include <iostream>
using namespace std;

void suma(void);
void suma(int a);
void suma(float a, float b);
void suma(string a, string b);

int main(void){

    suma();
    suma(2);
    suma(2,3);
    suma(2.2,3.3);
    suma("2","3");

    return 0;
}

void suma(void){
    cout<<2<<" + "<<3<<" = "<<2+3<<endl;
}

void suma(int a){
    cout<<a<<" + "<<3<<" = "<<a+3<<endl;
}

void suma(float a, float b){
    cout<<a<<" + "<<b<<" = "<<a+b<<endl;
}

void suma(string a, string b){
    cout<<a<<" + "<<b<<" = "<<"5"<<endl;
}
