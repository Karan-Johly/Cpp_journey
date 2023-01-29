#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int maxi=50;
    char name[maxi],rev[20];
    int i,l=0,m=0;
    cout<<"Enter your Name =";
    cin.getline(name,maxi);
    for(i=0;name[i]!='\0';i++)
    {
        l++;
    }
    for(i=l-1;i>=0;i--)
    {
        rev[m]=name[i];
        m++;
    }
    rev[m]='\0';
    cout<<rev;
}

