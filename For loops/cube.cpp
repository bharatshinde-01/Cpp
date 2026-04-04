#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cout << "Enter the n number :";
    cin>> n;
    int cube = 0;
    for (int i = 1; i <= n; i++) {
        cube = n * n * n;
    }
    cout << "Cube of number is this :"<<cube;
    return 0;
}