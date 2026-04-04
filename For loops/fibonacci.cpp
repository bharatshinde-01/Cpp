#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cout << "Enter the number to print fibonacci series :";
    cin >> n;
     if( n <= 0) {
        cout << "Please enter the positive integer ! ";
        return 0;
     }
     int a = 1 , b = 2;
     cout << "Fibonacci series :";
     for (int i = 1; i <= n; i++) {
         cout << a <<"  ";
         int next = a + b ;
         a = b ; 
         b = next ;
     }
     cout << endl;
     return 0 ;
}