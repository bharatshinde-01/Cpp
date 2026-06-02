#include <bits/stdc++.h>
using namespace std;
    class Demo {
    public:
        static int count;
        Demo(){}
        void display(){
            count ++;
            cout<<" Display function count :" <<count <<endl;
        }
    };
    int Demo::count = 0 ;
int main() {
    Demo d1,d2,d3;
    d1.display();
    d2.display();
    d3.display();
    return 0;
}