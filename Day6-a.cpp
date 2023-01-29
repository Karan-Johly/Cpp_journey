#include<iostream>
using namespace std;

int main()
{
    short a,b,c;
    cout<<"Enter any three number :";
    cin>>a;
    cin>>b;
    cin>>c;
/*
    if (a>b && a>c)
        cout<<a<<" is the greatest number from all";
    else if (b>a && b>c )
        cout<<b<<" is the greatest number from all";
    else
        cout<<c<<" is the greatest number from all";
*/
    if(a>b)
        if(a>c)
            cout<<a<<" is the greatest number"<<endl;
        else
            cout<<a<<" is not the greatest number"<<endl;
    if(b>a)
        if(b>c)
            cout<<b<<" is the greatest number"<<endl;
        else
            cout<<b<<" is not the greatest number"<<endl;
    if(c>a)
        if(c>b)
            cout<<c<<" is the greatest number"<<endl;
        else
            cout<<c<<" is not the greatest number"<<endl;

}
