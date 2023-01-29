#include<iostream>
using namespace std;

class dost1
{
    int x,y;
public:
    dost1(){}
    dost1(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    void output()
    {
        cout<<"Hello Dost one: "<<x+y<<endl;
    }
};

class dost2:dost1
{
    int x,y;
public:
    dost2(int x,int y):dost1(500,500)
    {
        this->x=x;
        this->y=y;
    }
    void output()
    {
        dost1::output();
        cout<<"Hello Dost two: "<<x+y<<endl;
    }
};

int main()
{
    dost2 d2(1000,1000);
    d2.output();
}

