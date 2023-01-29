/*
#include<iostream>
using namespace std;
int main()
{
    int z=1;
    for(int i=1; i<=5; i++)
    {
        for(int j=5; j>=i; j--)
        {
            cout<<" "<<z;
        }
        cout<<endl;
    }
}
*/

#include<iostream>
using namespace std;
int main()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=i; j<=5; j++)
        {
            cout<<" "<<j;
        }
        cout<<endl;
    }
}
