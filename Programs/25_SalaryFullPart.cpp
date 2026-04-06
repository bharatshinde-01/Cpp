#include<iostream.h>
#include<conio.h>

class Employee
{
protected:
    int code;
    char name[20];

public:
    void getEmp()
    {
        cout<<"Enter Code Name: ";
        cin>>code>>name;
    }

    void showEmp()
    {
        cout<<code<<" "<<name<<" ";
    }
};

class Fulltime : public Employee   // inheritance
{
    float rate, days, salary;

public:
    void accept()
    {
        getEmp();
        cout<<"Enter Daily Rate and Days: ";
        cin>>rate>>days;
        salary = rate * days;   // salary calc
    }

    void display()
    {
        showEmp();
        cout<<"Fulltime Salary: "<<salary<<endl;
    }
};

class Parttime : public Employee   // inheritance
{
    float hours, rate, salary;

public:
    void accept()
    {
        getEmp();
        cout<<"Enter Hours and Rate: ";
        cin>>hours>>rate;
        salary = hours * rate;   // salary calc
    }

    void display()
    {
        showEmp();
        cout<<"Parttime Salary: "<<salary<<endl;
    }
};

void main()
{
    int ch, n;

    clrscr();

    cout<<"1.Fulltime 2.Parttime\nEnter choice: ";
    cin>>ch;

    cout<<"Enter number of employees: ";
    cin>>n;

    if(ch==1)
    {
        Fulltime f[10];

        for(int i=0;i<n;i++)
            f[i].accept();

        for(int i=0;i<n;i++)
            f[i].display();
    }
    else if(ch==2)
    {
        Parttime p[10];

        for(int i=0;i<n;i++)
            p[i].accept();

        for(int i=0;i<n;i++)
            p[i].display();
    }
    else
        cout<<"Invalid Choice";

    getch();
}