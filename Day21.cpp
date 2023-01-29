#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int max=50;
    char name[max];
    int i,l;
    cout<<"Enter Your Name = ";
    cin.get(name,max);
    l=strlen(name);
    cout<<l;

}