#include <iostream>
using namespace std;
int pali( int n ,int rev = 0){
    if ( n == 0) return rev;
    int dig = n % 10;

    return pali(n / 10, rev * 10 + dig);
}
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int ori = n;
    int rev = pali( n ,0);
    if(ori == rev){
        cout<<" yes! this is a palinadrome number :"<<n;
    }
    else{
        cout<<"This is nor palindrome number ! ";
    }
    return 0;
    
}