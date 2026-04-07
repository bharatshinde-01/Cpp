#include<iostream.h>
#include<conio.h>

template<class T>   // template
void sortArr(T a[], int n)
{
    T temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}

void main()
{
    clrscr();

    int a[5] = {5,2,8,1,3};
    float b[5] = {2.5,1.1,3.3,0.5,4.2};
    char c[5] = {'d','a','c','b','e'};

    cout<<"Integer: ";
    sortArr(a,5);

    cout<<"\nFloat: ";
    sortArr(b,5);

    cout<<"\nCharacter: ";
    sortArr(c,5);

    getch();
}