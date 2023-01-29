#include<iostream>
using namespace std;
void printtable(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    
}
int main()
{
    int num;
    cout<<"Enter your number=";
    cin>>num;
    printtable(num);
}