//  Create class Person which contains data member as Passport_Id, Person_name,
// Nationality, Gender, Date_of_Birth, Date_of_Issue, Date_of_expiry. Write a c++ program to
// perform following member functions:
// a. Enter details of all persons
// b. Display passport details of one person

#include <bits/stdc++.h>
using namespace std;
class Pass {
public:
Pass(){}
    int id;
    string name, national , gender , DI, DE, DOB;
    Pass(int i,string n, string nat , string g, string di, string de, string dob ){
        id = i;
        name = n;
        national = nat;
        gender = g;
        DI = di;
        DE = de;
        DOB = dob;
    }
    void GetPass() {
        cout << "Enter your id :";
        cin >> id;
        cout << "Enter your name :";
        cin >> name;
        cout << "Enter your nationality :";
        cin >> national;
        cout << "Enter your gender :";
        cin >> gender ;
        cout << "Enter your Date of birth :";
        cin >> DOB;
        cout << "Enter you Date of issue :";
        cin >> DI;
        cout << "Enter your Date of Expire :";
        cin >> DE;
    }
    void DisPass() {
        cout << "ID :"<<id<<endl;
        cout << "Name :"<<name <<endl;
        cout << "Nationality :"<<national <<endl;
        cout << "Gender :"<<gender <<endl;
        cout << "Date of birth :"<<DOB<<endl;
        cout << "Date of issue :"<<DI<<endl;
        cout << "Date of Expire :"<<DE<<endl;
    }
};
int main() {
    int n;
    cout << "Enter number's of persons :";
    cin >> n;

    Pass P[n];
    for (int i = 0; i < n; i++) {
        P[i].GetPass();
    }
    // P.GetPass();
    P[n-n].DisPass();
    return 0;
}