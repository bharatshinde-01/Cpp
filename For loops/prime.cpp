#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the n number to check number is prime or not :";
    cin >> n;
    for (int i = n; i <= n; i++) {
        if( i % 2 == 0){
            cout << "Not prime";
        }
        else{
            cout << "Prime number ";
        }
    }
    return 0;
}