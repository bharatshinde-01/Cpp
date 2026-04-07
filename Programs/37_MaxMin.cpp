#include<iostream.h>
#include<conio.h>

template<class T>   // function template
void find(T a, T b)
{
    if(a > b)
    {
        cout<<"\nMax = "<<a;
        cout<<"\nMin = "<<b;
    }
    else
    {
        cout<<"\nMax = "<<b;
        cout<<"\nMin = "<<a;
    }
}

void main()
{
    clrscr();

    find(10,5);        // int
    find(5.5,9.2);     // float

    getch();
}