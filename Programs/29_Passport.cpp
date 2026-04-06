#include<iostream.h>
#include<conio.h>
#include<string.h>

class Person
{
    int pid;
    char name[20], nation[20], gender[10];
    char dob[15], doi[15], doe[15];

public:
    void accept()
    {
        cout<<"Enter PassportID Name Nationality Gender DOB DOI DOE: ";
        cin>>pid>>name>>nation>>gender>>dob>>doi>>doe;
    }

    void display()
    {
        cout<<"\n"<<pid<<" "<<name<<" "<<nation<<" "<<gender<<" "<<dob<<" "<<doi<<" "<<doe;
    }

    int getId()
    {
        return pid;
    }
};

void main()
{
    Person p[10];
    int n, id;

    clrscr();

    cout<<"Enter number of persons: ";
    cin>>n;

    // enter details
    for(int i=0;i<n;i++)
        p[i].accept();

    // search and display one person
    cout<<"\nEnter Passport ID to search: ";
    cin>>id;

    for(int i=0;i<n;i++)
    {
        if(p[i].getId() == id)   // search by id
        {
            p[i].display();
            break;
        }
    }

    getch();
}