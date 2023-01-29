#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter age of voting(18-120): ";
    cin>>age;
    try
    {
        if(age>0 && age<18)
        {
            throw 0;
        }
        else if(age>120)
        {
            throw 'v';
        }
        else if(age<0)
        {
            throw 2.8;
        }
        cout<<"Eligible for voting";
    }

    catch(int i)
    {
        cout<<"Exception: valid age but not eligible for voting";
    }
    catch(...)
    {
        cout<<"Exception: INVALID for voting.";
    }
}

