#include<iostream.h>
#include<iomanip.h>
#include<conio.h>

float pi = 3.14;

// default argument use kiya
void circle(float r = 5)
{
    cout << "\nRadius = " << r;

    // direct formula (simple way)
    cout << "\nArea = " << setprecision(4) << ::pi * r * r;
    cout << "\nCircumference = " << setprecision(4) << 2 * ::pi * r;
}

void main()
{
    clrscr();

    circle();      // default value
    circle(7);     // dusri value

    getch();
}