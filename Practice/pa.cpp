#include <iostream>
using namespace std;
int pal( int n , int rev = 0){
    if( n == 0) return rev;
    int dig = n% 10;
    return pal(n/ 10, rev * 10 + dig);2
}
int main() {
    int n, rev = 0;
    cout<<"Enter the n number :";
    cin>>n;
    int ori = n;
    int num = pal(n ,0);
    if( num == ori ) {
        cout<<" yes this is palindrome num :"<<num;
    }
    else {
        cout << "This is not palindrome num :";
    }
    cout<<num;
    return 0;
}