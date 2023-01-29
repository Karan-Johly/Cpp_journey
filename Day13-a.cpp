#include<iostream>
using namespace std;
int main()
{
    int i,n,j,temp;

    cout<<"How Many Elements You Want To Enter:";
    cin>>n;
    int ar[n];
    for(i=0; i<n; i++)
    {
        cout<<"Enter Array Element ["<<i<<"]: ";
        cin>>ar[i];
    }
    cout<<"unsorted elements"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<ar[i]<<endl;
    }
    //Sorting Process
    for(i=0; i<n; i++)
    {
            for(j=i+1;j<n;j++)
            {
                if(ar[i]>ar[j])
                {
                    temp=ar[i];
                    ar[i]=ar[j];
                    ar[j]=temp;
                }
            }

    }
    cout<<"sorted elements"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<ar[i]<<endl;
    }
}
