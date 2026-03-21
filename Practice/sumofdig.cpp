// #include <iostream>
// using namespace std;
//     int sum(int n) {
//         int sum = 0;
//        while ( n != 0 ) {
//            int dig = n % 10;
//            sum = sum + dig;
//            n = n / 10;
//        }
//        return sum;
//     }
// int main() {
//     int n ;
//     cout << "Enter the n number ";
//     cin >> n;
//     cout << "The sum of numbers is :"<<sum(n);
//     return 0;
// }

#include <iostream>
using namespace std;
int sumofnum(int n, int sum = 0) {
    if ( n == 0) return sum;
    // int dig = n % 10;
    // sum = sum + dig;
    // n = n / 10;
            int dig = n % 10;
            sum = sum + dig;

    return (n % 10) + sumofnum( n / 10);
}
int main() {
    int n;
    cout << "Enter the numbers ";
    cin >> n;
    cout << "Sum of digits is :"<<sumofnum(n,0);
    return 0;
}