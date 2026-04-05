#include<iostream.h>
#include<conio.h>

class Product
{
protected:
    int id;
    char name[20];
    float price;

public:
    void getProduct()
    {
        cout<<"Enter Id Name Price: ";
        cin>>id>>name>>price;
    }
};

class Discount : public Product   // inheritance
{
    float disc;

public:
    void getDiscount()
    {
        cout<<"Enter Discount %: ";
        cin>>disc;
    }

    float calcTotal()
    {
        return price;
    }

    float calcDiscount()
    {
        return (price * disc)/100;
    }
};

void main()
{
    int n;
    float total=0, totalDisc=0;

    clrscr();

    cout<<"Enter number of products: ";
    cin>>n;

    Discount d[10];

    for(int i=0;i<n;i++)
    {
        d[i].getProduct();
        d[i].getDiscount();

        total = total + d[i].calcTotal();
        totalDisc = totalDisc + d[i].calcDiscount();
    }

    cout<<"\nTotal Price = "<<total;
    cout<<"\nTotal Discount = "<<totalDisc;

    getch();
}