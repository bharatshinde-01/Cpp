#include <iostream>
using namespace std;
    int prod(int n ) {
        if ( n == 0 ) return 1;
        int d = n % 10;
        return d * prod( n / 10);
    
    }
int main() {
    int n ;
    cout << "Enter the n number's :";
    cin >> n;
    cout<<"The product of numbers is :" <<prod( n );
    return 0;
}