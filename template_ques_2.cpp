#include<iostream>
using namespace std;

template <class T>

T bubble_sort(T n)
{
    T j;
    T temp;
    T ar[n];
    for(T i=0; i<n; i++)
    {
        cout<<"Enter Array Element ["<<i<<"]: ";
        cin>>ar[i];
    }
    cout<<"unsorted elements"<<endl;
    for(T i=0; i<n; i++)
    {
        cout<<ar[i]<<endl;
    }
    //Sorting Process
    T i=0;
    while(i<n-1)
    {
        for(T j=0; j<n-i-1; j++)
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

int main()
{
    int n;
    cout<<"How Many Elements You Want To Enter:";
    cin>>n;
    bubble_sort(n);
}
