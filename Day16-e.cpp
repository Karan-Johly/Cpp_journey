#include<iostream>
using namespace std;
struct student
{
    char name[10];
    int rollno,amt;
    float fee;
};

int main()
{
    student obj={"Gagan",1,250,123.123};

    cout<<"Address allocated to obj="<<unsigned(&obj)<<endl;
    cout<<"No of bytes allocated to obj="<<sizeof(obj)<<endl;

    cout<<"Address allocated to name="<<unsigned(&obj.name)<<endl;
    cout<<"No of bytes allocated to name="<<sizeof(obj.name)<<endl;

    cout<<"Address allocated to rollno="<<unsigned(&obj.rollno)<<endl;
    cout<<"No of bytes allocated to rollno="<<sizeof(obj.rollno)<<endl;

    cout<<"Address allocated to amt="<<unsigned(&obj.amt)<<endl;
    cout<<"No of bytes allocated to amt="<<sizeof(obj.amt)<<endl;

    cout<<"Address allocated to fee="<<unsigned(&obj.fee)<<endl;
    cout<<"No of bytes allocated to fee="<<sizeof(obj.fee)<<endl;

}
