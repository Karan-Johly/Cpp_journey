#include<iostream>
using namespace std;
int main()
{
    int num,temp=0;
    cout<<"Enter any number: ";
    cin>>num;
    if(num > 1)
    {
        for(int i=2; i<=num; i++)
        {
            if(num%i == 0)
            {
                temp++;
            }
        }
        if (temp==1)
        {
            cout<<"Number is Prime";
        }
        else
            cout<<"Not a Prime Number";
    }
    else
    {
        cout<<"INVALID OUTPUT";
    }
}
