#include <iostream>
using namespace std;
    int prod(int a , int p = 1) {
        if( a < 10 ) return a ;

        return (a % 10) * prod( a / 10) ;
    }
int main() {
    int n;
    cout << "Enter the numbers :";
    cin >> n;
    cout << "Product of numbers is :"<<prod(n ,1);
    return 0;
}