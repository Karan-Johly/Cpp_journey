#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    char name[30];
    int rollno;
    float fee;
    cout<<"Enter your Name: ";
    cin.getline(name,30);
    cout<<"Enter your Rollno: ";
    cin>>rollno;
    cout<<"Enter your Fee: ";
    cin>>fee;
    ofstream ft("student.txt");
    ft<<name<<endl;
    ft<<rollno<<endl;
    ft<<fee<<endl;
    ft.close();
}
