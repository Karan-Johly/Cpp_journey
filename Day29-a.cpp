#include<iostream>
using namespace std;

class dost1
{
    public:
    char pen[20];
};
class dost2:dost1
{
    char pencil[20];
public:
    void use()
    {

        cout<<"Enter your Pen Name= ";
        cin>>pen;
        cout<<"Enter your Pencil Name= ";
        cin>>pencil;
        cout<<"Pen Name: "<<pen<<endl;
        cout<<"Pencil Name: "<<pencil<<endl;
    }
};
int main()
{
    dost2 d2;
    d2.use();
}
