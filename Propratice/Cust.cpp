// Design a Base class Customer (name, phone-number).Derive a class Depositor(accno,
// balance) from Customer. Again derive a class Borrower (loan-no, loan-amt) from Depositor.
// Write necessary member functions to read and display the details of ‘n’ customers.

#include <bits/stdc++.h>
using namespace std;
class Cust {
public:
    string name;
    string phone;
    void Getdata() {
        cout << "Enter name :";
        cin >> name;
        cout << "Enter phone num :";
        cin>>phone;
    }
    void display() {
        cout << "Your name :"<<name<<endl;
        cout << "Your phone number :"<<phone <<endl;
    }
};
class Dep : public Cust{
    public:
    int accno;
    float bal;
    void Depdtl() {
        cout << "Enter Account no :";
        cin >> accno;
        cout << "Enter your balance :";
        cin >> bal;
    }
    void PrintDep() {
        cout << "Your account num :"<<accno<<endl;
        cout << "Your currernt balance is :"<<bal<<endl;
    }
};
class Brrow : public Dep {
public:
    
    int lono;
    int loamt;

    void Amt() {
        cout << "Enter your loan num :";
        cin >> lono;
        cout << "Enter loan Amount :";
        cin >> loamt;
    }
    void Amtdis() {
        cout << "Your loan number is :"<<lono<<endl;
        cout << "Your lona amount is :"<<loamt<<endl;
    }
};
int main() {
    int n;
    cout << "Enter Coustomar number's :";
    cin >> n;
    Brrow B[n];
    for (int i = 0; i < n; i++) {
        B[i].Getdata();
        B[i].Depdtl();
        B[i].Amt();
    }
    for (int i = 0; i < n; i++) {
        B[i].display();
        B[i].PrintDep();
        B[i].Amtdis();
    }
    return 0;
}