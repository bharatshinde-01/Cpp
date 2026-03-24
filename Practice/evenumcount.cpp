#include <iostream>
using namespace std;
    int count(int n) {
        if( n == 0) return 0;
        int d = n % 10;
        if( d % 2 == 0) return 1 + count(n / 10);
        else 
        return count ( n / 10);
    }
int main() {
    int n ;
    cout << "Enter the n number :";
    cin >> n;
    cout << "The count of even numbers is :"<<count( n );
    return 0;
}