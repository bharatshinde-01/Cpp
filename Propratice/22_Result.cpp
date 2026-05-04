// Write a C++ program to create a class Exam with private data members rollNo, marks1,
// marks2. Create another class Result which calculates total and average marks. Displays
// pass/fail status based on average. (Use Friend function)

#include <bits/stdc++.h>
using namespace std;
    class Exam {
        int no;
        int mrk1;
        int mrk2;
    public:
        void Getdata() {
            cout << "Enter your roll no :";
            cin >> no;
            cout << "Enter your 1st mark :"<<endl;
            cin >> mrk1;
            cout << "Enter your 2nd mark :"<<endl;
            cin >> mrk2;
        }
        friend class Result;
    };
    class Result {
    public:
        int total;
       void Calculate(Exam e) {
           total = e.mrk1 + e.mrk2;
           float avg = total / 2.0;
           if( total > 35){
            cout << "Pass !";
           }
           else {
            cout << "Fail !";
           }
       }
    };
int main() {
    Result r;
   Exam e;
   e.Getdata();
    r.Calculate(e);
    return 0;
}