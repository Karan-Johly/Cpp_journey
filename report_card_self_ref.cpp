#include <iostream>
#include <string>
using namespace std;

struct PersonalInfo {
    string name;
    string father_name;
    char no[10];
};

struct Admission {
    PersonalInfo* p_info;
    int rollno;
    string course;
};

struct StudentExam {
    Admission* a_info;
    int english;
    int hindi;
    int punjabi;
};

struct Result {
    StudentExam* marks;
    int total = marks->english + marks->hindi + marks->punjabi;
    float percentage = ((float)total) / 3;
};

int main() {
    // for student 1
    PersonalInfo p1 = {"Ripudaman", "Jasbir Singh", "898989898"};
    Admission a1 = {&p1, 17, "Arts"};
    StudentExam s1 = {&a1, 89, 90, 65};
    Result r1 = {&s1};
    
    cout<<"\nresult of student\n";
    cout<<"name : "<<r1.marks->a_info->p_info->name<<endl;
    cout<<"father name : "<<r1.marks->a_info->p_info->father_name<<endl;
    cout<<"rollno : "<<r1.marks->a_info->rollno<<endl;
    cout<<"course : "<<r1.marks->a_info->course<<endl;
    cout<<"\n--------marks--------"<<endl;
    cout<<"english : "<<r1.marks->english<<endl;
    cout<<"hindi : "<<r1.marks->hindi<<endl;
    cout<<"punjabi : "<<r1.marks->punjabi<<endl;
    cout<<"total marks : "<<r1.total<<endl;
    cout<<"percentage : "<<r1.percentage<<"%"<<endl;
}