#include<iostream>
using namespace std;
int recursiontable(int n,int i);
int main()
{
    int n,i=1;
    cout<<"Enter the number whose table you want: ";
    cin>>n;
    cout<<recursiontable(n,i);
}
int recursiontable(int n,int i)
{
    if(i<=10)
    {
        cout<<n<<" X "<<i<<" = "<<n*i<<endl;
    }
    return recursiontable(n,i+1);
}
