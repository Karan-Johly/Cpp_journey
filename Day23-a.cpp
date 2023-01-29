#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int max=50;
    char str1[max];
    char str2[max];
    cout<<"Enter first String: "; cin.getline(str1,max);
    cout<<"Enter second String: "; cin.getline(str2,max);

    int k=strcmp(str1,str2);
    if(k==0)
    {
        cout<<"Both strings are alphabetically identical";
    }
    else if (k>0)
    {
        cout<<str1<<" is alphabetically greater than "<<str2;
    }
    else
    {
        cout<<str2<<" is alphabetically greater than "<<str1;
    }
    
}