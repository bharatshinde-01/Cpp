//  Design a base class Employee (emp-code, name). Derive two classes as Fulltime (daily
// rate, number of days, salary) and Parttime (number of working hours, hourly rate, salary) from
// Employee. Write a C++ menu driven program to:
// i. Accept the details of ‘n’ employees and calculate the salary.
// ii. Display the details of ‘n’ employees.
#include <bits/stdc++.h>
using namespace std;
    class Emp {
    public:
        int code;
        string name;
        Emp(){}
        void GetEmp() {
            cout << "Enter emp code :";
            cin >> code;
            cout << "Enter your name :";
            cin >> name;
        }
        void DisEmp() {
            cout << "Emp code :"<<code<<endl;
            cout << "Emp name :"<<name<<endl;
        }
    };
    class Full: public Emp {
    public:
        int rate;
        int days;
        int sal;
        Full(){}
        void GetFull() {
            cout << "Enter your per day work rate :";
            cin >> rate;
            cout << "Enter your worked days :";
            cin >> days;
            sal = rate * days;
        }
        void DisFull() {
            cout << "Your per day rate :"<<rate<<endl;
            cout << "Your worked days :"<<days<<endl;
            cout << "Your salary :"<<sal;
        }
    };
    class Part: public Emp {
    public:
        int rate ;
        int hours;
        int sal;
        Part(){}
        void GetPart() {
            cout << "Enter your per hour rate :";
            cin >> rate;
            cout << "Enter your hours worked :";
            cin >> hours;
            sal = rate * hours;
        }
        void DisPart() {
            cout << "per hours Rate :"<<rate <<endl;
            cout << "Hours :"<<hours <<endl;
            cout << "salary :"<<sal<<endl;
        }
    };
int main() {
    cout << "1 . Full time salary !"<<endl;
    cout << "2. Part time salary !"<<endl;
    int n; 
    cout << "Enter your choice :";
    cin >> n;
    
    if( n == 1){
        int m;
        cout << "Enter number of employee to calculate salary :";
        cin >>m;
       Full e[m];
        for (int i = 0; i < m; i++) {
            e[i].GetEmp();
            e[i].GetFull();
        }
        for (int i = 0; i < m; i++) {
            e[i].DisEmp();
            e[i].DisFull();
        }
    }
     else if( n == 2){
        int k;
        cout << "Enter number of part time employee :";
        cin >> k;
        Part p[k];
        for (int i = 0; i < k; i++) {
            p[i].GetEmp();
            p[i].GetPart();
        }
        for (int i = 0; i < k; i++) {
            p[i].DisEmp();
            p[i].DisPart();
        }
     }
     else {
        cout << "Please Select a your choice !";
     }
    return 0;
}