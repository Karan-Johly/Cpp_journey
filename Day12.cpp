#include<iostream>
using namespace std;
int main()
{
    int f,s,choice;
    cout<<"Enter your first no. :";
    cin>>f;
    cout<<"Enter your second no. :";
    cin>>s;

    cout<<"  Choices  \n 1. Addition\n 2. Subtraction\n 3. Division\n 4. Multiplication\n 5. Exit\n";

    do
    {
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
        case 1:
            cout<<"Your choice is Addition\n";
            cout<<f<<" + "<<s<<" = "<<f+s<<endl;
            break;

        case 2:
            cout<<"Your choice is Subtraction\n";
            cout<<f<<" - "<<s<<" = "<<f-s<<endl;
            break;

        case 3:
            cout<<"Your choice is Division\n";
            cout<<f<<" / "<<s<<" = "<<f/s<<endl;
            break;

        case 4:
            cout<<"Your choice is Multiplication\n";
            cout<<f<<" X "<<s<<" = "<<f*s<<endl;
            break;


        default:
            cout<<"INVALID INPUT"<<endl;
            break;

        }

        if(choice == 5)
            break;

    }while(choice!=5);
}
