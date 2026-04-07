#include<iostream.h>
#include<conio.h>
#include<fstream.h>

class Employee
{
    int no;
    char name[20];
    float marks;

public:
    void accept()
    {
        cout<<"Enter No Name Marks: ";
        cin>>no>>name>>marks;
    }

    void display()
    {
        cout<<"\n"<<no<<" "<<name<<" "<<marks;
    }
};

void main()
{
    Employee e;
    ofstream fout("Emp.dat", ios::binary);   // file write
    ifstream fin("Emp.dat", ios::binary);    // file read

    clrscr();

    // write to file
    e.accept();
    fout.write((char*)&e, sizeof(e));   // object write

    fout.close();

    // read from file
    fin.read((char*)&e, sizeof(e));   // object read
    cout<<"\nData from file:";
    e.display();

    fin.close();

    getch();
}