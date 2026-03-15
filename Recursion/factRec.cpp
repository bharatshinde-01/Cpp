// #include <iostream>
// using namespace std;
//  int fact( int n) {
//  if ( n == 0 || n == 1) return 1;
//  return n * fact( n -1);
// }
// int main ( ){
//     int n ;
//     cout<<"Enter the N number :";
//     cin>>n;
//     cout<<fact(n);
// }

// Make a function which claculate 'a' raised to teh power 'b' using recursion 
#include <iostream>
using namespace std;
int pow ( int a , int b){
    if(  b ==0) return 1;
    return a * pow( a , b -1);
}
int main() {
    int a ,b ;
    cout<<" Enter the A number :";
    cin>>a;
    cout<<" Enter the B number :";
    cin >>b;
    cout<<pow( a, b);

}