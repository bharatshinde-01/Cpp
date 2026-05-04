//  Design a Base class Customer (name, phone-number).Derive a class Depositor(accno,
// balance) from Customer. Again derive a class Borrower (loan-no, loan-amt) from Depositor.
// Write necessary member functions to read and display the details of ‘n’ customers
#include <bits/stdc++.h>
using namespace std;
   class Customer {
   public:
       string name;
       string no;
       Customer(){}
       void GetCus() {
           cout << "Enter your name :";
           cin >> name;
           cout << "Enter your phone number :";
           cin >> no;
       }
       void DisCus() {
           cout << "Name :"<<name<<endl;
           cout << "Number :"<<no;
       }
   };
   class Depositor: public Customer {
   public:
       int accno;
       int bal;
       Depositor (){}
       void GetDep() {
           cout << "Enter your account no :";
           cin >> accno;
           cout << "Enter your account balance : ";
           cin >> bal;
       }
       void DisDep() {
           cout << "Account no :"<<accno<<endl;
           cout << "Account Balance "<<bal <<endl;
       }
   };
   class Borrow : public Depositor{
   public:
       int lono;
       int loamt;
       Borrow(){}
       void GetBor() {
           cout << "Enter your lone number :";
           cin >> lono;
           cout << "Enter your lone amount :" ;
           cin >> loamt;
       }
       void DisBor() {
           cout << "Your lone number :"<<lono<<endl;
           cout << "Your lone amount :"<<loamt <<endl;
       }
   };
int main() {
    int n;
    cout << "Enter number of Customers :";
    cin >> n;
    Borrow b[n];
    for (int i = 0; i < n; i++) {
        b[i].GetCus();
        b[i].GetDep();
        b[i].GetBor();
    }
    for (int j = 0; j < n; j++) {
        b[j].DisCus();
        b[j].DisDep();
        b[j].DisBor();
    }
    return 0;
}