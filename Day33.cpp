#include<iostream>
using namespace std;

template <class T>

class first
{
    T a,b;
public:
    void inputdost()
    {
        cout<<"Enter First Value= ";
        cin>>a;
        cout<<"Enter Second Value= ";
        cin>>b;
    }

    void outputdost()
    {
        cout<<"Sum of two values= "<<a+b<<endl;
    }
};

int main()
{
    first<int> I;
    first<long> L;
    first<double> D;
    first<float> F;

    cout<<"Integer "<<endl;
    I.inputdost();
    I.outputdost();
    cout<<"Long "<<endl;
    L.inputdost();
    L.outputdost();
    cout<<"Double "<<endl;
    D.inputdost();
    D.outputdost();
    cout<<"Float "<<endl;
    F.inputdost();
    F.outputdost();
}
