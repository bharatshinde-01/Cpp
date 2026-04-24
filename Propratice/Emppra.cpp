#include <bits/stdc++.h>
using namespace std;
class Emp{
    public:
    int no;
    string name;
    string pos;
    int sal;

    void Getdata() {
        cout << "Enter your number :";
        cin >> no;
        cout << "Enter your name :";
        cin >> name;
        cout << "Enter your positiion :";
        cin >> pos;
        cout << "Enter you salary :";
        cin >> sal;

    }
    void Display() {
        cout << " Number :"<<no<<endl;
        cout << "Name :"<<name<<endl;
        cout << "Position :"<<pos<<endl;
        cout << "Salary :"<<sal<<endl;
    }
    void MaxSalary(Emp e2) {
        if (this-> sal > e2.sal) {
            cout << "Greater salary than e2:";
            this->Display();
        } else {
            cout << "Greater salary than e1 :";
            e2.Display();
        }
    }
};
int main() {
     Emp e1, e2;
     e1.Getdata();
     e2.Getdata();
     e1.MaxSalary(e2);

    return 0;
}