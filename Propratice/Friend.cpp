// Write a C++ program to create a class Exam with private data members rollNo, marks1,
// marks2. Create another class Result which calculates total and average marks. Displays
// pass/fail status based on average. (Use Friend function)

#include <bits/stdc++.h>
using namespace std;
    class Exam {
    private:
    int rol;
    int mark1, mark2;
    public:
    void Getdata() {
        cout << "Enter your roll no :";
        cin >> rol;
        cout << "Enter your 1st mark's :";
        cin >> mark1;
        cout << "Enter your 2nd mark's :";
        cin >> mark2;
    }
    friend class Result ;
    };

    class Result {
    public:
        int total ;
        
        void Calculate(Exam e) {
            total = e.mark1 + e.mark2;
            float avg = total / 2.0;
            cout << "Total marks is :"<<total<<endl;
            cout << "Avarage marks is :"<<avg<<endl;
            if (avg >= 35) {
                cout << "Pass !"<<endl;
            } else {
                cout << "!Fail"<<endl;
            }
        }
    };
int main() {
   Exam e;
   e.Getdata();
   Result r;
   r.Calculate(e);
    return 0;
}