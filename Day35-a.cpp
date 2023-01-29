#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    char name[30],rname[30];
    int rollno,rrollno;
    long fee,rfee;
    cout<<"Enter your Name: ";
    cin.getline(name,30);
    cout<<"Enter your Rollno: ";
    cin>>rollno;
    cout<<"Enter your Fee: ";
    cin>>fee;
    ofstream ft;
    ft.open("student.txt");
    ft<<name<<endl;
    ft<<rollno<<endl;
    ft<<fee<<endl;
    ft.close();
    ifstream fin("student.txt");
    fin.getline(rname,50);
    fin>>rrollno;
    fin>>rfee;
    cout<<"Student Name:"<<rname<<endl;
    cout<<"Student Rollno:"<<rrollno<<endl;
    cout<<"Student Fee:"<<rfee<<endl;

    fin.close();

}

