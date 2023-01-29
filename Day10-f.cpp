#include<iostream>
using namespace std;
int main()
{
    int i=1;
    while(i<=10)
    {
        if(i%2==0)
        {
            break;
        }
        else
        {
            cout<<i<<endl;
        }
        i++;
    }
}
