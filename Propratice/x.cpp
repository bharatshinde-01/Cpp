// Write a C++ program to create a class Integer. Write a C++ program to implement
// necessary member functions to overload the operator unary pre and post decrement ‘--’ for an
// integer number.
#include <bits/stdc++.h>
using namespace std;
class Integer{
    public:
    int x;
    Integer( int xx = 0){
         x = xx;
    }
   void Getdata() {
        cout << "Enter value :"<<endl;  
        cin >> x;
        // cout << "You Entered value :"<<x<<endl;
    }
    Integer operator--() {
        // cout << "Predicrement value :"<<endl;
        --x;
        return *this;
    }
    Integer operator--(int) {
        Integer temp = *this;
        // cout << "Postdicrement value :"<<endl;
        x--;
        return temp;
    }
    
};
int main() {
    Integer i(5);
    i.Getdata();        // x = 7

    --i;
    
    cout << "Pre decrement: " << i.x << endl;  // 6

    i--;
    cout << "Post decrement: " << i.x << endl; // 5 (after decrement)

    return 0;
}