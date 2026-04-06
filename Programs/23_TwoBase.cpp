#include<iostream.h>
#include<conio.h>

class Personnel
{
protected:
    char name[20], address[30], email[30], bdate[15];

public:
    void getPersonal()
    {
        cout<<"Enter Name Address Email BirthDate: ";
        cin>>name>>address>>email>>bdate;
    }
};

class Academic
{
protected:
    float m10, m12;
    char classObt[10];

public:
    void getAcademic()
    {
        cout<<"Enter 10th 12th Marks and Class: ";
        cin>>m10>>m12>>classObt;
    }
};

class BioData : public Personnel, public Academic   // multiple inheritance
{
public:
    void display()
    {
        cout<<"\n--- Bio Data ---\n";
        cout<<name<<" "<<address<<" "<<email<<" "<<bdate<<endl;
        cout<<"10th: "<<m10<<" 12th: "<<m12<<" Class: "<<classObt;
    }
};

void main()
{
    BioData b;

    clrscr();

    b.getPersonal();
    b.getAcademic();

    b.display();

    getch();
}