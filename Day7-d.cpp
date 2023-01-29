#include<iostream>
using namespace std;
int main()
{
    int i=1,n,temp,fact;
    cout<<"Enter any number whose factorial you want: ";
    cin>>n;

    finding_factorial:
        temp=n*(n-i);
        i++;
    cout<<temp;

    if(i<=n)
    {

        goto finding_factorial;
    }
}
