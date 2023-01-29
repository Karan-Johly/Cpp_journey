#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    short o,s,t,fr,f,si,se,e,n;
    cout<<"Enter Nine Numbers: "<<endl;
    cin>>o;
    cin>>s;
    cin>>t;
    cin>>fr;
    cin>>f;
    cin>>si;
    cin>>se;
    cin>>e;
    cin>>n;

    cout<<"\nNumbers you entered are :"<<endl;
    cout<<setw(8)<<o<<","<<setw(8)<<s<<","<<setw(8)<<t<<endl;
    cout<<setw(8)<<fr<<","<<setw(8)<<f<<","<<setw(8)<<si<<endl;
    cout<<setw(8)<<se<<","<<setw(8)<<e<<","<<setw(8)<<n<<endl;
}

