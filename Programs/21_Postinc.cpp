#include<iostream.h>
#include<conio.h>

class Integer
{
    int x;

public:
    void getdata()
    {
        cout<<"Enter number: ";
        cin>>x;
    }

    void display()
    {
        cout<<"Value = "<<x<<endl;
    }

    void operator--()   // pre decrement
    {
        --x;
    }

    void operator--(int)   // post decrement
    {
        x--;
    }
};

void main()
{
    Integer i;

    clrscr();

    i.getdata();

    --i;   // pre decrement
    i.display();

    i--;   // post decrement
    i.display();

    getch();
}