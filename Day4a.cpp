#include<iostream>
using namespace std;
int main()
{
    short a=10;
    short b=20;
    //using XOR
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<endl;
    cout<<b;
}
