#include<iostream>
#include<fstream>
using namespace std;
class student
{
    char name[20];
    int rollno;
    char address[20];
public:
    inputvalues()
    {
        cout<<"enter name of student=";
        cin.getline(name,20);
        cout<<"roll no of student=";
        cin>>rollno;
        cout<<"enter address of sudent=";
        cin>>address;
    }
    outputvalues()
    {
        cout<<"------output values------"<<endl;
        cout<<"student's name="<<name<<endl;
        cout<<"student's rollno="<<rollno<<endl;
        cout<<"student's address="<<address<<endl;
    }

};
int main()
{
    fstream f;
    student obj;
    //f.open("My.txt",ios::out);
    f.open("My.txt",ios::app);
    obj.inputvalues();
    f.write((char*)&obj,sizeof(obj));
    f.close();
    f.open("My.txt",ios::in);
    while(f.read((char*)&obj,sizeof(obj)))
    {
    obj.outputvalues();
    }
    f.close();

}
