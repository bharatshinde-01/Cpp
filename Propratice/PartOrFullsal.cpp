#include <bits/stdc++.h>
using namespace std;
    class Emp {
    public:
        int empno;
        string name;
    Emp(){}
        Emp(int e , string n){
            empno = e;
            name = n;
        }
        void GetEmp() {
            cout << "Enter your Employee id :";
            cin >> empno;
            cout << "Enter you name :";
            cin >> name;
        }
        void DisEmp() {
            cout << "Employee id :"<<empno<<endl;
            cout << "Employee name :"<<name<<endl;
        }
    };
    class FullSal : public Emp {
    public:
    int rate;
    int numday;
    int salary;
    void GetFull() {
        cout << "Enter your Daily rate :";
        cin >> rate;
        cout << "Enter you number of day work :";
        cin >> numday;
      salary = rate * numday;
    }
    void DisFull() {
        cout << "Daily rate :"<<rate <<endl;
        cout << "Number of work day's :"<<numday<<endl;
        cout << "Salary :"<<salary <<endl;
    }
        
    };
    class PartSal : public Emp{
    public:
        int hrsrate;
        int hrswork;
        int sal;

        void GetPart() {
            cout << "Enter your hours rate :";
            cin >> hrsrate;
            cout << "Enter you worked hours :";
            cin >> hrswork;
            sal = hrsrate * hrswork;
        }
        void DisPart() {
            cout << "Hours rate :"<<hrsrate<<endl;
            cout << "Hours worked :"<<hrswork<<endl;
            cout << "Salary is :"<<sal<<endl;
        }
    };
int main() {
    
 
    int choice;
    cout << "1. Fulltime salary !"<<endl;
    cout << "2. Parttime salary !"<<endl;
    cout << "3. Exit !"<<endl;
    cout << "Choose one of three !";
    cin >>choice ;
    if( choice == 1){
        int n;
        cout << "Enter a number of employee Full time salary :";
        cin >> n;
        FullSal F[n];
        
        for (int i = 0; i < n ; i++) {
            F[i].GetEmp();
            F[i].GetFull();
           
        }
        for (int i = 0; i < n; i++) {
            F[i].DisEmp();
            F[i].DisFull();
        }
    }
    else if(choice == 2){
        int m;
        cout << "Enter a number of employee Parttime salary :";
        cin >> m;
           PartSal P[m];
        
        for (int j = 0; j < m ; j++) {
            P[j].GetEmp();
            P[j].GetPart();
          
        }
        for (int i = 0; i < m; i++) {
            P[i].DisEmp();
            P[i].DisPart();
        }
    }
    else {
        cout << "Exiting !";
    }
    
    
    return 0;
}