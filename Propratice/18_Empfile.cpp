// Create a C++ class Employee with data members Emp_No, Emp_Name, Emp_Marks.
// Write necessary member functions for the following:
// a. Accept the details and store it into the file “Emp.dat”
// b. Read the details from file and display it. 

#include <bits/stdc++.h>
using namespace std;
    class Employee {
    public:
        int no;
        char name[50];
        float mrk;
        Employee(){}
        void Getdata() {
            cout << "Enter your Employee no :";
            cin >> no;
            cout << "Enter your name :";
            cin>>name;
           
            cout << "Enter your marks :";
            cin >> mrk;
        }
        void Write () {
            ofstream file;
            file.open("Emp.dat");
            file <<no << "  ";
            file << name << "  ";
            file << mrk << "   ";
            file.close();
        }
        void Read() {
            ifstream file;
            file.open("Emp.dat");
            file >> no ;
            file >> name ;
            file >> mrk;
            file.close();
        }
    };
int main() {
    Employee e;
    e.Getdata();
    e.Write();
    e.Read();
    return 0;
}