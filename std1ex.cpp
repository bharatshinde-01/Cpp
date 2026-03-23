#include <iostream>
using namespace std;

class Student
{
    int sno;
    string name;
    int sub1, sub2, total;

public:
    void accept()
    {
        cout << "Enter Roll No: ";                                                                                        

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter marks of 2 subjects: ";
        cin >> sub1 >> sub2;
                                                                                                                                                      
        total = sub1 + sub2;   // total calculate ho raha hai
    }

    void display()
    {
        cout << sno << " " << name << " "
             << sub1 << " " << sub2 << " "
             << total << endl;
    }
};

int main()
{
    Student s[5];   // array of objects (5 students)

    cout << "Enter details:\n";
    for(int i = 0; i < 5; i++)
    {
        s[i].accept();   // har student ka data input
    }

    cout << "\nStudent Details:\n";
    for(int i = 0; i < 5; i++)
    {
        s[i].display();  // har student ka data print
    }

    return 0;
}
