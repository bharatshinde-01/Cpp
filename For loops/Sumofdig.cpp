#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the n number :";
    cin >> n;
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum = sum + i;
    }
    cout << "Sum of digits is this :"<<sum;
    return 0;
}