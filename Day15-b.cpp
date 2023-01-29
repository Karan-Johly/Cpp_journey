#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter no. of rows you want in Array: ";
    cin>>row;
    cout<<"Enter no. of columns you want in Array: ";
    cin>>col;
    int ar[row][col];
    int r,c,sum=0;
    int counting=0;
    for(int r=0; r<row; r++)
    {
        for(c=0; c<col; c++)
        {
            cout<<"Enter the element "<<r<<c<<" :";
            cin>>ar[r][c];
        }

        cout<<endl;
    }

    for(int r=0; r<row; r++)
    {
        for(c=col; c>0; c--)
        {
            if(r!=c)
            {

            }
            else
            {
                ar[r][c]=0;
            }
        }
        cout<<endl;
    }

    for(int r=0; r<row; r++)
    {
        for(c=0; c<col; c++)
        {
            int array2d=ar[r][c];
            cout<<array2d<<'\t';
        }
        cout<<endl;
    }
}

/*
    for(int r=0; r<=2; r++)
    {
        for(c=0; c<=2; c++)
        {
            counting+=1;
            sum=sum+ar[r][c];
        }
    }
}
*/
