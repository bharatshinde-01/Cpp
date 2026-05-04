// Write a C++ program
// - To reverse a given number
// - To check whether the number is Armstrong numbers or not.

#include <bits/stdc++.h>
using namespace std;
int reverse( int n , int rev =0){
    if( n == 0) return rev;
    int dig = n % 10;
    return reverse(n/10,rev * 10 + dig);
}
int main() {
    int n;
    cout << "Enter a number :";
    cin>>n;
    int m = n;
    cout << "Reverse number is :"<<reverse(n)<<endl;
    int rem , sum = 0;
    while (n > 0){
        rem = n % 10 ;
        sum = sum + rem * rem * rem ;
        n = n / 10;
    }
    if( m == sum ){
        cout << "Yes this is a armstrong number !";
    }
    else {
        cout << "This is not a armstrong number !";
    }
    return 0;
}