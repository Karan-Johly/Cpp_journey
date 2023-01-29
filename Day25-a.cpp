#include<iostream>
#include<string.h>
using namespace std;

class PersonalDetails
{
    char name[50];
    float height;
    float &height_centi=height;
    float weight;
    float &weight_kg=weight;

    public:

    void enter_details()
    {
        cout<<"Enter your name: ";
        cin.get(name,50);
        cout<<"Enter your height(in inches): ";
        cin>>height;
        cout<<"Enter your weight(in pounds): ";
        cin>>weight;

    }

    void setname()
    {
        strcpy(this->name,name);
    }

    char *getname()
    {
        return name;
    }

    void setheight(float height)
    {
        this ->height=height;
    }

    float getheight()
    {
        float unit=2.54;
        height_centi=height*unit;
        return height_centi;
    }

    void setweight(float weight)
    {
        this ->weight=weight;
    }

    float getweight()
    {
        float unit=0.4546;
        weight_kg=weight*unit;
        return weight_kg;
    }
};

int main()
{
    PersonalDetails pd;
    pd.enter_details();
    cout<<endl<<pd.getname()<<" your height is "<<pd.getheight()<<"cm\n And your weight is "<<pd.getweight()<<"kg"<<endl;

}
