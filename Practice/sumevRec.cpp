#include <iostream>
using namespace std;
    int sumev(int n) {
        if( n == 0) return 0;
        int d = n %10;
        if( d % 2 == 0)  // change only == to != then print odd numbers sum
        return d +sumev(n /10);
        else
        return sumev(n /10);
    }
int main() {
    int n ;
    cout << "Enter the n number :";
    cin >> n; 
    cout << "The sum of even number's is :"<<sumev( n );
    return 0;
}