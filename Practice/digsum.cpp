#include <iostream>
using namespace std;
int sumdig(int n) {
    if(n == 0) return 0;
    return (n % 10) + sumdig(n / 10);
}
int main() {
    int n ;
    cout << "Enter the n Number ";
    cin >> n;
     cout << "The sum of num is " <<sumdig(n);

    return 0;
}