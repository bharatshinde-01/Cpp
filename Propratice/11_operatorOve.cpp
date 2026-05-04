// Write a C++ program to create a class Integer. Write a C++ program to implement
// necessary member functions to overload the operator unary pre and post decrement ‘--’ for an
// integer number.

#include <bits/stdc++.h>
using namespace std;
 class Integer {
 public:
     int x;
     Integer(){}
     void Getdata() {
         cout << "Enter value :";
         cin >> x;
     }
     Integer &operator--() {
         --x;
         return *this;
     }
    Integer operator--(int) {
         Integer temp = *this;
         --x;
         return temp;
     }
     void Display() {
         cout << "Value :"<<x <<endl;
     }
 };
int main() {
    Integer i;
    i.Getdata();
    cout << "Before post drecrement :";
    i.Display();
    i--;
    cout << "After Post drecrement :";
    i.Display();
    --i;
    cout << "After pre drecrement :";
    i.Display();

    return 0;
}