#include <iostream>
using namespace std;
#include <arithmatic.h>

int main()
{
    int a,b;
    short choice;

    cout<< "Enter any 2 number: ";
    cin>>a>>b;

    cout<<"Enter 1 to perform Addition\n"
        <<"Enter 2 to perform Subtraction\n"
        <<"Enter 3 to perform Multiplication\n"
        <<"Enter 4 to perform Division\n"
        <<"-> ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout<<"Sum of "<<a<<" and "<<b<<" is equal to "<<sum(a,b);
        break;
    case 2:
        cout<<"Subtraction of "<<a<<" and "<<b<<" is equal to "<<subtr(a,b);
        break;
    case 3:
        cout<<"Multiplication of "<<a<<" and "<<b<<" is equal to "<<multip(a,b);
        break;
    case 4:
        cout<<"Division of "<<a<<" and "<<b<<" is equal to "<<divi(a,b);
        break;
    }
}
