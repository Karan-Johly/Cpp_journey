#include<iostream>
#include<string.h>
using namespace std;
class person
{
    char name[30];
    char address[50];
    long long phone_number;
public:
    //setter
    void setname(char name[])
    {
        strcpy(this->name,name);
    }
    //getter
    char * getname()
    {
        return name;
    }
    //setter
    void setaddress(char address[])
    {
        strcpy(this->address,address);
    }
    //getter
    char * getaddress()
    {
        return address;
    }
    //setter
    void setphone_number(long long phone_number)
    {
        this->phone_number=phone_number;
    }
    //getter
    long long getphone_number()
    {
        return phone_number;
    }
};
int main()
{
    person p;

    p.setname("Karan");
    p.setaddress("house-13");
    p.setphone_number(8427001447);

    cout<<"Name is "<<p.getname()<<endl;
    cout<<"Address is "<<p.getaddress()<<endl;
    cout<<"Phone number is "<<p.getphone_number()<<endl;
}
