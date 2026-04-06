#include<iostream.h>
#include<conio.h>

class Employee
{
    int eno;
    char name[20], desig[20];
    float salary;

public:
    void accept()
    {
        cout<<"Enter Eno Name Designation Salary: ";
        cin>>eno>>name>>desig>>salary;
    }

    void display()
    {
        cout<<"\n"<<eno<<" "<<name<<" "<<desig<<" "<<salary;
    }

    float getSalary()
    {
        return this->salary;   // this pointer used
    }
};

void main()
{
    Employee e1, e2;

    clrscr();

    e1.accept();
    e2.accept();

    if(e1.getSalary() > e2.getSalary())
    {
        cout<<"\nEmployee with max salary:";
        e1.display();
    }
    else
    {
        cout<<"\nEmployee with max salary:";
        e2.display();
    }

    getch();
}