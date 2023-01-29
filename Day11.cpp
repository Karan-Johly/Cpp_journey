#include<iostream>
using namespace std;
int main()
{
    int num,rem,rev=0;
    cout<<"Enter any number: ";
    cin>>num;
    int original = num;

    for(;num>0;)
    {
        rem=num%10;
        num=num/10;
        rev=rev*10+rem;
    }
    cout<<rev<<endl;

    if(rev == original)
    {
        cout<<"Given number is a Palindrome";
    }
    else
        cout<<"Given number is not a Palindrome";
}
