#include<iostream>
using namespace std;
int main()
{
    int j;
    for(int i=1; i<=7; i++)
    {
        for(j=i; j<=7; j++)
        {
            cout<<" "<<j;
        }
        for(int c=1;c<=i-1;c++)
        {
            cout<<" "<<c;
        }
        cout<<endl;
    }
}

/*
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    for(a=1;a<=7;a++)
    {
        for(b=1;b<=a;b++)
        {
            cout<<" "<<b;
        }
        for(c=1;c<=b;c++)
        {
            cout<<" "<<c;
        }
        cout<<endl;
    }

}
*/
