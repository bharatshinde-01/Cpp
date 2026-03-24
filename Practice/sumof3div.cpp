#include <iostream>
using namespace std;
    int div ( int n) {
        if( n == 0 ) return 0;
        int d = n % 10;
        if( d % 3 == 0) {
        
            return d + div( n / 10);
        }
        else 
        return div ( n / 10) ;
    }
int main() {
    int n;
    cout << "Enter the n Number's ";
    cin >> n;
    cout << "The sum of Divisible of 3 number :"<<div(n);
    return 0;
}