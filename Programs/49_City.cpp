#include<iostream.h>
#include<conio.h>
#include<fstream.h>

class City
{
    char name[20];
    int stdcode;

public:
    void accept()
    {
        cout<<"Enter City Name and STD Code: ";
        cin>>name>>stdcode;
    }

    void display()
    {
        cout<<"\n"<<name<<" "<<stdcode;
    }
};

void main()
{
    City c;
    int n;

    clrscr();

    cout<<"Enter number of cities: ";
    cin>>n;

    ofstream fout("cities.txt");   // file write

    for(int i=0;i<n;i++)
    {
        c.accept();
        fout.write((char*)&c, sizeof(c));   // write object
    }

    fout.close();

    ifstream fin("cities.txt");   // file read

    cout<<"\nData from file:";

    while(fin.read((char*)&c, sizeof(c)))   // read till end
    {
        c.display();
    }

    fin.close();

    getch();
}