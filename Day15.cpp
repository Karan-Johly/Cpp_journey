#include<iostream>
using namespace std;
int main()
{
    // int row,col;
    // cout<<"Enter no. of rows you want in Array: ";
    // cin>>row;
    // cout<<"Enter no. of columns you want in Array: ";
    // cin>>col;
    // int row,col;
    // int ar[row][col];
    int r,c,sum=0;
    cout<<"Enter no. of rows you want in Array: ";
    cin>>r;
    cout<<"Enter no. of columns you want in Array: ";
    cin>>c;
    int ar[r][c];
    int counting=0;
    for(int r=0; r<=2; r++)
    {
        for(c=0; c<=2; c++)
        {
            int arrayof2d=ar[r][c];
            cout<<r<<c<<"."<<arrayof2d<<"\t";
        }

        cout<<endl;
    }
    for(int r=0; r<=2; r++)
    {
        for(c=0; c<=2; c++)
        {
            counting+=1;
            sum=sum+ar[r][c];
        }
    }
    cout<<"Sum of an Array: \n";
    cout<<sum<<endl;
    cout<<"Average of an Array: "<<endl;
    cout<<sum/counting;
}
