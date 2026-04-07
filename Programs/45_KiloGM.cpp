#include<iostream.h>
#include<conio.h>

class Conversion
{
protected:
    float gram;

public:
    void getData()
    {
        cout<<"Enter weight in grams: ";
        cin>>gram;
    }
};

class Weight : public Conversion   // inheritance
{
    float kg;

public:
    void convert()
    {
        kg = gram / 1000;   // gram to kg
    }

    void display()
    {
        cout<<"\nGrams = "<<gram;
        cout<<"\nKilograms = "<<kg;
    }
};

void main()
{
    Weight w;

    clrscr();

    w.getData();
    w.convert();
    w.display();

    getch();
}