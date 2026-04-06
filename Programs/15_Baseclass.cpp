#include<iostream.h>
#include<conio.h>

class Customer
{
protected:
    char name[20];
    long phone;

public:
    void getCustomer()
    {
        cout<<"Enter Name Phone: ";
        cin>>name>>phone;
    }
};

class Depositor : public Customer   // multilevel (level 2)
{
protected:
    int accno;
    float balance;

public:
    void getDepositor()
    {
        cout<<"Enter AccNo Balance: ";
        cin>>accno>>balance;
    }
};

class Borrower : public Depositor   // multilevel (level 3)
{
    int loanno;
    float loanamt;

public:
    void getBorrower()
    {
        cout<<"Enter LoanNo LoanAmt: ";
        cin>>loanno>>loanamt;
    }

    void display()
    {
        cout<<"\n"<<name<<" "<<phone<<" "<<accno<<" "<<balance<<" "<<loanno<<" "<<loanamt;
    }
};

void main()
{
    int n;

    clrscr();

    cout<<"Enter number of customers: ";
    cin>>n;

    Borrower b[10];

    for(int i=0;i<n;i++)
    {
        b[i].getCustomer();
        b[i].getDepositor();
        b[i].getBorrower();
    }

    cout<<"\nDetails:\n";

    for(int i=0;i<n;i++)
    {
        b[i].display();
    }

    getch();
}