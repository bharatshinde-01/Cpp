#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number :";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int dig = 10 % n ;
        n = n / 10;
        cout << n;
    }
    cout << endl;
}