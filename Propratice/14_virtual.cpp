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
        Student (){}
        void GetStd() {
            cout << "Enter your roll no :";
            cin >> no;
            cout << "Enter your name :";
            cin >> name;
        }
    };
    class Academic:virtual public Student {
    public:
    int mrk1, mrk2 ,mrk3;
        Academic(){}
        void GetAca() {
            cout << "Enter 1st marks :";
            cin >> mrk1;
            cout << "Enter 2nd marks :";
            cin >> mrk2;
            cout << "Enter 3rd marks :";
            cin >> mrk3;
        }
    };
    class Extra: virtual public Student {
    public:
        int mrk;
        Extra(){}
        void GetExt() {
            cout << "Enter your extra marks :";
            cin >> mrk;
        }
    };
    class Result : public Academic , public Extra {
    public:
        int total;
        void Res() {
            total = mrk1 + mrk2 + mrk3 + mrk;
            cout << "Total marks is :"<<total <<endl;
            if( total > 80){
                cout << "Grade A";
            }
            else if ( total > 60){
                cout << "Grade B ";
            }
            else if ( total > 40){
                cout << "Grade C";
            }
            else {
                cout << "Grade F";
            }
        }
        
    };
int main() {
    Result r;
    r.GetStd();
    r.GetAca();
    r.GetExt();
    r.Res();
    return 0;
}