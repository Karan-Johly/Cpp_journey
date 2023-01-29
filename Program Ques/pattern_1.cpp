#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            int temp=n-j+1;
            cout<<temp<<'\n';
            j=j+1;
        }
        cout<<endl;
        i=i+1;        
    }
    
}