#include<iostream.h>
#include<conio.h>

class Test
{
    int a;

public:
    void get()
    {
        cout<<"Enter value: ";
        cin>>a;
    }

    void show()
    {
        cout<<a<<" ";
    }

    friend void swap(Test &, Test &);   // friend function
};

void swap(Test &t1, Test &t2)
{
    int temp;
    temp = t1.a;   // access private data
    t1.a = t2.a;
    t2.a = temp;
}

void main()
{
    Test t1, t2;

    clrscr();

    t1.get();
    t2.get();

    cout<<"\nBefore Swap: ";
    t1.show();
    t2.show();

    swap(t1,t2);   // function call

    cout<<"\nAfter Swap: ";
    t1.show();
    t2.show();

    getch();
}