#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number whose factorial you want: ";
    cin >> n;
    int temp=1;
    for(int i=1; i<=n; i++)
    {
        temp=temp*i;
    }
    cout<<temp;

}
