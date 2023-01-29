#include<iostream>
#include<string>
#include<algorithm>
#include<typeinfo>

using namespace std;

int main()
{
    string s3="raan";
    cout<<s3<<endl;
    sort(s3.begin(),s3.end());
    cout<<s3;

    // int x=786;
    // cout<<to_string(x)+"2";

    // string s="786";
    // int x=stoi(s);
    // cout<<x+2<<endl;
    // cout<<typeid(x).name();

    // string st="karanpreet is a good boy";
    // cout<<st.substr(16,8);
    // for (int i = 0; i < st.length(); i++)
    // {
    //     cout<<st[i]<<endl;
    // }
    
    // cout<<st.size()<<endl;
    // cout<<st.length();
    // st.insert(13," not");
    // cout<<st;
    // cout<<st.find("a ")<<endl;
    // st.erase(5,5);
    // cout<<st;

    // string s1="abc";
    // cout<<s1<<endl;
    // s1.clear();

    // if(!s1.empty())
    // {
    //     cout<<"String is not empty";
    // }

    // string st1="fam";
    // string st2="ilyj";
    // cout<<st2.compare(st1);
    // if(!st2.compare(st1))
    // {
    //     cout<<"strings are equal";
    // }
    // else 
    // {
    //     cout<<"Strings are not equal";
    // }
    // string abc="akdjfkajfksd a sdflkj asfj asjfjsdf";
    // int len=abc.length();
    // cout<<len;
    // abc.clear();
    // cout<<abc;
    // string st1="fam";
    // string st2="ily";
    // cout<<st1[1];
    // st1.append(st2);
    // cout<<st1;
    // string str;
    // string str1(5,'n');
    // cout<<str1;
    // cout<<"Enter your name: ";
    // getline(cin,str);
    // cout<<endl<<"Name : "<<str;
}