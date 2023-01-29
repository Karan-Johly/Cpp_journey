#include<iostream>
using namespace std;

int main()
{
    int n, i, ar[10], newitem, deleteitem, loc;
    cout<<"Enter your limit :";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<"Enter Array Element["<<i<<"]=";
        cin>>ar[i];
    }

    int choice;

    cout<<"Instructions :- \n Enter '1' if you want to insert an item \n Enter '2' if you want to delete an item"<<endl;
    cin>>choice;
    if(choice == 1)
    {
        cout<<"Enter New item: ";
        cin>>newitem;
        cout<<"Enter location for New Item=";
        cin>> loc;

        for(i=n; i>loc; i--)
        {
            ar[i]=ar[i-1];
        }
        ar[loc]=newitem;
    }

    else if(choice == 2)
    {
        cout<<"Enter the item you want to delete";
        cin>>deleteitem;
        cout<<"Enter the item location also: ";
        cin>>loc;
        for(i=loc; i<n-1; i++)
        {
            ar[i]=ar[i+1];
        }


    }
    else
    {
        cout<<"INVALID INPUT"<<endl;
    }
    for(i=0; i<=n-2; i++)
    {
        cout<<i<<"."<<ar[i]<<endl;
    }
}
