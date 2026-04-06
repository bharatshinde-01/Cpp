#include<iostream.h>
#include<conio.h>

class Shape
{
public:

    float area(float r)   // circle
    {
        return 3.14 * r * r;
    }

    float area(float r, float h)   // cone
    {
        return 3.14 * r * (r + h);
    }

    float area(int r)   // sphere (overloading by type)
    {
        return 4 * 3.14 * r * r;
    }
};

void main()
{
    Shape s;

    clrscr();

    cout<<"Circle Area = "<<s.area(5.0)<<endl;
    cout<<"Cone Area = "<<s.area(5.0,10.0)<<endl;
    cout<<"Sphere Area = "<<s.area(5)<<endl;

    getch();
}