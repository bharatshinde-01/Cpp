// Create a C++ class Employee with data members Emp_No, Emp_Name, Emp_Marks.
// Write necessary member functions for the following:
// a. Accept the details and store it into the file “Emp.dat”
// b. Read the details from file and display it. 
#include <bits/stdc++.h>
using namespace std;
    class Emp {
    public:
        int no;
        string name;
        int mark;
        Emp(){}
        void GetEmp() {
            cout << "Enter your no :";
            cin >> no;
            cout << "Enter your name :";
            cin >> name;
            cout << "Enter your marks :";
            cin >> mark;
        }
        void Write() {
            ofstream file;
            file.open("emp.dat");
            file << no <<endl;
            file << name <<endl;
            file << mark <<endl;
            file.close();
        }
        void Read() {
            ifstream file ;
            file.open("emp.dat");
            file >> no ;
            file >> name ;
            file >> mark;
            file.close();
        }
    };
int main() {
    Emp e;
    e.GetEmp();
    e.Write();
    e.Read();
    return 0;
}