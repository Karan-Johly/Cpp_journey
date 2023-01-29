#include<iostream>
using namespace std;
int main()
{
    int ar[10];
    int i,n,val,top=0,bot,flag=0,loc,mid;

    cout<<"How Many Elements You Want To Enter:";
    cin>>n;
    if(n<=10)
    {
        for(i=0; i<n; i++)
        {
            cout<<"Enter Array Element ["<<i<<"] (Only Sorted Values) =";
            cin>>ar[i];
        }
        cout<<"Enter Searching Value:";
        cin>>val;
        bot=n-1;
        mid=(top+bot)/2;
        while(top<=bot && flag==0)
        {
            if(ar[mid]==val)
            {
                flag=1;
                loc=mid;
                break;
            }
            else if(ar[mid]<val)
            {
                top=mid+1;
            }
            else if(ar[mid]>val)
            {
                bot=mid-1;
            }
            mid=(top+bot)/2;
        }
        if(flag==1)
            cout<<"Position Found="<<loc;
        else
            cout<<"Not Found";
    }
    else
    {
        cout<<"Over Limit";
    }


}
