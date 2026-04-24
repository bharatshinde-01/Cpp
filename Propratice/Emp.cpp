
// Create a C++ class Employee with data members E_no, E_Name, Designation and Salary.
// Accept two employees information and display information of employee having maximum
// salary. (Use this pointer)

#include <bits/stdc++.h>
using namespace std;
    class Emp {
    public:
        int Empno;
        string name;
        string Deg;
        float salary;

        void GetEmp() {
            cout << "Enter Employee no :";
            cin >> Empno;

            cout << "Enter your name :";
            cin >> name;

            cout << "Enter you Designation :";
            cin>>Deg;

            cout << "Enter you salary :";
            cin >> salary;
        }
        void DisEmp() {
            cout << " Employee id  :"<<Empno<<endl;
            cout << "Employee Nmae :"<<name<<endl;
            cout << "Enployee Position :"<<Deg<<endl;
            cout << "Employee Salary :"<<salary <<endl;
        }
        void max(Emp e2) {
             if (this-> salary > e2.salary){
                cout <<" This employee Greter salary  : "<<endl;
                this->DisEmp();
             }
             else {
                cout  <<"This employee Greter salary   :" <<endl;
                e2.DisEmp();
             }
        }
    };
int main() {
    Emp e1, e2;
    e1.GetEmp();
    e2.GetEmp();
    e1.max(e2);
    return 0;
}