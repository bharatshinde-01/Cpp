#include <iostream>
using namespace std;
    int remove(int n) {
        if( n == 0) return 0;
        int d = n % 10;
        if( d == 5) n = n / 10;
        // remove( n /10);
        return  d + 10 * remove(n / 10);
    }
int main() {
    int n ;
    cout << "Enter th number's :";
    cin >> n;
    cout << "Removing the 5 of number's :"<<remove(n);
    return 0;
}