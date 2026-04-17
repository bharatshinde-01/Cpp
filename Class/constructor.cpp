#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int rollno;
    float sgpa;
    Student( string s, int r, float d){ // This is a Constuctor & it always Start with class name and it hase no return value 
                                        // Exmaple = Student 
        name = s;
        rollno = r;
        sgpa = d;
    }
};
int main() {
    Student s1("Bharat", 20 , 7.10); 
    cout<<s1.name <<"  " << s1.rollno <<"  " <<s1.sgpa;
    return 0;
}