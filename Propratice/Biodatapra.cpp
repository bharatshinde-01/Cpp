// . Design two base classes Personnel (name, address, email-id, birth date) and Academic
// (marks in tenth, marks in tenth, class obtained). Derive a class Bio-data from both these classes.
// Write a C++ program to prepare a bio-data of a student having Personnel and Academic
// information.

#include <bits/stdc++.h>
using namespace std;
    class Personal {
    public:
        string name;
        string add;
        string email;
        string DOB;
        Personal(){}
        void GetPer() {
            cout << "Enter your name :";
            cin >> name;    
            cout << "Enter your address :";
            cin >> add;
            cout << "Enter your email :";
            cin >> email;
            cout << "Enter your Date of Birth :";
            cin >> DOB;
        }
        void DisPer() {
            cout << "Name :"<<name<<endl;
            cout << "Address :"<<add<<endl;
            cout << "Email :"<<email<<endl;
            cout << "Date of Birth :"<<DOB<<endl;
        }
    };
        class Academic  {
        public:
            int mrk1, mrk2;
            string m10 , m12;
            Academic(){}
            void GetAca() {
                cout << "Enter your 10th marks :";
                cin >> mrk1;
                cout << "Enter your Grade in 10th :";
                cin >> m10;
                cout << "Enter your 12th marks :";
                cin >> mrk2;
                cout << "Enter your Grade in 12th :";
                cin >> m12;
            }
            void DisAca() {
                cout << "10th marks :"<<mrk1<<endl;
                cout << "10th Grade :"<<m10<<endl;
                cout << "12th marks :"<<mrk2<<endl;
                cout << "12th Grade :"<<m12<<endl;
            }
        };
    class BioData : public Personal , public Academic {
    public:
        BioData(){}
        GetBio(){
            GetPer();
            GetAca();
        }
        DisBio(){
            DisPer();
            DisAca();
        }
    };
int main() {
    BioData b;
    b.GetBio();
    b.DisBio();
    return 0;
}