// Create a base class Student(Roll_No, Name) which derives two classes
// Academic_Marks(Mark1, Mark2, Mark3) and Extra_Activities_Marks(Marks). Class
// Result(Total_Marks, Grade) inherits both Academic_Marks and Extra_Activities_Marks
// classes. (Use Virtual Base Class) Write a C++ program to Calculate Total_marks and grade.
#include <bits/stdc++.h>
using namespace std;
    class Student {
    public:
        int no;
        string name;
        Student(){}
        Student (int n, string nm){
            no = n;
            name = nm;
        }
        void GetStd() {
            cout << "Enter your roll no :";
            cin >> no;
            cout << "Enter you name :";
            cin >> name;
        }
    };
    class Academic : virtual public Student {
    public:
        int mrk1, mrk2, mrk3;
        Academic(){}
        void GetAca() {
            cout << "Enter 1st marks :";
            cin >> mrk1;
            cout << "Enter 2st marks :";
            cin >> mrk2;
            cout << "Enter 3st marks :";
            cin >> mrk3;
        }
    };
    class Extra : virtual public Student {
    public:
        int mrk;
        Extra(){}
        void GetExt() {
            cout << "Enter extra marks :";
            cin >> mrk;
        }
    };
    class Result : public Academic , public Extra {
    public:
      
        void GetRes() {
            int total = mrk1 + mrk2 + mrk3 + mrk;
        cout<<"Total marks is :"<<total<<endl;
        if (total > 80) {
            cout << "Grade : A";
        } else if (total > 60) {
            cout << "Grade : B";
        }
        else if (total > 40){
            cout << "Grade : C";
        }
        else if ( total > 35 ) {
            cout << "Grade : D";
        }
        else {
            cout << "Grade : F";
        }
    }
    };
int main() {
    Result r;
    r.GetStd();
    r.GetAca();
    r.GetExt();
    r.GetRes();
    return 0;
}
