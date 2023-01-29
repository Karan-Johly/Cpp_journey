#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    short o,l,s,f,t,fr;
    cout<<"Enter Six Numbers: "<<endl;
    cin>>o;
    cin>>l;
    cin>>s;
    cin>>f;
    cin>>t;
    cin>>fr;

    cout<<"\nNumbers you entered are :"<<endl;
    cout<<setw(8)<<o<<setw(8)<<l<<endl;
    cout<<setw(8)<<s<<setw(8)<<f<<endl;
    cout<<setw(8)<<t<<setw(8)<<fr<<endl;
}
