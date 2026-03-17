#include <iostream>
using namespace std;
int sumofdig( int n){
    if(n == 1) return 1;
    return n + sumofdig(n -1);
}
int main(){
    int n ;
    cout<<"Enter the n number :";
    cin>>n;
    cout<<endl<<sumofdig(n);
    return 0;
}