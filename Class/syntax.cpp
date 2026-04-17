#include <bits/stdc++.h>
using namespace std;

class Student {         // user definded data type 
                    // Class is User definided data type that contains of data member or
                    // member  is a templet or bluprint 
    
    public:
    string name; // this ia a attributes Student
    int rollno;  // this is a also a attribute of Student
};
int main() {
    Student s1; // s1 is a object of a class 
                // Object of instance of a class that which contains actual values of data members 
    cout<<"Enter the name :";;

    getline(cin,s1.name);
    cout<<"Enter roll no :";
    cin>>s1.rollno;             // s1.rollno is called Data member access 
    cout<<s1.name << "  " <<endl <<s1.rollno;
    return 0;
}