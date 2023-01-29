#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    int tcount=0,countv=0,countc=0,counts=0;
    fstream vout,out,sout,tout;
    ifstream in;
    in.open("main.txt",ios::in);
    vout.open("vowel.txt",ios::out);
    sout.open("summary.txt",ios::out);
    out.open("consonants.txt",ios::out);
    tout.open("totalc.txt",ios::out);
    char text;
    char vowels;
    //cout<<"Enter Paragraph, press CTRL + Z and then Enter to exit : "<<endl;
    while(in.get(text))
    {
        tcount++;
        if(text == 'a'|| text=='e'||text=='i'||text=='o'||text=='u')
        {
            countv++;
            vout.put(text);
        }
        else if(text == ' ')
        {
            counts++;
        }
        else
        {
            countc++;
            out.put(text);            
        }

        
    }
    sout<<"No of Vowel characters is : "<<countv<<endl;
    sout<<"No of Consonant characters is : "<<countc<<endl;
    sout<<"No of Space characters is : "<<counts<<endl;
    tout<<tcount;
    vout.close();
    out.close();
    sout.close();
    in.close();
}