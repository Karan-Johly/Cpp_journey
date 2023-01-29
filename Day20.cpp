#include<iostream>
using namespace std;
int sum(int,int);

int sum(int x, int y)
{
    return x+y;
}
int main()
{
    int x,y;
    
    cout<<"Enter Two no: ";
    cin>>x>>y;
    cout<<sum(x,y);
}
