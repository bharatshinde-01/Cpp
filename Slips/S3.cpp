#include <iostream>
#include <iomanip>   // 👉 yaha se manipulators aate hai (setw, left etc.)
using namespace std;

// 👉 class = ek blueprint / structure jisme data + functions dono hote hai
class Bank_Account {

    // 👉 ye sab variables (data members) hai
    int acc_no;          // account number store karega
    string name;         // account holder name
    string addr;         // address
    long long contact;   // mobile number (big number isliye long long)
    double balance;      // balance store karega

public:

    // 👉 input lene ke liye function
    void input() {

        cout << "Enter Account Number: ";
        cin >> acc_no;

        cout << "Enter Name: ";
        cin.ignore(); 
        // 👉 cin ke baad newline buffer me rehta hai
        // 👉 isko remove karne ke liye cin.ignore()

        getline(cin, name);  
        // 👉 getline pura naam (space ke sath) lega

        cout << "Enter Address: ";
        getline(cin, addr);

        cout << "Enter Contact Number: ";
        cin >> contact;

        cout << "Enter Balance: ";
        cin >> balance;
    }

    // 👉 deposit function
    void deposit() {

        double amount;

        cout << "Enter amount to deposit: ";
        cin >> amount;

        // 👉 balance update ho raha hai
        balance = balance + amount;
    }

    // 👉 display function
    void display() {

        cout << "\n--- Account Details ---\n";

        // 👉 yaha manipulators use ho rahe hai

        cout << setw(20) << left << "Account No:" << acc_no << endl;
        // 👉 setw(20) = 20 space ka column banata hai
        // 👉 left = text left side align karta hai

        cout << setw(20) << left << "Name:" << name << endl;

        cout << setw(20) << left << "Address:" << addr << endl;

        cout << setw(20) << left << "Contact:" << contact << endl;

        cout << setw(20) << left << "Balance:" << balance << endl;
    }
};

int main() {

    // 👉 object bana rahe hai (class ka real use)
    Bank_Account b;

    b.input();     // 👉 data lena
    b.deposit();   // 👉 deposit karna
    b.display();   // 👉 final output

    return 0;
}