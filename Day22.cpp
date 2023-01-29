#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int maxi=50;
    char name[maxi];
    int i,l=0;
    cout<<"Enter your Name =";
    cin.getline(name,maxi);
    for(i=0;name[i]!='\0';i++)
    {
        l++;
    }
    cout<<l;
}
