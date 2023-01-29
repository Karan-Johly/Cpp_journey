#include<iostream>
using namespace std;

class dost1
{
public:
    char pen[20];
};
class dost2
{
    char pencil[20];
public:
    void use()
    {
        dost1 d1;
        cout<<"Enter your Pen Name= ";
        cin>>d1.pen;
        cout<<"Enter your Pencil Name= ";
        cin>>pencil;
        cout<<"Pen Name: "<<d1.pen<<endl;
        cout<<"Pencil Name: "<<pencil<<endl;
    }
};
int main()
{
    dost2 d2;
    d2.use();
}
