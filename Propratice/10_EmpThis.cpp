// Create a C++ class Employee with data members E_no, E_Name, Designation and Salary.
// Accept two employees information and display information of employee having maximum
// salary. (Use this pointer)

#include <bits/stdc++.h>
using namespace std;
class Emp {
public:
    int eno;
    string name;
    string position;
    int sal;
    Emp(){}
    void GetData() {
        cout << "Enter your no :";
        cin >> eno;
        cout << "Enter your name :";
        cin >> name;
        cout << "Enter your position : ";
        cin >> position;
        cout << "Enter your salary :";
        cin >> sal;
    }
    void Display() {
        cout << "Employee number : "<<eno<<endl;
        cout << "Name :"<<name <<endl;
        cout << "Position :"<<position <<endl;
        cout << "Salary :"<<sal<<endl;
    }
    void maxSalary(Emp e2) {
        if (this-> sal > e2.sal) {
            cout << "Greater salary is :";
            this->Display();
        } else {
            e2.Display();
        }
    }
};
int main() {
    Emp e1 , e2;
    e1.GetData();
    e2.GetData();
    e1.maxSalary(e2);
    return 0;
}