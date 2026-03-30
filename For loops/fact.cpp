#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number :";
    cin >> n;
    int f = 1;
    for (int i = 1; i <=n; i++) {
        f = f * i;
    }
    cout << "Factorial of given number is this :"<<f;
    return 0;
}