#include<iostream.h>
#include<conio.h>

class MyArray
{
    int *arr, n;

public:
    MyArray(int size)   // dynamic constructor
    {
        n = size;
        arr = new int[n];   // memory allocation
    }

    void accept()
    {
        for(int i=0;i<n;i++)
        {
            cout<<"Enter element: ";
            cin>>arr[i];
        }
    }

    void display()
    {
        cout<<"Even numbers: ";
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
                cout<<arr[i]<<" ";
        }

        cout<<"\nOdd numbers: ";
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2!=0)
                cout<<arr[i]<<" ";
        }
    }

    ~MyArray()   // destructor
    {
        delete[] arr;   // memory free
    }
};

void main()
{
    int n;

    clrscr();

    cout<<"Enter size: ";
    cin>>n;

    MyArray m(n);   // dynamic initialization

    m.accept();
    m.display();

    getch();
}