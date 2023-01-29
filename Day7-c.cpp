#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    cout<<"Enter any number :";
    cin>>n;

    label:

    if(i<=10)
    {
        cout<<n<<" X "<<i<<" = "<<n*i<<endl;
        i++;
        goto label;
    }

}
