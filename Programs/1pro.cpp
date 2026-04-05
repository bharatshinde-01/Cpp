#include<iostream.h>
#include<conio.h>

void main()
{
    int a,b;
    char op;

    clrscr();

    cout<<"Enter a b: ";
    cin>>a>>b;

    cout<<"Enter operator: ";
    cin>>op;

    switch(op)   // operator check karne ke liye
    {
        case '+': cout<<a+b; break;
        case '-': cout<<a-b; break;
        case '*': cout<<a*b; break;
        case '/': cout<<a/b; break;
        default: cout<<"Invalid";
    }

    getch();
}