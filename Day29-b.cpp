#include<iostream>
using namespace std;

class dost1
{
    public:
    char pen[20];
};
class dost2:public dost1
{
    public:
    char pencil[20];
};
class dost3:dost2
{
char eraser[20];

public:
    void use()
    {
        cout<<"Enter your Pen Name= ";
        cin>>pen;
        cout<<"Enter your Pencil Name= ";
        cin>>pencil;
        cout<<"Enter your Eraser Name=";
        cin>>eraser;
        cout<<"Pen Name: "<<pen<<endl;
        cout<<"Pencil Name: "<<pencil<<endl;
        cout<<"Eraser Name:"<<eraser;
    }
};
int main()
{
    dost3 d3;
    d3.use();
}

