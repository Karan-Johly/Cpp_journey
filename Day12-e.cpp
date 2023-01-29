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
    int maxi=ar[0];
    int mini=ar[0];
    for(i=0;i<n; i++)
    {
        if(maxi<ar[i])
        {
            maxi=ar[i];
        }
        else
        {
        mini=ar[i];
        }
    }
    cout<<"Maximum Value="<<maxi<<endl;
    cout<<"Minimum Value="<<mini;
}
