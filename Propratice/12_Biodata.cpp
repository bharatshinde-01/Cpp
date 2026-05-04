//  Design two base classes Personnel (name, address, email-id, birth date) and Academic
// (marks in tenth, marks in tenth, class obtained). Derive a class Bio-data from both these classes.
// Write a C++ program to prepare a bio-data of a student having Personnel and Academic
// information.

#include <bits/stdc++.h>
using namespace std;
    class Personal {
    public:
    char name[50] , add[100], email[50], dob[50];
    Personal(){}
    void GetPer() {
        cout << "Enter Name :";
        cin.getline(name,50);
        cout << "Enter address :";
        cin.getline(add,100);
        cout << "Enter email :";
        cin.getline(email,50);
        cout << "Enter Birth date :";
        cin.getline(dob,50);
    }
        void DisPer() {
            cout << "Name :"<<name<<endl;
            cout << "Address :"<<add <<endl;
            cout << "Email :"<<email <<endl;
            cout << "Birth date :" <<dob<<endl;
        }
    };
    class Academic {
    public:
        int mrk10;
        char grd10[5];
        int mrk12;
        char grd12[5];
        Academic(){}
        void GetAca() {
            cout << "Enter your 10th Marks :";
            cin >> mrk10;
            cout << "Enter your 10th Grade :";
            cin >> grd10;
            cout << "Enter your 12th Marks :";
            cin >> mrk12;
            cout << "Enter your 12th Grade :";
            cin >> grd12;
        }
        void DisAca() {
            cout << "10th Mark : " << mrk10 << endl;
            cout << "10th Grade :" <<grd10 <<endl;
            cout << "12th Mark :"<<mrk12 <<endl;
            cout << "12th Grade :"<<grd12 <<endl;
        }
    };
    class BioData :public Personal , public Academic{
    public:
        void Getdata() {
            GetPer();
            GetAca();
        }
        void Display() {
            DisPer();
            DisAca();
        }
    };
int main() {
    BioData b;
    b.Getdata();
    b.Display();
    return 0;
}