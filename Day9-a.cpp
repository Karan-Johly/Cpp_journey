#include<iostream>
using namespace std;
int main()
{
    int z=1;
    for(int i=1; i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" "<<z;
            z++;
        }
        cout<<endl;
    }
}
