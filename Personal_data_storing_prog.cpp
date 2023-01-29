#include<iostream>
#include<string>
#include<iomanip>
#include<stdio.h>
using namespace std;

struct personalinfo
{
    string name;
    string fname;
    string mname;
    char gender;
    // void input_pinfo()
    // {
    //     cout<<"Enter your Name: ";
    //     getline(cin,name);
    //     cout<<"Enter your Father's name: ";
    //     getline(cin,fname);
    //     cout<<"Enter your Mother's name: ";
    //     getline(cin,mname);
    //     cout<<"Enter your Gender: ";
    //     cin>>gender;
    // }
};

struct  correspondence
{
    personalinfo* p_info;
    string address;
    string pincode;
    char mobno[10];
    // void input_cinfo()
    // {
    //     cout<<"Enter your Address: ";
    //     getline(cin,address);
    //     cin.ignore();
    //     cout<<"Enter your Pincode: ";
    //     getline(cin,pincode);
    //     cin.ignore();
    //     cout<<"Enter your Mobile number: ";
    //     cin.getline(mobno,10);
    // }
};

struct job
{
    correspondence* crpd;
    string jobtitle;
    string location;
    string department;
    // void inputjinfo()
    // {
    //     cin.ignore();
    //     cout<<"Enter your Job Title: ";
    //     getline(cin,jobtitle);
    //     cin.ignore();
    //     cout<<"Enter your Office Location: ";
    //     getline(cin,location);
    //     cin.ignore();
    //     cout<<"Enter your Department: ";
    //     getline(cin,department);
    //     cin.ignore();
    // }
};

// void input_details()
// {
//     personalinfo p;
//     correspondence c;
//     job j;

//     cout<<"Enter your Name: ";
//     cin>>j.crpd->p_info->name;
//     // getline(cin,j.crpd->p_info->name);
//     // cout<<"Enter your Father's name: ";
//     // getline(cin,j.crpd->p_info->fname);
//     // cout<<"Enter your Mother's name: ";
//     // getline(cin,j.crpd->p_info->mname);
//     // cout<<"Enter your Gender: ";
//     // cin>>j.crpd->p_info->gender;    
// }

int main()
{
    personalinfo p;
    correspondence c;
    job j;
    
    //INPUT Function calls

    cout<<endl<<endl<<endl;
    // p.input_pinfo();
    // c.input_cinfo();
    // j.inputjinfo();
    // input_details();

    cout<<"Enter your Name: ";
    cin>>p.name;
    cout<<"Enter your Father's name: ";
    cin>>p.fname;
    cout<<"Enter your Mother's name: ";
    cin>>p.mname;





    cout<<endl<<endl<<endl;
    cout<<setw(30)<<"-----Full Detail-----"<<endl;
    cout<<"Name: "<<j.crpd->p_info->name<<endl;
    cout<<"Father's name: "<<j.crpd->p_info->fname<<endl;
    cout<<"Mother's name: "<<j.crpd->p_info->mname<<endl;
    // cout<<"Gender: "<<j.crpd->p_info->gender<<endl;
    // cout<<"Address: "<<j.crpd->address<<endl;
    // cout<<"Pincode: "<<j.crpd->pincode<<endl;
    // cout<<"Mobile number: "<<j.crpd->mobno<<endl;
    // cout<<"Job Title: "<<j.jobtitle<<endl;
    // cout<<"Location: "<<j.location<<endl;
    // cout<<"Department: "<<j.department<<endl;

}

