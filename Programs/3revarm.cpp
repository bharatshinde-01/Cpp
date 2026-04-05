#include<iostream.h>
#include<conio.h>

void main()
{
    int n, rev=0, rem, temp, sum=0;

    clrscr();

    cout<<"Enter number: ";
    cin>>n;

    temp = n;

    // reverse
    while(n>0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    cout<<"Reverse = "<<rev<<endl;

    n = temp;

    // Armstrong check
    while(n>0)
    {
        rem = n % 10;
        sum = sum + (rem*rem*rem);
        n = n / 10;
    }

    if(temp == sum)
        cout<<"Armstrong Number";
    else
        cout<<"Not Armstrong";

    getch();
}