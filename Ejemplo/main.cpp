#include <iostream>
#include <typeinfo>
using namespace std;

template<typename T> T suma(T x, T y);

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

template<typename T> T suma(T x, T y){
    T z;
    cout<<"suma "<<typeid(x).name()<<endl;
    z = x+y;
    return z;
}
