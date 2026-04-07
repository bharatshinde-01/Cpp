#include<iostream.h>
#include<conio.h>

template<class T>   // template
T area(T r)   // circle
{
    return 3.14 * r * r;
}

template<class T>   // template (overloaded)
T area(T l, T b)   // rectangle
{
    return l * b;
}

void main()
{
    clrscr();

    cout<<"Circle Area = "<<area(5.0)<<endl;   // float
    cout<<"Rectangle Area = "<<area(4,5)<<endl;   // int

    getch();
}