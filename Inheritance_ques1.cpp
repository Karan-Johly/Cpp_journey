#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class emp_basic
{
    int emp_code;
    char emp_name[30];
    char address[50];
public:
    void read()
    {
        fflush(stdin);
        cout<<"Enter Employee code,name and address: "<<endl;
        cin>>emp_code;
        fflush(stdin);
        cin.getline(emp_name,30);
        cin.getline(address,50);
    }
    void show()
    {
        cout<<endl;
        cout<<"Employee code: "<<emp_code<<endl;
        cout<<"Employee name: "<<emp_name<<endl;
        cout<<"Employee address: "<<address<<endl;
    }
};
class emp_salary:public emp_basic
{
    float basic_pay;
    float income_tax;
    float net_sal;
public:
    void calculate_salary()
    {
        net_sal=basic_pay-income_tax;
        cout<<"Your Final Salary is "<<net_sal;
    }
    void read()
    {
        emp_basic::read();
        cout<<"Enter your basic pay and income tax: "<<endl;
        cout.flush();
        cin>>basic_pay;
        cin>>income_tax;
    }
    void show()
    {
        emp_basic::show();
        calculate_salary();        
    }

};
int main()
{
    emp_salary s;
    s.read();
    s.show();

}