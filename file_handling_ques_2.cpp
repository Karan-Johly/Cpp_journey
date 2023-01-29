#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    int len;
    string str;
    fstream out,in;
    in.open("main.txt",ios::in);
    out.open("reverse.txt",ios::out);
    getline(in,str);
    len=str.length();
    for (int i = len-1; i >= 0 ; i--)
    {
        out.put(str[i]);
    }

    out.close();
    in.close();
}