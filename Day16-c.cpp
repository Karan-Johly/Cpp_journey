#include<iostream>
using namespace std;
struct student
{
    char name[20];
    int rollno;
    float fee;
};

int main()
{
    student obj;
    cout<<"No of Bytes allocated to obj="<<sizeof(obj)<<endl;
    cout<<"Address allocated to obj="<<&obj;

}
