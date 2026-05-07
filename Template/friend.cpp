#include <bits/stdc++.h>
using namespace std;
    class Swap {
    public:
        int x;
        Swap(){}
        void Get() {
            cout << "Enter value :";
            cin >> x;
        }
        void Display() {
            cout << "Value :"<<x <<endl;
        }
        friend void swap(Swap &s1, Swap &s2);
    };
    void swap(Swap &s1 , Swap &s2){
        int temp = s1.x;
        s1.x = s2.x;
        s2.x = temp;
    }
int main() {
    Swap s1 , s2;
    s1.Get();
    s2.Get();
    cout << "Before swap value :"<<endl;
    s1.Display();
    s2.Display();
    cout << "After swap values :" <<endl;
    swap(s1,s2);
    s1.Display();
    s2.Display();
    return 0;
}