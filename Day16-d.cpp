#include<iostream>
using namespace std;
struct student{
    char name[20];
    int rollno, amt;
    float fee;
};

int main()
{
    student obj={"Gagan",1,250,123.123};
    cout<<"Address allocated to obj="<<unsigned(&obj)<<endl;
    cout<<"No of bytes allocated to obj="<<sizeof(obj)<<endl;

    cout<<"Address allocated to obj="<<unsigned(&obj.name)<<endl;
    cout<<"No of bytes allocated to obj="<<sizeof(obj.name)<<endl;

    cout<<"Address allocated to obj="<<unsigned(&obj.rollno)<<endl;
    cout<<"No of bytes allocated to obj="<<sizeof(obj.rollno)<<endl;

    cout<<"Address allocated to obj="<<unsigned(&obj.amt)<<endl;
    cout<<"No of bytes allocated to obj="<<sizeof(obj.amt)<<endl;

    cout<<"Address allocated to obj="<<unsigned(&obj.fee)<<endl;
    cout<<"No of bytes allocated to obj="<<sizeof(obj.fee)<<endl;

}
