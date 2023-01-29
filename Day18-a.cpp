#include<iostream>
using namespace std;

int main()
{
    int row,col;
    int *p;

    cout<<"Enter no. of rows: ";
    cin>>row;

    cout<<"Enter no. of columns: ";
    cin>>col;
    int ar[row][col];
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout<<"Enter the Value for ["<<i<<j<<"] index: "<<endl;
            cin>>ar[i][j];
        }
        
    }
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            p=&ar[i][j];    
            cout<<" Index: ["<<i<<j<<"] Value : "<<*p;
        }
        cout<<endl;
    }

    
}