#include <iostream>
using namespace std;
    int rev(int n , int re = 0) {
        if( n == 0) return re;
        int dig = n % 10;

        return rev(n / 10, re * 10 + dig);
    }
int main() {
    int n;
    cout << "Enter the n number ";
    cin >> n;
    cout << "your reverse number is :"<<rev(n,0);
    return 0;
}