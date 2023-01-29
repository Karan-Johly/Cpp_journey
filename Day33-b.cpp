#include<iostream>
using namespace std;

int min(int a,int b)
{
    return(a<b)?a:b;
}
float min(float a,float b)
{
    return(a<b)?a:b;
}
char min(char a,char b)
{
    return(a<b)?a:b;
}

int main()
{
    int x,y;
    cin>>x>>y;
    cout<<"Min. of integer values is = "<<min(x,y);
    
    float p,q;
    cin>>p>>q;
    cout<<"Min. of floating values is = "<<min(p,q);
    
    char c1,c2;
    cin>>c1>>c2;
    cout<<"Minimum of c1 and c2 (basis of ASCII value) = "<<min(c1,c2);
    
}