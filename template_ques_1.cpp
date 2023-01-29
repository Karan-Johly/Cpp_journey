#include<iostream>
using namespace std;

template <class T>

T swapi(T a, T b)
{
    cout<<endl;
    cout<<"Before Swap a= "<<a<<" b= "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After Swap a= "<<a<<" b= "<<b<<endl;
}

int main()
{
    int i1,i2;
    float f1,f2;
    long L1,L2;
    double d1,d2;
    cout<<"Enter Two Integer=";
    cin>>i1>>i2;
    cout<<"Enter Two Float=";
    cin>>f1>>f2;
    cout<<"Enter Two Long=";
    cin>>L1>>L2;
    cout<<"Enter Two Double=";
    cin>>d1>>d2;

    swapi(i1,i2);
    swapi(f1,f2);
    swapi(L1,L2);
    swapi(d1,d2);
}
