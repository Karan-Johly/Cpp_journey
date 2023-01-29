#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    char text;
    string str;
    int count=0;
    fstream fout,in;
    in.open("main.txt",ios::in);
    fout.open("test.txt",ios::out);
    getline(in,str);
    int leng=str.length();
    for (int i = leng-1; i >=0; i--)
    {
        fout.put(str[i]);
    }
    
    fout.close();
    in.close();

}



































/*
class student
{
    char name[50];
    int rollno;
    char address[70];
public:
    void input()
    {
        cout<<"----add data of students---"<<endl;
        fflush(stdin);
        cout<<"enter name of student=";
        cin.getline(name,50);
        cout<<"enter roll no of student=";
        cin>>rollno;
        fflush(stdin);
        cout<<"enter address of student=";
        cin.getline(address,70);
    }
    void output()
    {
       cout<<"-----display result----"<<endl;
        cout<<"name of student="<<name<<endl;
        cout<<"roll no of student="<<rollno<<endl;
        cout<<"address of student="<<address<<endl;
    }
};
int main()
{
    fstream f;
    student s;
    int choice;
    {
        cout<<"-----main started-----"<<endl;
        cout<<"1. add new record"<<endl;
        cout<<"2. show all records"<<endl;
        cout<<"3. exit"<<endl;
        cout<<"enter your choice(1-3)=";
        cin>>choice;
        switch(choice)
        {
        case 1:
            {
            f.open("landing.txt",ios::app);
            s.input();
            f.write((char*)&s,sizeof(s));
            f.close();
            cout<<"your data is entered";}
            break;
        case 2:
            {
      f.open("landing.txt",ios::in);
      while(f.read((char*)&s,sizeof(s)))
      {
          s.output();
      }
      f.close();
            }break;
        case 3: break;
        default:
            {
                cout<<"invalid choice"<<endl;
            }
        }
    }
}






















#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int* ch= new int;
    *ch=3;
    cout<<sizeof(*ch);

    // int i=5;
    // int &j=i;
    // int &n=i;
    // int &f=i;

    // cout<<i<<endl<<j<<endl<<n<<endl<<f;
    // int a=5;
    // int* ptr=&a;

    // cout<<*ptr;
}

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
int main()
{
    person p;
    p.input_func();
    p.output_func();
}
*/

// class person
// {
//     struct date_of_birth{int dd,mm,yy;};
//     //char dob[10];
//     char name[30];
//     char sex;
// public:
//     void input_func()
//     {
//         date_of_birth dobe;
//         cout<<"Enter name: "<<endl;
//         cin.getline(name,30);
//         cout<<"Enter Gender: "<<endl;
//         cin>>sex;
//         fflush(stdin);
//         cout<<"Enter Date of birth(dd-mm-yy): "<<endl;
//         //cin.getline(dob,10);
//         cin>>dobe.dd>>dobe.mm>>dobe.yy;
//     }
//     void output_func()
//     {
//         date_of_birth dobe;
//         cout<<endl;
//         fflush(stdin);
//         cout<<"Name: "<<name<<endl;
//         //cout<<"Date of birth: "<<dob<<endl;
//         cout<<"Date of birth: "<<dobe.dd<<"-"<<dobe.mm<<"-"<<dobe.yy<<endl;
//         cout<<"sex: "<<sex<<endl;
//
