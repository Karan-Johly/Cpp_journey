#include<iostream>
using namespace std;
int main()
{
    int num,rem,sum=0;
    cout<<"Enter any number: ";
    cin>>num;
    int org=num;
    while(num>0)
    {
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
    }
    if(sum==org)
    {
        cout<<"Given number is an Armstrong number";
    }
    else
        cout<<"Given number is not an Armstrong number";
}
