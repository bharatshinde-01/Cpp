#include <iostream>
using namespace std;
int max(int n) {
   int mx = 0; // minumun number print karnya sathi int mx = 9;
   while (n != 0) {
       int dig = n % 10;
       if ( dig > mx) // dig < mx for small num print 
        mx = dig;
    n = n /10;
   }
   return mx;
}
int main() {
    int n;
    cout << "Enter the number ";
    cin >> n;
    cout << "Maximum number is :"<<max(n);
    return 0;
}