// Create a base class Conversion. Derive class Weight (Gram, Kilogram) from Conversion
// class. Write a C++ program to read, convert and display operations.
#include <bits/stdc++.h>
using namespace std;
    class Conversion {
    public:
        float gm , kg;
        Conversion(){}
        void Get() {
            cout << "Enter Gram :";
            cin >> gm;
            cout << "Enter kilo gram :";
            cin >> kg;
        }
    };
    class Weight : public  Conversion {
    public:
    float kilo , gram;
        Weight(){}
        float Gram() {
            gram =  gm / 1000;
            cout << "Gram into kilo gram :"<<gram<<endl;
            
        }
        float Kilo(){
            gram = kg * 1000;
            cout << "Kilo into gram :"<<gram;
        }
    };
int main() {
    Weight w;
    w.Get();
    w.Gram();
    w.Kilo();
    return 0;
}