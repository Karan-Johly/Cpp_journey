#include<iostream>
using namespace std;
class student
{
    public:
    char name[30];
    int rollno;
    float fees;
};

int main()
{
    student st1;
    cout<<"Enter your Name: ";
    cin.get(st1.name,30);
    cout<<"Enter your Rollno: ";
    cin>>st1.rollno;
    cout<<"Enter your Fees: ";
    cin>>st1.fees;

    cout<<"*****Displaying Information*****"<<endl;
    cout<<"Name: "<<st1.name<<endl;
    cout<<"Rollno: "<<st1.rollno<<endl;
    cout<<"Fees: "<<st1.fees<<endl;


}