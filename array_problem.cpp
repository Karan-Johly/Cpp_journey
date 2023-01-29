#include<iostream>
using namespace std;
int main()
{
    int ar[10],i,item,pos,n,flag;
    cout<<"Enter array limit";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"Enter array element["<<i<<"]";
        cin>>ar[i];
    }
    cout<<"Enter the item to be deleted: ";
    cin>>item;
    for (i = 0; i <=n; i++)
    {
        if(item==ar[i])
        {
            flag=1;
        }
    }

    if(flag==1)
    {
        cout<<"elements ="<<endl;
        for (i = 0; i < n-1; i++)
        {
            cout<<ar[i]<<endl;
        }        
    }
    else
    {
        cout<<"Not Found";
    }
    
}
