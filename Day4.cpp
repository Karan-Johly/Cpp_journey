#include<iostream>
using namespace std;
int main()
{
    short first=10;
    short second=20;

    first=first*second;
    second=first / second;
    first=first / second;
    cout<<first<<endl;
    cout<<second;

}
