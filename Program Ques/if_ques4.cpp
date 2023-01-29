#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter the Value: ";
    cin>>ch;

    if (ch>='a' && ch<='z')
    {
        cout<<"Lower case";
    }
    else if (ch>='A' && ch<='Z')
    {
        cout<<"Upper Case";
    }
    else if (ch>='0' && ch<='9')
    {
        cout<<"Numeric Value";
    }
    else
    {
        cout<<"NOT A VALID INPUT";
    }
    
    
       
}