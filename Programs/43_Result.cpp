#include<iostream.h>
#include<conio.h>

class Exam
{
    int roll;
    float m1, m2;

public:
    void accept()
    {
        cout<<"Enter RollNo Marks1 Marks2: ";
        cin>>roll>>m1>>m2;
    }

    friend void Result(Exam);   // friend function
};

void Result(Exam e)
{
    float total, avg;

    total = e.m1 + e.m2;
    avg = total / 2;

    cout<<"\nRollNo: "<<e.roll;
    cout<<"\nTotal: "<<total;
    cout<<"\nAverage: "<<avg;

    if(avg >= 40)
        cout<<"\nResult: Pass";
    else
        cout<<"\nResult: Fail";
}

void main()
{
    Exam e;

    clrscr();

    e.accept();

    Result(e);   // friend function call

    getch();
}