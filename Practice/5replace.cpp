#include <iostream>
using namespace std;
    int replace(int n) {
        if( n == 0 ) return 0;
        int d = n % 10;
        if( d == 5)
           d = 9;
           return d + 10* replace( n / 10);
        
    }
int main() {
    int n ;
    cout << "Enter the n numbers's :";
    cin >> n;
    // replace(n);
    cout << "You'rs number replace 5 with 6:"<<replace(n);
    return 0;
}