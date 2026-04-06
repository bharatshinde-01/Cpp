#include<iostream.h>
#include<conio.h>

class Student
{
protected:
    int roll;
    char name[20];

public:
    void getStudent()
    {
        cout<<"Enter Roll and Name: ";
        cin>>roll>>name;
    }
};

class Academic_Marks : virtual public Student   // virtual base class
{
protected:
    int m1, m2, m3;

public:
    void getAcademic()
    {
        cout<<"Enter 3 marks: ";
        cin>>m1>>m2>>m3;
    }
};

class Extra_Activities_Marks : virtual public Student   // virtual base class
{
protected:
    int m;

public:
    void getExtra()
    {
        cout<<"Enter Extra Marks: ";
        cin>>m;
    }
};

class Result : public Academic_Marks, public Extra_Activities_Marks
{
    int total;
    char grade;

public:
    void calculate()
    {
        total = m1 + m2 + m3 + m;

        if(total >= 300)
            grade = 'A';
        else if(total >= 200)
            grade = 'B';
        else
            grade = 'C';
    }

    void display()
    {
        cout<<"\n"<<roll<<" "<<name;
        cout<<"\nTotal = "<<total;
        cout<<"\nGrade = "<<grade;
    }
};

void main()
{
    Result r;

    clrscr();

    r.getStudent();
    r.getAcademic();
    r.getExtra();

    r.calculate();
    r.display();

    getch();
}