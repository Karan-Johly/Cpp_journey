#include<iostream>
using namespace std;

class first
{
    int a;
    int b;
public:
    first()//Default Constructor
    {
        a=10;
        b=20;
    }
    void output()
    {
        cout<<a+b<<endl;
    }
    ~first()//Destructor
    {
        cout<<"Destrutor Calling..."<<endl;
    }
};
int main()
{
    first f1;
    f1.output();
    first f2;
    f2.output();
}
