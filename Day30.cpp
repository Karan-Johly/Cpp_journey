#include<iostream>
using namespace std;

class dost1
{
public:
    void output()
    {
        cout<<"Hello Dost one"<<endl;
    }
};

class dost2:dost1
{
public:
    void output()
    {
        dost1::output();
        cout<<"Hello Dost two"<<endl;
    }
};

int main()
{
    dost2 d2;
    d2.output();
}
