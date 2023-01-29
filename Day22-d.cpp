#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char name[30];
    cout<<"Enter Your Name =";
    cin.getline(name,30);
    for(int i=0; name[i]!='\0'; i++)
    {
        if (name[i]>64 && name[i]<91)
        {
            name[i]=name[i]+32;
        }
        else if (name[i]>96 && name[i]<123)
        {
            name[i]=name[i]-32;
        }
    }
    cout<<name;
}
