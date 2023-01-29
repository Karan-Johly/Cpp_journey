#include<iostream>
#include<stdio.h>
using namespace std;

class person
{
    struct date_of_birth
    {
        int dd, mm, yy;
    }dobe;
    char name[30];
    char gender;

public:
    void input_func()
    {
        cout << "Enter name: ";
        cin.getline(name, 30);
        cout << "Enter gender : ";
        cin >> gender;
        cout<<"Enter date of birth in dd mm yy format: ";
        cin>>dobe.dd>>dobe.mm>>dobe.yy;
    }
    void output_func()
    {
        cout << "Name: " << name << endl;
        cout<<"Gender : "<<gender<<endl;
        cout<<"Date of birth : "<<dobe.dd<<"/"<<dobe.mm<<"/"<<dobe.yy<<endl;
    }
};

class doctor:public person
{
    char specialization[50];
public:
    void input_func()
    {
        person::input_func();
        fflush(stdin);
        cout<<"Enter Doctor's Specialization: ";
        cin.getline(specialization,50);
    }
    void output_func()
    {
        person::output_func();
        cout<<"Doctor's Specialization: "<<specialization<<endl;
    }
};

class Patient:public doctor
{
    int case_number;
    char disease[50];
    struct date_of_adm{int dd,mm,yy;};
    struct date_of_dis{int dd,mm,yy;};
    long bill_number;
public:
    void input_func()
    {
        date_of_adm doa;
        date_of_dis dod;
        doctor::input_func();
        cout<<"Enter Case number: ";
        cin>>case_number;
        fflush(stdin);
        cout<<"Enter Disease name: ";
        cin.getline(disease,50);
        cout<<"Enter Date of Admission: ";
        cin>>doa.dd>>doa.mm>>doa.yy;
        cout<<"Enter Date of Discharge: ";
        cin>>dod.dd>>dod.mm>>dod.yy;
        cout<<"Enter Bill number: ";
        cin>>bill_number;
    }
    void output_func()
    {

        date_of_adm doa;
        date_of_dis dod;
        doctor::output_func();
        cout<<"Case number: "<<case_number<<endl;
        cout<<"Disease name: "<<disease<<endl;
        cout<<"Date of Admission: "<<doa.dd<<"/"<<doa.mm<<"/"<<doa.yy<<endl;
        cout<<"Date of Discharge: "<<dod.dd<<"/"<<dod.mm<<"/"<<dod.yy<<endl;
        cout<<"Bill Number: "<<bill_number<<endl;
    }

};
int main()
{
    Patient p;
    p.input_func();
    p.output_func();
}
