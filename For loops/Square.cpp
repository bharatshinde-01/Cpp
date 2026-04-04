#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the n number to claculate square :";
    cin>>n;
    int square = 0;
    for (int i = 1; i <= n; i++) {
        square = square + n ;
    }
    cout << "Square of number is this :"<<square;
    
    return 0;
}