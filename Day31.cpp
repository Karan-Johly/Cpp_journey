#include<iostream>
using namespace std;

class first
{
    int i1,i2,i3;
    long l1,l2,l3;
    float f1,f2,f3;
    double d1,d2,d3;
public:
    void input_integer(int x, int y)
    {
        i1=x;
        i2=y;
    }
    void input_long(long x, long y)
    {
        l1=x;
        l2=y;
    }
    void input_float(float x, float y)
    {
        f1=x;
        f2=y;
    }
    void input_double(double x, double y)
    {
        d1=x;
        d2=y;
    }

    int add(int x, int y)
    {
        return x+y;
    }
    long add(long x, long y)
    {
        return x+y;
    }
    float add(float x, float y)
    {
        return x+y;
    }
    double add(double x, double y)
    {
        return x+y;
    }
    void output_values()
    {
        i3=add(i1,i2);
        l3=add(l1,l2);
        f3=add(f1,f2);
        d3=add(d1,d2);
        cout<<"Sum of two integers: "<<i3<<endl;
        cout<<"Sum of two long: "<<l3<<endl;
        cout<<"Sum of two float: "<<f3<<endl;
        cout<<"Sum of two double: "<<d3<<endl;
    }
};
int main()
{
    first f;
    f.input_integer(12,12);
    f.input_long(1234,1234);
    f.input_float(12.12,12.12);
    f.input_double(12345.1234,12345.1234);
    f.output_values();
}