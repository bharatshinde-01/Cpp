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