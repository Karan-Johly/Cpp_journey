#include<iostream>
using namespace std;

int main()
{
    /*
    short a=4;
    cout<<a<<" X 1 = "<<a*1<<endl;
    cout<<a<<" X 2 = "<<a*2<<endl;
    cout<<a<<" X 3 = "<<a*3<<endl;
    cout<<a<<" X 4 = "<<a*4<<endl;
    cout<<a<<" X 5 = "<<a*5<<endl;
    cout<<a<<" X 6 = "<<a*6<<endl;
    cout<<a<<" X 7 = "<<a*7<<endl;
    cout<<a<<" X 8 = "<<a*8<<endl;
    cout<<a<<" X 9 = "<<a*9<<endl;
    cout<<a<<" X 10 = "<<a*10<<endl;
    */
    short first=13, second=41;

    cout<<"First value before swap : "<<first<<endl;
    cout<<"Second value before swap : "<<second<<endl;

    first=first + second;
    second=first - second;
    first=first - second;

    cout<<"First value after swap : "<<first<<endl;
    cout<<"Second value second swap : "<<second<<endl;


}
