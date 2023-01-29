#include<iostream>
using namespace std;
int main()
{

   
    char *name[20];
    int n,i;

    cout<<"How many Elements/Strings you want to Enter= ";
    cin>>n;

    for(i=0; i<n; i++)
    {
        cout<<"Enter Your Name= ";
        name[i] = new char[20];
        cin>>name[i];
    }
    for(i=0; i<n; i++)
    {
        cout<<name[i]<<endl;
    }
    delete (*name);
}