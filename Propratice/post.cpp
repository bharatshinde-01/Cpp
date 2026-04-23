#include <bits/stdc++.h>
using namespace std;
class Test {
    int x;
public:
    Test(int a) {
        x = a;
        cout << "Constructor chala" << endl;
    }
    ~Test() {
        cout << "Destructor chala" << endl;
    }
};

int main() {
    Test t1(5);
    Test t2(10);
    return 0;
}
// int main() {
//     int x = 5;
//     int a = x--;
//     int sum = 0;
//     sum = a + x;
//     cout << "Value of a :"<<a<<endl;
//     cout << "Value of x :"<<x<<endl;
//     cout << "Value of a :"<<a<<endl;
//     return 0;
// }