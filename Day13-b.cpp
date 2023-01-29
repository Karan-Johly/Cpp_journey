
//BUBBLE SORT

#include<iostream>
using namespace std;
int main()
{
    int n,j,temp;

    cout<<"How Many Elements You Want To Enter:";
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter Array Element ["<<i<<"]: ";
        cin>>ar[i];
    }
    cout<<"unsorted elements"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<ar[i]<<endl;
    }
    //Sorting Process
    int i=0;
    while(i<n-1)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(ar[j]>ar[j+1])
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
        i++;
    }
    cout<<"sorted elements"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<ar[i]<<endl;
    }
}
