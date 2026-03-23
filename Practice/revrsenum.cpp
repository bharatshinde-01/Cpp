#include <iostream>
using namespace std;
int revrse( int n , int rev = 0) {
    
    if ( n == 0) return rev;
    int d = n % 10;
    return revrse(n / 10 , rev * 10 + d);
}
int main() {
    int n ;
    cout<<"Enter the number's :";
    cin>>n;
    cout<<"The number is "<<n <<endl;
    cout<<"After the revrse numbers is :" <<revrse(n);
    return 0;
}