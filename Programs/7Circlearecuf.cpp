#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

class Circle
{
    float r;

public:
    void getdata(float x = 5)   // default argument (agar value na de to 5 use hoga)
    {
        r = x;
    }

    void display();
};

void Circle::display()   // scope resolution operator
{
    float area, circum;

    area = 3.14 * r * r;
    circum = 2 * 3.14 * r;

    cout<<setw(10)<<"Radius"<<setw(10)<<"Area"<<setw(15)<<"Circumference"<<endl; // manipulator
    cout<<setw(10)<<r<<setw(10)<<area<<setw(15)<<circum; // manipulator
}

void main()
{
    Circle c;

    clrscr();

    c.getdata();   // default value use hui (5)

    c.display();

    getch();
}