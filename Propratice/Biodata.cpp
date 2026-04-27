#include <bits/stdc++.h>
using namespace std;
class Personal {
public:
    string name;
    string add;
    string email;
    string dob;
    Personal(){}
    Personal(string n, string a, string e, string d){
        name = n;
        add = a;
        email = e;
          dob = d;
    }
    void GetPer(){
    cout << "Enter your name :";
    cin >> name;
    cout << "Enter your address :";
    cin >> add;
    cout << "Enter your email :";
    cin >> email;
    cout << "Enter you birth date :";
    cin >> dob;
    }
    void DisPer() {
        cout << "Name :"<<name<<endl;
        cout << "Address :"<<add <<endl;
        cout << "Email :"<<email <<endl;
        cout << "Birth Date :"<<dob<<endl;
    }
};
class Acadimic {
public:
    int mark10;
    int mark12;
    string mrk10;
    string mrk12;
    Acadimic(){}
    Acadimic(int m, int m2 ,string o10,string o12){
        mark10 = m;
        mrk10 = o10;
        mark12 = m2;
        mrk12 = o12;
    }
    void GetAca() {
        cout << "Enter your mark on 10th class :";
        cin>>mark10;
        cout << "Enter your  10 Class obtained :";
        cin >> mrk10;
        cout << "Enter your 12 th mark's :";
        cin >> mark12;
        cout << "Enter your 12th class obtained :";
        cin>>mrk12;
    }
    void DisAca() {
        cout << "10th Marks :"<<mark10<<endl;
        cout << "10 Class obtained : "<<mrk10<<endl;
        cout << "12th Marks :"<<mark12<<endl;
        cout << "12 Class obtained :"<<mrk12<<endl;
    }
};

class Biodata : public Personal, public Acadimic {
public:
    void GetAll() {
        GetPer();   // Personal input
        GetAca();   // Academic input
    }
    void DisAll() {
        DisPer();   // Personal display
        DisAca();   // Academic display
    }
};
    
int main() {
    Biodata B;
    B.GetAll();
    B.DisAll();
    return 0;
}