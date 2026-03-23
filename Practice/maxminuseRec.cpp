// #include <iostream>
// using namespace std;
//     // int min(int n) {
//     //   int dig = 9;
//     //   while (n != 0) {
//     //       int mc = n % 10;
//     //     if( dig > mc)
//     //     dig = mc;
//     //     n = n/10;
//     //   }
//     //     return dig;
//     // }
//     int max(int n) {
//         if( n == 0 ) return 0;
//         int d = n % 10;
//         int mx = max( n / 10);
//         if (d > mx) {
//             return d;
//         } else {
//             return mx;
//         }
//     }
// int main() {
//     int n; 
//     cout << "Enter the n number ";
//     cin >> n;
//     cout<<max(n);
//     return 0;
// }
#include <iostream>
using namespace std;
    int min(int n) {
       int mi = 9;
       while (n != 0) {
           int dig = n % 10;
           if( dig < mi)
           mi = dig;
        n = n /10;
       }
        return mi;
    }
int main() {
    int n ;
    cout << "Enter the n number :";
    cin >> n;
    cout << "The smallest number is :"<<min(n);
    return 0;
}