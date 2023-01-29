#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    char name[20];
    int rollno;
public:
    //Setter
    void setName(char name[])
    {
        strcpy(this->name,name);
    }
    //Getter
    char * getName()
    {
        return name;
    }
    //Setter
    void setRollno(int rollno)
    {
        this->rollno=rollno;
    }
    //Getter
    int getRollno()
    {
        return rollno;
    }


};

int main()
{
    Student s;
    s.setName("Harry");
    s.setRollno(1);
    cout<<"Student Name:"<<s.getName()<<endl;
    cout<<"Student Rollno:"<<s.getRollno()<<endl;

}
