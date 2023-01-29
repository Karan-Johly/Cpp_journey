#include<iostream>
using namespace std;

class counting_objects
{
    static int n;

public:
    counting_objects()
    {
        n++;
    }

    static int total_count()
    {
        return n;
    }
};

int counting_objects::n;
int main()
{
    int num;
    cout<<"Enter the number of objects you want: ";
    cin>>num;
    counting_objects obj[num];
    for(int i=1;)
    int temp;
    temp=counting_objects::total_count();
    cout<<endl<<"Total number of objects: "<<temp<<endl;
}

