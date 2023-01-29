#include<iostream>
using namespace std;

class yyy;
class xxx
{
    int x;
public:
    xxx(int xx)
    {
        x=xx;
    }
    void f1(yyy);
};
class yyy
{
    int y;
public:
    yyy(int yy)
    {
        y=yy;
    }
    friend void xxx::f1(yyy);
};
void xxx::f1(yyy objy)
{
    cout<<"Difference = "<< x-objy.y;
}
int main()
{
    xxx ob1(10);
    yyy ob2(5);
    ob1.f1(ob2);
}
