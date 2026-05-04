// Create class Person which contains data member as Passport_Id, Person_name,
// Nationality, Gender, Date_of_Birth, Date_of_Issue, Date_of_expiry. Write a c++ program to
// perform following member functions:
// a. Enter details of all persons
// b. Display passport details of one person

#include <bits/stdc++.h>
using namespace std;
    class Person {
    public:
        int id;
        string name,natio,gender , dob , doi, doe;
        Person(){}
        void Getdata() {
            cout << "Enter your id :";
            cin >> id;
            cout << "Enter your name :";
            cin >> name;
            cout << "Enter your Gender :";
            cin >> gender;
            cout << "Enter your Date of birth :";
            cin >> dob;
            cout << "Enter your Date of issue :";
            cin >> doi;
            cout << "Enter your Date of expire :";
            cin >> doe;
        }
        void Display() {
            cout << "Id :"<<id<<endl;
            cout << "Name :"<<name <<endl;
            cout << "Gender "<<gender<<endl;
            cout << "Date of Birth :"<<dob<<endl;
            cout << "Date of issue :"<<doi<<endl;
            cout << "Date of Expire :"<<doe<<endl;
        }
    };
int main() {
    
    Person p;
    p.Getdata();
    p.Display();
    return 0;
}