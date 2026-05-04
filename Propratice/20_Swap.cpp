// Write a C++ program to create two objects and swap their values using a friend function.
// Display values before and after swapping.

#include <bits/stdc++.h>
using namespace std;
    class Change {
    public:
        int n;
        Change (){}
        void Getdata(){
            cout << "Enter value :";
            cin >> n;
        }
        void Display() {
            cout << "value = "<< n <<endl;
        }
        friend void swapobj(Change &c1 , Change &c2);
    };
    void swapobj(Change &c1,Change &c2){
        int temp = c1.n;
        c1.n = c2.n;
        c2.n = temp;
    }
int main() {
    Change c1 , c2;
    c1.Getdata();
    c2.Getdata();
    cout << "Before swap :"<<endl;
    c1.Display();
    c2.Display();
    cout << "After swap :"<<endl;
    swapobj(c1,c2);
    c1.Display();
    c2.Display();
    return 0;
}