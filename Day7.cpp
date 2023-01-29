#include<iostream>
using namespace std;
int main()
{
    char file[] = __FILE__;
    char date[] = __DATE__;
    char time[] = __TIME__;
    int line = __LINE__;

    cout<<"File name: "<<file<<"\n";
    cout<<"Date : "<<date<<"\n";
    cout<<"Time : "<<time<<"\n";
    cout<<"Line number : "<<line<<"\n";
    // int i=1;
    // ABC:
    // if(i<=5)
    // {
    //     cout<<i<<endl;
    //     i++;
    //     goto ABC;
    // }
}
