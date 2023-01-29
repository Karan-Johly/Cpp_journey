#include<iostream>;
using namespace std;
int main()
{
    char name[20],gender;
    int rollno,physics,chemistry,maths,it;
    float fee;

    cout<<"Enter your Name:";
    cin>>name;
    cout<<"Enter your Gender:";
    cin>>gender;
    cout<<"Enter your Rollno:";
    cin>>rollno;
    cout<<"Enter your Fees:";
    cin>>fee;
    cout<<"Enter your Physics marks:";
    cin>>physics;
    cout<<"Enter your Chemistry marks:";
    cin>>chemistry;
    cout<<"Enter your Maths marks:";
    cin>>maths;
    cout<<"Enter your Information Technology:";
    cin>>it;

    cout<<"Name:"<<name<<endl;
    cout<<"Gender:"<<gender<<endl;
    cout<<"Rollno:"<<rollno<<endl;
    cout<<"Fees:"<<fee<<endl;
    cout<<"All subject marks :\n Physics   Chemistry   Maths   Information Technology"<<endl;
    cout<< "   "<<physics << "        "<<chemistry << "          "<<maths << "            " << it<<endl;
    cout<<"Total Percentage : "<<(physics+chemistry+maths+it)/4;
}
