#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

class Bank
{
    int acc_no;
    char name[20], addr[30];
    long contact;
    float balance;

public:

    void accept()
    {
        cout<<"Enter Acc No: ";
        cin>>acc_no;

        cout<<"Enter Name: ";
        cin>>name;

        cout<<"Enter Address: ";
        cin>>addr;

        cout<<"Enter Contact: ";
        cin>>contact;

        cout<<"Enter Balance: ";
        cin>>balance;
    }

    void deposit()
    {
        float amt;
        cout<<"Enter amount to deposit: ";
        cin>>amt;
        balance = balance + amt;
    }

    void display()
    {
        cout<<setw(10)<<acc_no
            <<setw(15)<<name
            <<setw(15)<<addr
            <<setw(15)<<contact
            <<setw(10)<<balance;
    }
};

void main()
{
    Bank b;

    clrscr();

    b.accept();
    b.deposit();

    cout<<"\nUpdated Details:\n";

    cout<<setw(10)<<"AccNo"
        <<setw(15)<<"Name"
        <<setw(15)<<"Addr"
        <<setw(15)<<"Contact"
        <<setw(10)<<"Balance"<<endl;

    b.display();

    getch();
}