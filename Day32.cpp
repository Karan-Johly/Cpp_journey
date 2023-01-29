#include<iostream>
using namespace std;

template<class T>
T sum(T a,T b)
{
    return a+b;
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

    cout<<"Sum of two integer = "<<sum(i1,i2)<<endl;
    cout<<"Sum of two float = "<<sum(f1,f2)<<endl;
    cout<<"Sum of two long  = "<<sum(L1,L2)<<endl;
    cout<<"Sum of two doubles = "<<sum(d1,d2)<<endl;
    cout<<"Sum of two characters = "<<sum<char>('x','z')<<endl;
}
