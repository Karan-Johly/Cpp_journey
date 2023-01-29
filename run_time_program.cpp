#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num;
    double res;
    cout<<"Enter a number: ";
    cin>>num;
    try
    {
        if(num>100)
            throw 10;
        if(num<=0)
        {
            throw 'E';
            cout<<"Square root of "<< num << "is ="<<sqrt(num);
        }

    }
    catch(int)
    {
        cout<<"Exception : out of range \n";
    }
    catch(char)
    {
        cout<<"Exception : Square root of negative number doesn't exist";
    }








    /*
    try
    {
        int a,b;
        cout<<"Enter first no.=";
        cin>>a;
        cout<<"Enter Second no.=";
        cin>>b;

        if(b==0)
        {
            throw 1001;
            cout<<a/b;
        }
    }
    catch(int i)
    {
            cout<<"Do not divide a value by 0 Error no :"<<i;
    }
    */
}

