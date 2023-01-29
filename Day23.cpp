#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    short c=0;
    int j,i;
    char first[50];
    cout<<"Enter first string"; cin.getline(first,50);
    char second[50];
    cout<<"Enter second string"; cin.getline(second,50);
    for (int i = 0; first[i]!='\0'; i++)
    {
        c++;
    }
    for (j=c,i = 0; second[i]!='\0'; i++,j++)
    {
        first[j]=second[i];
    }
    first[j]='\0';
    cout<<first;    
}