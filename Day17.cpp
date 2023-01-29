#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int *p;
    
    cout<<"Value of a="<<a<<endl;
    cout<<"Address of a="<<&a<<endl;
    p=&a;
    cout<<"Value of 'a' through pointer="<<*p<<endl;
    cout<<"Address of 'a' through pointer="<<p<<endl;
    cout<<"Address of Pointer="<<&p<<endl;
    *p=200;
    cout<<"Value of 'a' after changes="<<a;
    cout<<"Address of a="<<unsigned(&a)<<endl;
    p=&a;
    cout<<"Value of 'a' through pointer="<<*p<<endl;
    cout<<"Address of 'a' through pointer="<<unsigned(p)<<endl;
    cout<<"Address of pointer="<<unsigned(&p)<<endl;
}
