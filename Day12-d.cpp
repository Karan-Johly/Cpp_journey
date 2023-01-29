#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter Array Limit: ";
    cin>>n;

    int ar[n];

    for(i=0; i<n; i++)
    {
        cout<<"Enter Your Array Element["<<i<<"] =";
        cin>>ar[i];
    }
    for(int i=n-1; i>=0; i--)
    {
        sum=sum+ar[i];
    }
    cout<<endl;
    cout<<"Sum of Array:\n";
    cout<<sum;
    cout<<endl;
    cout<<"Average of Array:\n";
    cout<<sum/n;

}
