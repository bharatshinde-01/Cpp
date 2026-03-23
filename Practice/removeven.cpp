#include <iostream>
using namespace std;
    int reveve(int n) {
        if ( n == 0) return 0;
        int d = n % 10;
        if( d % 2 == 0) {
            return reveve(n / 10);
        }
        return d + 10 * reveve( n / 10);
    }
int main() {
    int n ;
    cout << "Enter the n number's :";
    cin >> n;
    cout<<"Remove the all even number's :"<<reveve(n);
    return 0;
}