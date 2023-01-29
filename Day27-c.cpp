#include<iostream>
 using namespace std;
 class Dost1
 {
     int num1,num2;
 public:
    Dost1()
    {

        num1=100;
        num2=200;
    }
    friend class Dost2;

 };
 class Dost2
 {
     int num3;
 public:
    Dost2()
    {
        num3=0;
    }
    void output(Dost1 d1)
    {
    num3=d1.num1+d1.num2;
    cout<<"Sum of Dost1 num1 and num2 values="<<num3;
    }

 };
 int main()
 {
     Dost1 d1;
     Dost2 d2;
     d2.output(d1);
 }
