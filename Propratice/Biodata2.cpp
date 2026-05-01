// Design two base classes Personnel (name, address, email-id, birth date) and Academic
// (marks in tenth, marks in tenth, class obtained). Derive a class Bio-data from both these classes.
// Write a C++ program to prepare a bio-data of a student having Personnel and Academic
// information.
#include <bits/stdc++.h>
using namespace std;
    class Personal  {
    public:
        string name;
        string add;
        string email;
        string DOB;
        Personal (){}
        Personal(string n, string a, string e, string d){
            name =n ;
            add = a;
            email = e;
            DOB = d;
        }
        GetPer(){
            cout << "Enter you name :";
            cin >> name;
            cout << "Enter you address :";
            cin >> add;
            cout << "Enter you emil :";
            cin >> email;
            cout << "Enter your date of birth :";
            cin >> DOB;
        }
        DisPer(){
            cout << "Name :"<<name <<endl;
            cout << "Address :"<<add <<endl;
            cout << "Email :"<<email<<endl;
            cout << "Date of birth :"<<DOB<<endl;
        }
    };
    class Academic {
    public:
    int mrk10;
    string grd10;
    int mrk12;
    string grd12;
        Academic(){}
        Academic( int m1,string m10, int m12 , string m21){
            mrk10 = m1;
            grd10 = m10;
            mrk12 = m12;
            grd12 = m21;

        }
        void GetAca() {
            cout << "Enter your 10th marks :";
            cin >> mrk10;
            cout << "Enter your 10th grade :";
            cin >> grd10;
            cout << "Enter your 12th marks :";
            cin >> mrk12;
            cout << "Enter your 12th grade :";
            cin >> grd12;
        }
        void DisAca() {
            cout << "10th mark's :"<<mrk10<<endl;
            cout << "10th Grade :"<<grd10<<endl;
            cout << "12th mark's :"<<mrk12<<endl;
            cout << "12th Grade :"<<grd12<<endl;
        }
    };
    class BioData : public Personal , public Academic  {
    public:
        void GetBio() {
            GetPer();
            GetAca();
        }
        void DisBio() {
            DisPer();
            DisAca();
        }
    };
int main() {
    BioData B;
    B.GetBio();
    B.DisBio();
    return 0;
}