// #include <iostream>
// using namespace std;
//     int sume(int n) {
//         int b = 0;
        
//         while (n !=0 ) {
//             int c = n % 10;
//             if( c % 2 == 0)
//             b = b +c;
//             n = n / 10;
//         }
//         return b;
//     }
// int main() {
//     int n ;
//     cout << "Enter the number's :";
//     cin >> n;
//     cout << "The sum of even number is :"<<sume(n);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void odds(int n) {
//     int d = 0;
//     while (n != 0) {
//          int m = n % 10;
//          if(m % 2 !=0)
//          d = d +m;
//         n = n /10;
//     }
//     cout << "The sum of odd numbers is "<<d;
// }
// int main() {
//     int n ;
//     cout << "Enter the n number :";
//     cin >> n;
//    odds(n);
//     return 0;
// }
#include <iostream>
using namespace std;
int sum(int n) {
    int d = 0;
    if( n == 0) return 0;
    int m = n % 10;
    return m + sum(n / 10);
}
int main() {
    int n ;
    cout << "Enter the n number :";
    cin >> n;
    cout << sum(n);
    return 0;
}