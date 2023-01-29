#include<iostream>
using namespace std;
int main()
{
    short a=932;
    short rev_number=0;
    short rem;
    rem=a%10;
    rev_number=rev_number*10+rem;
    cout<<rev_number;
    a=a/10;
    rem=a%10;
    cout<<a;
}
