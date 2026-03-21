// #include <iostream>
// using namespace std;
//     int sumofdig(int n) {
//         int sum = 0;
//         while (n != 0) {
//             int dig = n % 10;
//             sum = sum + dig;
//             n =n /10;
//         }
//         return sum;
//     }
// int main() {
//     int n;
//     cout << "Enter the n number ";
//     cin >> n;
//     int count = sumofdig(n);
//     cout << "The count of digits is "<<count;
//     return 0;
// }
#include <iostream>
using namespace std;
int oddnumsum(int n) {
    if( n == 0 ) return 0;
    int d = n % 10;
    if( d % 2 != 0)
    return d + oddnumsum(n / 10);
else return oddnumsum( n / 10);
  
}
int main() {
    int n;
    cout << "Enter the n number's :";
    cin >> n;
    cout << oddnumsum(n);
    return 0;
}