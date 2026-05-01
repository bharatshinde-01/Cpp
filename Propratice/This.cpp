// . Create a C++ class Employee with data members E_no, E_Name, Designation and Salary.
// Accept two employees information and display information of employee having maximum
// salary. (Use this pointer)
#include <bits/stdc++.h>
using namespace std;
class Emp {
public:
    int no;
    string name;
    string Deg;
    int salary;
    Emp(){}
    Emp(int n, string na , string d , int s){
        no = n;
        name = na;
        Deg = d;
        salary = s;
    }
    void GetEmp() {
        cout << "Enter you no :";
        cin >> no;
        cout << "Enter you name :";
        cin >> name;
        cout << "Enter your Designation : ";
        cin >> Deg;
        cout << "Enter you salary :";
        cin >> salary;
    }
    void DisEmp() {
        cout << "Emp no "<<no <<endl;
        cout << "Emp name :"<<name <<endl;
        cout << "Emp Designation :"<<Deg<<endl;
        cout << "Emp Salary :"<<salary <<endl;
    }
    void MaxSal( Emp e2) {
        if (this -> salary > e2.salary) {
            cout << "Name :" <<this-> name <<"  Greater salary than : "<<e2.name<<endl;
            this->DisEmp();
        } else {
            cout << "Name :"<<e2.name <<"  Greater salary than : "<<this->name <<endl;
            e2.DisEmp();
        }
    }
};
int main() {
    Emp e , e2;
    e.GetEmp();
    e2.GetEmp();
    e.MaxSal(e2);
    return 0;
}