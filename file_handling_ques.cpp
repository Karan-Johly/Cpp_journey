#include<iostream>
#include<stdio.h>
#include<fstream>
#include<string.h>
using namespace std;

class records
{
    char name[50];
    int rollno;
    char address[70];
public:
    void add_new_record()
    {
        ifstream fin("records.txt");
        fflush(stdin);
        cout<<"Enter your Name: "<<endl;
        cin.getline(name,50);
        fin>>name;
        cout<<"Enter your Rollno: "<<endl;
        cin>>rollno;
        fin>>rollno;
        fflush(stdin);
        cout<<"Enter your Address: "<<endl;
        cin.getline(address,70);
        fin>>address;

    }
    void show_all_records()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Rollno : "<<rollno<<endl;
        cout<<"Address : "<<address<<endl;
    }
};

int main()
{
    records rc;
    int choice;
    cout<<"Enter the choice:\n"
    <<" 1 To Add new record.\n"
    <<" 2 To Show all records.\n"
    <<" 3 To Exit.\n"
    <<" : ";
    cin>>choice;

    switch (choice)
    {
        case 1:
        {
            rc.add_new_record();
        }
        break;
        case 2:
        {
            rc.show_all_records();
        }
        break;

        case 3:
        break;

        default:
        cout<<"INVALID VALUE";
        break;

    }

}
