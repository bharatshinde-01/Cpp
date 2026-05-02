// Write a C++ program to create a class Integer. Write a C++ program to implement
// necessary member functions to overload the operator unary pre and post decrement ‘--’ for an
// integer number.
#include <bits/stdc++.h>
using namespace std;
class Integer {
public:
    int x;
    // void ( int n ){
    //     x = n;
    // }
    void Get() {
        cout << "Enter number :";
        cin >> x;
    }
    void operator--() {
        --x;
        
    }
    void operator--(int ){
       
        x--;
        
    }
};
int main() {
    Integer I;
    I.Get();
    --I;
    cout << "Pre drecrement :"<<I.x<<endl;
    I--;
    cout << "Post Drecrement :"<<I.x<<endl;
    return 0;
}