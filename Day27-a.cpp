#include<iostream>
using namespace std;

class first
{
    int a;
    int b;
public:
    first()
    {
        a=10;
        b=20;
    }
    first(int a, int b) //Parameterized constructor
    {
        this->a=a;
        this->b=b;
    }
    first(first &f)
    {
        a=f.a;
        b=f.b;
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
    first f1;//For Default Constructor
    f1.output();
    first f2(200,200); //For Parameterized Constructor
    f2.output();
    first f3;//For Default Constructor
    f3=f2;//passing value
    f3.output();
    first f4(f3);//for copy constructor passing referece
    f4.output();

}


