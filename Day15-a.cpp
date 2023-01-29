#include<iostream>
using namespace std;
int main()
{
    int r,c,sum=0;
    cout<<"Enter no. of rows you want in Array: ";
    cin>>r;
    cout<<"Enter no. of columns you want in Array: ";
    cin>>c;
    int ar[r][c];
    int row,col;
    for(int row=0; row<=r; row++)
    {
        for(col=0; col<=c; col++)
        {
            int arrayof2d=ar[row][col];
            cout<<row<<col<<"."<<arrayof2d<<"\t";
        }

        cout<<endl;
    }
    for(int row=0; row<=r; row++)
    {
        for(col=0; col<=c; col++)
        {
            int arrayof2d=ar[row][col];
            cout<<row<<col<<"."<<arrayof2d<<"\t";
        }

        cout<<endl;
    }
}
