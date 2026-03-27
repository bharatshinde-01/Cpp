#include <iostream>
using namespace std;

int main() {
    int m;
    cout << "Enter the number :";
    cin >> m;
    for (int i = 0; i <= m; i++) {
        if( i % 2 != 0){
            cout << " "<<i;
        }
    }
    return 0;
}