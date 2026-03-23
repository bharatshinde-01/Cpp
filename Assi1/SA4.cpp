#include <iostream>
#include <iomanip>   // manipulators ke liye
using namespace std;

int main()
{
    long long acc_no;
    string name, address;
    long long contact;
    double balance, deposit;

    cout << "Enter Account Number: ";
    cin >> acc_no;

    cin.ignore();   // getline se pehle buffer clear

    cout << "Enter Account Holder Name: ";
    getline(cin, name);

    cout << "Enter Address: ";
    getline(cin, address);

    cout << "Enter Contact Number: ";
    cin >> contact;

    cout << "Enter Balance: ";
    cin >> balance;

    cout << "Enter Deposit Amount: ";
    cin >> deposit;

    balance = balance + deposit;   // deposit add kar rahe hain

    cout << "\n----- Updated Bank Details -----\n";

    cout << left << setw(20) << "Account No:" << acc_no << endl;
    cout << left << setw(20) << "Name:" << name << endl;
    cout << left << setw(20) << "Address:" << address << endl;
    cout << left << setw(20) << "Contact:" << contact << endl;
    cout << left << setw(20) << "Balance:" << fixed << setprecision(2) << balance << endl;

    return 0;
}
