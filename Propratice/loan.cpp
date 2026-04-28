// Design a Base class Customer (name, phone-number).Derive a class Depositor(accno,
// balance) from Customer. Again derive a class Borrower (loan-no, loan-amt) from Depositor.
// Write necessary member functions to read and display the details of ‘n’ customers.
#include <bits/stdc++.h>
using namespace std;
    class Customer {
    public:
        string name;
     
        int num;
        Customer (){}
        Customer(string n,  int u){
            name = n;
            num = u;
        }
        void GetCus() {
            cout << "Enter your name :";
            cin >> name;
            cout << "Enter you phone number :";
            cin >> num;
        }
        void DisCus() {
            cout << "Name :"<<name<<endl;
            cout << "Phone numer :"<<num <<endl;
        }
    };
    class Depositor : public Customer  {
    public:
        int accno;
        int bal;
       
            void GetDep() {
                cout << "Enter you account number :";
                cin >> accno;
                cout << "Enter your balance :";
                cin>>bal;
            }
            void DisDep() {
                cout << "Account num :"<<accno<<endl;
                cout << "Balance :"<<bal <<endl;
            }
    };
    class Brrow :public  Depositor {
    public:
        int lono;
        int loamt;
      
        void GetBrr() {
            cout << "Enter your lone number :";
            cin >> lono;
            cout << "Enter your lone amount :";
            cin >> loamt;
        }
        void DisBrr() {
            cout << "Lone number :"<<lono<<endl;
            cout << "Lone amount :"<<loamt <<endl;
        }
    };
int main() {
    int n;
    cout << "Enter numbers of customers :";
    cin >> n;
    Brrow B[n];
    for (int i = 0; i < n; i++) {
        B[i].GetCus();
        B[i].GetDep();
        B[i].GetBrr();
    }
     for (int i = 0; i < n; i++) {
         B[i].DisCus();
         B[i].DisDep();
         B[i].DisBrr();
     }
    return 0;
}