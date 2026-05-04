// Write a C++ program to accept and display Bank_Account details as Acc_No,
// Acc_holder_name, Addr, Contact_Number and Balance. Perform deposit of some amount and
// display modified bank account details. (Use manipulators)

#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main() {
    int no;
    char name[50];
    char add[100];
    char num[10];
    float bal;
    float dep;
    float total;
    cout << "Enter your Account no :";
    cin >> no;
    cin.ignore();
    cout << "Enter your name :";
    cin.getline(name,50);
    
    cout << "Enter your address :";
    cin.getline(add,100);
    
    cout << "Enter your number :";
    cin.getline(num , 10);
    
    cout << "Enter your balance :";
    cin >> bal;
    cout << "Enter your deposit balance :";
    cin>>dep;
    total= bal + dep;
    cout << "---------------------------------------------------------------------"<<endl;
    cout << "------------------------Account details------------------------------"<<endl;
    cout << "---------------------------------------------------------------------";
    cout <<"Account no  :" <<setw(10) <<setw(10) << no <<endl;
    cout <<"Name   :" <<setw(10) <<setw(10) << name <<endl;
    cout <<"Address  :" <<setw(10) <<setw(10) << add <<endl;
    cout <<"Contact no   :" <<setw(10) <<setw(10) <<num <<endl;
    cout <<"Your balance   :" <<setw(10) <<setw(10) << bal <<endl;
    cout <<"Deposit balance   :" <<setw(10) <<setw(10) << dep <<endl;
    cout <<"Total balance    :" <<setw(10) <<setw(10) << total <<endl;

    return 0;
}