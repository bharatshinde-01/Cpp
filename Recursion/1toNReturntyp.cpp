#include <iostream>
using namespace std;
int sum ( int n) {
    // cout<<n<< " ";
    if ( n==1) return 1;
    return n + sum (n -1);   
}
int main () {
   int n ;
   cout<<" Enter the N number :";
   cin >>n;
   cout<<sum(n);
}
