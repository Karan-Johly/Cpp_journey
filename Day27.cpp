#include<iostream>
using namespace std;

class first
{
    int a;
    int b;
public:
    first(int a, int b) //Parameterized constructor
    {
        this->a=a;
        this->b=b;
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
    first f1(100,100);
    f1.output();
    first f2(200,200);
    f2.output();
}

