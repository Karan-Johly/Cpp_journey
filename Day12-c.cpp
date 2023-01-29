#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter Array Limit: ";
    cin>>n;

    int ar[n];

    for(i=0; i<n; i++)
    {
        cout<<"Enter Your Array Element["<<i<<"] =";
        cin>>ar[i];
    }
    for(i=0; i<n; i++)
    {
        cout<<ar[i]<<endl;
    }
}
