#include<iostream>
#include<stdio.h>
using namespace std;

class student
{
    char name[50],course[30];
    int rollno;
public:
    void read()
    {
        cout<<"Enter Name: ";
        cin.getline(name,50);
        cout<<"Enter Course name: ";
        cin.getline(course,30);
        cout<<"Enter Roll Number: ";
        cin>>rollno;
    }
    
    void show()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Course Name: "<<course<<endl;
        cout<<"Roll Number: "<<rollno<<endl;
    }
};

class employee
{
    int emp_code;
public:
    float salary_per_hour;
    void read()
    {
        cout<<"Enter Employee code: ";
        cin>>emp_code;
        cout<<"Enter Salary per Hour: ";
        cin>>salary_per_hour;
    }
    void show()
    {
        cout<<"Employee code: "<<emp_code<<endl;
        cout<<"Employee Salary Per Hour: "<<salary_per_hour<<endl;
    }
};

class part_time_student: public student, public employee
{
    employee e;
    int hours_worked;
    float calculated_salary;
public:
    void read()
    {
        student::read();
        employee::read();
        cout<<"Enter Hours Worked: ";
        cin>>hours_worked;
    }
    void calculate_salary()
    {
        cout<<"Calculated Salary: "<<hours_worked*salary_per_hour<<endl;
    }
    void show()
    {
        student::show();
        employee::show();
        calculate_salary();
    }
};
int main()
{
    part_time_student pts;
    pts.read();
    pts.show();
}