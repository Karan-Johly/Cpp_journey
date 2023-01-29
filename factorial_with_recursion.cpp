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
int findingfactorialRecursion(int n)
{
    if(n>1)
        return n*findingfactorialRecursion(n-1);
    else
        return n;
}
int main()
{
    int n;
    cout<<"Enter the number whose factorial you want: ";
    cin>>n;
    cout<<"Finding Factorial using function="<<findingfactorialNormal(n)<<endl;
    cout<<"Finding Factorial using recursion="<<findingfactorialRecursion(n)<<endl;

}

