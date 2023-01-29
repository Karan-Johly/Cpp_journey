#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int i=1,count=1;
    // char ch='*';
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<j+i-1<<' ';
            cout<<count<<' ';
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }
    
}