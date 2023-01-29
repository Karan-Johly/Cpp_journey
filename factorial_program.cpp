#include<iostream>
using namespace std;

int findingfactorialNormal(int n)
{
    int temp=1;
    for(int i=1; i<=n; i++)
    {
        temp=temp*i;
    }
    return temp;
}
int findingfactorialNormal(int n)
{
    int temp=1;
    for(int i=1; i<=n; i++)
    {
        temp=temp*i;
    }
    return temp;
}
int main()
{
    int n;
    cout<<"Enter the number whose factorial you want: ";
    cin>>n;
    cout<<findingfactorialNormal(n);
}
