#include <iostream>
using namespace std;

int suma(int x, int y);
float suma(float x, float y);
long suma(long x, long y);
double suma(double x, double y);

int main(void){
    int a,b,c;

    cout<<"Igresa a ";cin>>a;
    cout<<"Igresa b ";cin>>b;
    c=suma(a,b);
    cout<<a<<" + "<<b<<" = "<<c<<endl;

    float d,e,f;

    cout<<"Igresa d ";cin>>d;
    cout<<"Igresa e ";cin>>e;
    f=suma(d,e);
    cout<<d<<" + "<<e<<" = "<<f<<endl;

    long g,h,i;

    cout<<"Igresa g ";cin>>g;
    cout<<"Igresa h ";cin>>h;
    i=suma(g,h);
    cout<<g<<" + "<<h<<" = "<<i<<endl;

    double j,k,l;

    cout<<"Igresa j ";cin>>j;
    cout<<"Igresa k ";cin>>k;
    l=suma(j,k);
    cout<<j<<" + "<<k<<" = "<<l<<endl;

    return 0;
}

int suma(int x, int y){
    int z;
    cout<<"suma "<<"int"<<endl;
    z = x+y;
    return z;
}
float suma(float x, float y){
    float z;
    cout<<"suma "<<"float"<<endl;
    z = x+y;
    return z;
}
long suma(long x, long y){
    float z;
    cout<<"suma "<<"long"<<endl;
    z = x+y;
    return z;
}
double suma(double x, double y){
    double z;
    cout<<"suma "<<"double"<<endl;
    z = x+y;
    return z;
}
