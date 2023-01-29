#include<iostream>
#include<string.h>
using namespace std;
class account
{
    char depo_name[50];
    long long acc_no;
    long long balance;
    long long &f_bal=balance;
public :
    void setacc_no(long long acc_no)
    {
        this ->acc_no=acc_no;
    }
    long long getacc_no()
    {
        return acc_no;
    }
    void setdepo_name(char depo_name[])
    {
        strcpy(this->depo_name,depo_name);
    }
    char *getdepo_name()
    {
        return depo_name;
    }
    void setbalance(long long balance)
    {
        this ->balance=balance;
    }
    long long getbalance()
    {
        return balance;
    }
    void depo_amm()
    {
        int ammt,temp;
        cout<<"Enter the amount you want to Deposit: ";
        cin>>ammt;
        temp=ammt+balance;
        f_bal=temp;
        cout<<balance;
    }
    void withdraw_amm()
    {
        int ammt,temp;
        cout<<"Enter the amount you want to Withdraw: ";
        cin>>ammt;
        temp=balance-ammt;
        f_bal=temp;
        cout<<balance;
    }
};
int main()
{
    short choice;
    account acc;
    acc.setdepo_name("Karan Preet");
    acc.setacc_no(23984724238);
    acc.setbalance(10000);

    cout<<"Depositor's Name: "<<acc.getdepo_name()<<endl;
    cout<<"Depositor's Account Number: "<<acc.getacc_no()<<endl;
    cout<<"Depositor's Account Balance: "<<acc.getbalance()<<endl;

    cout<<" -> Enter 1 if you want to deposit money \n"
    <<" -> Enter 2 if you want to withdraw money \n";
    cin>>choice;

    switch(choice)
    {
    case 1:
        acc.depo_amm();
        break;
    case 2:
        acc.withdraw_amm();
        break;
    }
}
