#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"To which number you want to find Sum of even numbers: ";
    cin>>num;
    int sum=0;

    for (int i = 1; i <= num; i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
    cout<<sum;
    
}