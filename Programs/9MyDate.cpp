#include<iostream.h>
#include<conio.h>

class MyDate
{
    int dd, mm, yyyy;

public:
    MyDate(int d, int m, int y)   // parameterized constructor
    {
        dd = d;
        mm = m;
        yyyy = y;
    }

    void display()
    {
        char *month[] = {"Jan","Feb","Mar","Apr","May","Jun",
                         "Jul","Aug","Sep","Oct","Nov","Dec"};

        cout<<dd<<"-"<<month[mm-1]<<"-"<<yyyy;
    }
};

void main()
{
    int d, m, y;

    clrscr();

    cout<<"Enter date (dd mm yyyy): ";
    cin>>d>>m>>y;

    MyDate obj(d,m,y);   // dynamic initialization of object

    obj.display();

    getch();
}