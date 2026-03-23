// #include <iostream> 
// using namespace std;
// // int pali(int )
// int main(){
//     int n, rev =0,ori;
//     cout<<"Enter the number :";
//     cin>>n;
//     ori = n;
//     while( n != 0){
//         int dig = n % 10;
//         n = n /10;
//         // rev = rev * 10 + dig;
//         rev = rev  * 10;
//         rev = rev + dig;
//     }
//     cout<<rev;
// }
#include <iostream>
using namespace std;
int pali( int n, int rev = 0){
    if( n == 0) return rev;
    int dig = n % 10;
    return pali(n / 10, rev * 10 + dig);
}
int main(){
    int n ;
    cout<<"Enter the number :";
    cin>>n;
    int ori = n;
    int rev =  pali(n,0);
    cout<<"Palindrome number is :"<<rev;
    if( ori == rev){
        cout<<"yes ! this is a palinadrome num :"<<ori;
    }
    // else( rev != ori) {
    else
        cout<<"This is not a palinadrome num : "<<rev; 
    // }
    return 0;
}
