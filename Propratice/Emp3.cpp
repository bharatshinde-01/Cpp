// . Design a base class Employee (emp-code, name). Derive two classes as Fulltime (daily
// rate, number of days, salary) and Parttime (number of working hours, hourly rate, salary) from
// Employee. Write a C++ menu driven program to:
// i. Accept the details of ‘n’ employees and calculate the salary.
// ii. Display the details of ‘n’ employees.

#include <bits/stdc++.h>
using namespace std;
class Emp {
public:
    int id;
    string name;
    Emp(){}
    Emp(int i , string n ){
        id = i;
        name =n ;
    }
    void GetEmp() {
        cout << "Enter emp id :";
        cin >> id;
        cout << "Enter your name :";
        cin >> name;
    }
    void DisEmp() {
        cout << "Id  :"<<id<<endl;
        cout << "Name :"<<name <<endl;
    }

};
class Full : public Emp {
public:
    int rate; 
    int days; 
    int sal;
    Full(){}
    Full(int r , int d , int s ){
        rate = r; 
        days = d;
        sal = s;
    }
    void GetFull() {
        cout << "Enter your per day rate :";
        cin >> rate;
        cout << "Enter your work days :";
        cin >> days;
    
    }
    void DisFull() {
        cout << "Per Day rate :"<<rate <<endl;
        cout << "Work days :"<<days <<endl;
        sal = days * rate ;
        cout << "Your Salary is this :"<<sal;
    }
};
class Part : public Emp {
public:
    int rate;
    int hours ;
    int sal;
    Part(){}
    Part(int r , int h, int s){
        rate = r;
        hours = h;
        sal = s;
    }
    void GetPart() {
        cout << "Enter your per hour work rate :";
        cin >> rate;
        cout << "Enter your work hours :";
        cin >> hours;
        sal = rate * hours;
    }
    void DisPart() {
        cout << "Your rate :"<<rate <<endl;
        cout << "Work hours :"<<hours <<endl;
        cout << "Your salary is this :"<<sal <<endl;
    }
};
int main() {
   int n;
    cout << "1 . Full time salary "<<endl;
    cout << "2 . Part time salary :"<<endl;
    cout << "Enter your choice if you want to calculate Full & Part time salary :";
    cin >> n;
    if (n == 1) {
        int m ;
        cout << "Enter employee numbers :";
        cin >> m;
        Full F[m];
        for (int i = 0; i < m; i++) {
            F[i].GetEmp();
            F[i].GetFull();
        }
        for (int i = 0; i < m; i++) {
            F[i].DisEmp();
            F[i].DisFull();
        }
    } else if (n == 2){
        
        int v ;
        cout << "Enter part time employee number :";
        cin >> v;
        Part P[v];
        for (int i = 0; i < v; i++) {
            P[i].GetEmp();
            P[i].GetPart();
        }
        for (int i = 0; i < v ; i++) {
            P[i].DisEmp();
            P[i].DisPart();
        }
    } 
    else {
        cout << " Invalid choice Please select the 1 or 2 any one ! ";
    }  
    return 0;
}