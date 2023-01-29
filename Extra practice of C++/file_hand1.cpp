#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    char ch;
    ofstream out("input.txt");
    cout<<"Enter Paragraph: "<<endl;
    while (cin.get(ch))
    {
        out<<ch;
    }
    out.close();
}
